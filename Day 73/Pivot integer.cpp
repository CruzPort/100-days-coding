class Solution {
public:
    int pivotInteger(int n) {
        int start = 0;
        int end = 0;
        for(int i=n;i>0;i--){
            start = (i*(i+1))/2;
            end +=i;
            if(start == end)    return i;
        }
        return -1;
    }
};
