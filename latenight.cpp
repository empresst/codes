#include<bits/stdc++.h>
#include <iostream> // or <cstdio>
using namespace std;
char digits[100]; // using global variables in contests can be a good strategy
int main() {
    int N;
scanf("%d", &N);
while (N--) { // we simply loop from N, N-1, N-2, ... 0
scanf("0.%[0-9]...", &digits); // surprised?
printf("the digits are 0.%s\n", digits);
} }
