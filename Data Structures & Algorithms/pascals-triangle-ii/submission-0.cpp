class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>table;
        
        
        for(int i=0;i<=rowIndex;i++){
            vector<int>ans;

            ans.push_back(1);

            for(int j=1;j<i;j++){
                ans.push_back(table[i-1][j-1]+table[i-1][j]);
            }
            if(i>0){
                ans.push_back(1);
            }
            table.push_back(ans);
        }
        return table[rowIndex];
        
    }
};