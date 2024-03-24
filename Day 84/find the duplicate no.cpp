
class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int size = arr.size();

        for(int i = 0; i < size; i++) {
            int sender = std::abs(arr.at(i));
            int &rDest = arr.at(sender);

            if(rDest < 0) {
                return sender;
            }

            rDest *= -1;
        }

        return -1;
    }
};
