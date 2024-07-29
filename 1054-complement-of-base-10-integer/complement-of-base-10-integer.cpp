class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int i = 0;
      int ans = 0;
     while(n>0){
        int bit = n&1;
        if(bit==0){
            ans = ans+pow(2,i);
        }
        n = n>>1;
        i++;
    }
    return ans;
    }
};