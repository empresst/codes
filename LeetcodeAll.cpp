//Two sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>m;
        for(int i = 0; i < nums.size(); i++){
            if(m.count(target - nums[i])) return {m[target - nums[i]], i};
            m[nums[i]] = i;
        }
    }
};



//Add two numbers
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 **/
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode head(0);
        ListNode* cur = &head;
        int carry = 0;
        while(l1 || l2 || carry){
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;
            
            ListNode* node = new ListNode((x + y + carry) % 10);
            cur->next = node;
            cur = node;
            
            carry = (x + y + carry) / 10;
            
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        return head.next;
    }
};

//longest substring without repeating characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>m;
        int maxlen = 0;
        for(int i = 0, j = 0; j < s.size(); j++){
            m[s[j]]++;
            while(m[s[j]] > 1) m[s[i++]]--;
            maxlen = max(maxlen, j - i + 1);
        }
        return maxlen;
    }
};

//median of two sorted arrays 
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        if(m > n) return findMedianSortedArrays(nums2, nums1);
        int lo = 0, hi = m, mid = (m + n + 1)/2;
        while(lo <= hi){
            int i = (lo + hi)/2;
            int j = mid - i;
            if(i < m && nums2[j - 1] > nums1[i]) 
                lo = i + 1;
            else if(i > 0  && nums1[i - 1] > nums2[j])
                hi = i - 1;
            else{
                int maxLeft = (i == 0) ? nums2[j - 1] : (j == 0) ? nums1[i - 1] : max(nums1[i - 1], nums2[j - 1]); 
                int minRight = (i == m) ? nums2[j] : (j == n) ? nums1[i] : min(nums1[i], nums2[j]);
                return (m + n) % 2 ? maxLeft : (maxLeft + minRight) / 2.0;
            }
        }
    }
};


//longest palindromic subsequence 
class Solution {
public:
	string longestPalindrome(string s) {
		if (s.size() == 0 || s.size() == 1) return s;
		string res;
		int maxlen = 0;
		for (int i = 0; i < s.size() - maxlen; i++) {
			for (int j = s.size() - 1; j >= i + maxlen; j--) {
				if (s[j] != s[i]) continue;
				string str = s.substr(i, j - i + 1);
				if (isPalindrome(str) && str.size() > maxlen) {
					maxlen = str.size();
					res = str;
				}
			}
		}
		return res;
	}

	bool isPalindrome(string s) {
		if (s.size() == 0 || s.size() == 1) return true;
		int i(0), j(s.size() - 1);
		while (s[i] == s[j] && i < j) i++, j--;
		return i >= j;
	}
};


//zigzag conversion
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<string>v(numRows, "");
        int d = 1;
        int row = 0;
        for(auto c: s){
            v[row].push_back(c);
            row += d;
            if(row == numRows - 1) d = -1;
            if(row == 0) d = 1;
        }
        string res;
        for(auto x: v) res.append(x);
        return res;
    }
};


//reverse integer

// My Solution
class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        int base = 1;
        int i = s[0] == '-' ? 1 : 0;
        int res = 0;
        while(i < s.size()){
            if(base == 1000000000 && (s[i] - '0' > 2 || INT_MAX - (s[i] - '0') * base < res)) return 0;
            res += (s[i] - '0') * base;
            base *= 10;
            i++;
        }
        return s[0] == '-' ? -res : res;
    }
};

// Solution from https://discuss.leetcode.com/topic/6005/shortest-code-possible-in-c
class Solution {
public:
    int reverse(int x) {
        long long res = 0;
        while(x) {
            res = res*10 + x%10;
            x /= 10;
        }
        return (res<INT_MIN || res>INT_MAX) ? 0 : res;
    }
};


