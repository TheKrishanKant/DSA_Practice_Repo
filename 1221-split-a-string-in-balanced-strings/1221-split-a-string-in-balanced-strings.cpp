class Solution {
public:
    int balancedStringSplit(string s) {
        int sum = 0;
        int count = 0;
        for(int i = 0; i< s.size(); i++){
            if(s[i] == 'L'){
                sum += 1;
            }
            else{
                sum -= 1;
            }
            if(sum == 0){
                count += 1;
            }
        }
        return count;
    }
};