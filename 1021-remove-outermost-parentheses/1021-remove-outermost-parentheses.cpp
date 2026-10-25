class Solution {
public:
    string removeOuterParentheses(string s) {
        int sum = 1;
        string result;
        
        for(int i = 1; i < s.size(); i++){
            if(s[i]=='('){
                sum += 1;
            }
            else if(s[i]==')'){
                sum -= 1;
            }

            if(sum != 0){
                result += s[i];
            }
            else if(sum == 0){
                sum = 1;
                i++;
            }
        }
        return result;
    }
};