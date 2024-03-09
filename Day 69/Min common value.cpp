class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int common = INT_MAX;
        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {class Solution {
    public:
        int getCommon(vector<int> &nums1, vector<int> &nums2){
            cin.tie(0);
            cout.sync_with_stdio(0);

            for(int x : nums1){
                int left = 0, right = nums2.size() - 1;

                if(nums2[left]==x || nums2[right]==x) return x;

                while(right-left > 1){
                    int middle = (left+right) / 2;

                    if(nums2[middle] == x) return x;

                    if(nums2[middle] < x) left = middle;
                    else right = middle;
                }
            }

            return -1;
        }
};
            if (nums1[i] == nums2[j]) {
                common = nums1[i];
                break;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }

        return common != INT_MAX ? common : -1;
    }
};
