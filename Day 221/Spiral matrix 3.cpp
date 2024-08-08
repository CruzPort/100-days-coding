class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int count=rows*cols-1;
        pair<int,int> currIndex=make_pair(rStart,cStart);
        int right=1,down=1,left=2,up=2;
        vector<vector<int>> ans;
        vector<int> tempo;
        tempo.push_back(rStart);
        tempo.push_back(cStart);
        ans.push_back(tempo);
        while(count>0)
        {
            int currRight=right;
            while(currRight>0)
            {
                currIndex=make_pair(currIndex.first,currIndex.second+1);
                currRight--;
                if(currIndex.first<rows && currIndex.second<cols && currIndex.first>=0 && currIndex.second>=0)
                {
                    count--;
                    vector<int> temp;
                    ans.push_back({currIndex.first,currIndex.second});
                }
            }
            right+=2;
            int currDown=down;
            while(currDown>0)
            {
                currIndex=make_pair(currIndex.first+1,currIndex.second);
                currDown--;
                if(currIndex.first<rows && currIndex.second<cols && currIndex.first>=0 && currIndex.second>=0)
                {
                    count--;
                    ans.push_back({currIndex.first,currIndex.second});
                }
            }
            down+=2;
            int currleft=left;
            while(currleft>0)
            {
                currIndex=make_pair(currIndex.first,currIndex.second-1);
                currleft--;
                if(currIndex.first<rows && currIndex.second<cols && currIndex.first>=0 && currIndex.second>=0)
                {
                    count--;
                    ans.push_back({currIndex.first,currIndex.second});
                }
            }
            left+=2;
            int currUp=up;
            while(currUp>0)
            {
                currIndex=make_pair(currIndex.first-1,currIndex.second);
                currUp--;
                if(currIndex.first<rows && currIndex.second<cols && currIndex.first>=0 && currIndex.second>=0)
                {
                    count--;
                    ans.push_back({currIndex.first,currIndex.second});
                }
            }
            up+=2;
        }
        return ans;
        
    }
};
