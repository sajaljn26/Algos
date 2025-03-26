class Solution {
public:
    int minBitFlips(int start, int goal) {
           // solving this 
           int x = start ^ goal;
           int count = 0;
           while(x){
             count += x & 1;
             x >>= 1;
           }
           return count;
    }
};