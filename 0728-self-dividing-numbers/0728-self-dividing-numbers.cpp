class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i = left; i < right+1; i++){
            
            int j = i;
            while(j>0){
                int rem = j%10;
                if(rem ==0){
                    break;
                }
                if(i%rem!=0){
                    break;
                }
                if(j<10){
                    if(i%j==0){
                        result.push_back(i);
                    }
                }
                j/=10;
            }
        }
        return result;
    }
};