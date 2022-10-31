#include <bits/stdc++.h>
using namespace std;


// using 2 pointer approch - only for sorted array 
// T.C - O(n)
// S.C - O(1)
int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 || n == 1)
        return n;

        int i = 0;
        for(int j = 1; j < n; j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
        }

        return i+1;
    }


/*
Brute force -
by using hasmap ...if value is more than 1 ...it is not inserted.
*/
// for unsorted 