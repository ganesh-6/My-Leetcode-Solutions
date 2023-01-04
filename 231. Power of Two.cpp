class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        while(n!=1 | n!=0){
            if (n==0) return false;
            if (n==1) return true;
            if (n%2 == 0) n = n/2; 
            else return false;
        }
        return true;
    }
};