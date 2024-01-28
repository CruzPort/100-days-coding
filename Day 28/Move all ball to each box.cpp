class Solution {
public:
    vector<int> minOperations(string boxes) {
        int sum=0, f=0;
        vector<int>v(boxes.size(),0);
        
        for(int i=0;i<boxes.size();i++){
            v[i]+=sum;
            if(boxes[i]=='1'){f++;sum+=f;}
            else if(f!=0)   sum=sum+f;
        }

        sum=0, f=0;
        
        for(int i=boxes.size()-1;i>=0;i--){
            v[i]+=sum;
            if(boxes[i]=='1'){f++;sum+=f;}
            else if(f!=0)   sum=sum+f+0;
        }
        return v;
        
    }
};
