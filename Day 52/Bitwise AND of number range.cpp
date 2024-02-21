class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left==right) return left;
        if(left==0) return 0;
        int i1=log2(left);
        int j1=log2(right);
        if(i1!=j1) return 0;
        int num=left;
        int posi=0,i=0;

        while(left>0 && right>0){

            if(((left & 1)==0 && (right &1) != 0) || ((left & 1)!=0 && (right &1) == 0)) {
                posi=i;
            }
            left>>=1;
            right>>=1;
            i++;

        }
      
        int ans=0;
        for(int j=0;j<i;j++ ){
            if(j>posi){
                ans=ans | 1<<j;
            }


        }
        return ans & num;
        
    }
};
