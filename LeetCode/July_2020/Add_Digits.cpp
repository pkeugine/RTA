class Solution {
public:
    int addDigits(int num) {
        if(num/10==0) return num;
        int answer = 0;
        while(num) {
            answer += num%10;
            num = num/10;
        }
        return addDigits(answer);
    }
};
