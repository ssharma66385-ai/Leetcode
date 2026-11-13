class Solution {
public:
    int digitFrequencyScore(int n) {
        int num=n;
        int s=0;
        while(num>0){
            int d=num%10;
            s+=d;
            num=num/10;
        }
        return s;
    }
};