#include<bits/stdc++.h>
#include<vector>
//typedef vector<int>;

#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
int main() {
int a[] = {1, 2, 2, 2, 3, 3, 2, 2, 1};
vector<int>v(a, a + 9);
sort(ALL(v));UNIQUE(v);
for (int i = 0; i < (int)v.size(); i++) printf("%d\n", v[i]);
}

