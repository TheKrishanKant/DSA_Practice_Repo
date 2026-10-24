class Solution {
public:
    string reverseWords(string s) {
        int j =0;
        // string resultS;
        // int count = 0;
        for(int i = 0; i <= s.size(); i++){
            if(s[i] == 32 || i == s.size()){
                // count++;
                // string subS = s.substr(j,i-j);
                reverse(s.begin() + j, s.begin()+ i);
                // resultS += subS + ' ';
                j = i+1;
            }
            
        }
        // if(count == 0){
        //         reverse(s.begin(), s.end());
        //         return s;
        //     }
        // for(int k = s.size()-1;k>0; k--){
        //     string last;
        //     last += s[k];
        //     if(s[k] == 32){
        //         break;
        //     }
        //     resultS += last;
        // }
        // return resultS;
        return s;
    }
};