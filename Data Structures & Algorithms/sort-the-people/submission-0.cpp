class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>people;
        vector<string>ans;
        for(int i=0;i<names.size();i++){
            people.push_back({heights[i],names[i]});

        }
        sort(people.rbegin(),people.rend());
          for(int i=0;i<names.size();i++){
                  ans.push_back(people[i].second);

        
                

        }
        return ans;
        
    }
};