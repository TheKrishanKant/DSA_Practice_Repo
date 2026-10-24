class Solution {
public:
    string reverseWords(string s) {
        int j =0;
        string resultS;
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 32){
                count++;
                string subS = s.substr(j,i-j);
                reverse(subS.begin(), subS.end());
                resultS += subS + ' ';
                j = i+1;
            }
            
        }
        if(count == 0){
                reverse(s.begin(), s.end());
                return s;
            }
        for(int k = s.size()-1;k>0; k--){
            string last;
            last += s[k];
            if(s[k] == 32){
                break;
            }
            resultS += last;
        }
        return resultS;
    }
};