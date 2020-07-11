// https://www.interviewbit.com/problems/subarray-with-given-xor/

int Solution::solve(vector<int> &A, int B) {
    map<int,int> m;
    int curr = 0;
    m[0]++;
    int ans = 0;
    for(int i = 0; i < A.size(); i++) {
        curr ^= A[i];
        m[curr]++;
        ans += (m[curr^B]); // cool stuff.
    }
    return ans;
}
