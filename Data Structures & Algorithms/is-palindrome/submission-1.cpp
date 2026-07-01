class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        string ans;
        for(char ch:s){
            if(isalnum(ch)){
            temp+=tolower(ch);

        }
        }
        ans=temp;
        reverse(temp.begin(),temp.end());
        if(temp==ans){
            return true;
        }
        return false;
        
    }
};
