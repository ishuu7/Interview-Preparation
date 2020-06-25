// https://leetcode.com/problems/next-permutation/
// Wasn't able to come up with a good solution at once, 
// very cool implementation.


class Solution {
public:
    void nextPermutation(vector<int>& a) {
        if(a.size() == 1)
            return;
        int i = a.size() - 1;
        int k = i;
        while(i > 0 && a[i-1] >= a[i]) {
            i--;
        }
        for(int j = i; j < k; j++, k--)
            swap(a[j], a[k]);
        if(i > 0) {
            k = i--;
            while(a[k] <= a[i]) {
                k++;
            }
            swap(a[k], a[i]);
        }
    }
};
