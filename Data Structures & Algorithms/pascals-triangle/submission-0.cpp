class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> triangle;


        for(int i = 0; i < numRows; i++) {
             vector<int> row;
            row.push_back(1);

            for(int j = 1; j < i; j++) {
                row.push_back(triangle[i-1][j-1] + triangle[i-1][j]);
            }

            // Last element is also 1 (except first row)
            if(i > 0) {
                row.push_back(1);
            }

            // Store the row
            triangle.push_back(row);
        }

        return triangle;
    }
};