class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
            for(int k=0;k<mat[0].size();k++){ 
                int i=0,j=k; 
                while(i<mat.size() && j<mat[i].size()){
                    int i1=i+1,j1=j+1; 
                    while(i1<mat.size() && j1<mat[i].size()){
                        if(mat[i1][j1]<mat[i][j]){
                            int temp = mat[i1][j1];
                            mat[i1][j1] = mat[i][j];
                            mat[i][j] = temp;
                        }
                        i1++;
                        j1++;
                    }
                    i++;
                    j++;
                }
            }
            for(int k=1;k<mat.size();k++){//Here we are iterating through diagonals whose start point is within first column
                int i=k,j=0;
                while(i<mat.size() && j<mat[i].size()){
                    int i1=i+1,j1=j+1;
                    while(i1<mat.size() && j1<mat[i].size()){
                        if(mat[i1][j1]<mat[i][j]){
                            int temp = mat[i1][j1];
                            mat[i1][j1] = mat[i][j];
                            mat[i][j] = temp;
                        }
                        i1++;
                        j1++;
                    }
                    i++;
                    j++;
                }
            }
            return mat;
    }
};
