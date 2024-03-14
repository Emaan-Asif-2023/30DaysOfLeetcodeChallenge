class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t answer=0;
        int bitShift=31;
        while (n>0)
        {
            answer^=((n%2)<<bitShift);
            n>>=1;
            --bitShift;
        }
        return answer;
        
    }
};