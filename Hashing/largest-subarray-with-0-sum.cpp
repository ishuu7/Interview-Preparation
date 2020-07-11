// https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

int maxLen(int A[], int n) {
    unordered_map<int, int> m;
    int curr = 0;
    int ans = 0;
    m[0] = 0;
    for(int i = 0; i < n; i++) {
        curr += (A[i]);
        if(!m.count(curr))
            m[curr] = i + 1;
        else {
            ans = max(ans, i + 1 - m[curr]);
        }
    }
    return ans;
}
