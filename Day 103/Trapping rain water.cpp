class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left(n);
        vector<int> right(n);
        int maximum = height[0];
        for(int i=0;i<n;i++){
            maximum = max(maximum,height[i]);
            left[i] = maximum;
        }
        maximum = height[n-1];
        for(int i=n-1;i>=0;i--){
            maximum = max(maximum,height[i]);
            right[i] = maximum;
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans += min(left[i],right[i])-height[i];
        }
        return ans;
    }
};
