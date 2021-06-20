#include <stdio.h>
#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int temp = 0;
        int rev = 0;
        int pop = 0;
        bool neg = false;
        if(x < 0){
            neg = true;
            x = x * -1;
        }
        while(x > 0){
            pop = x%10;
            x = x/10;
            temp = rev * 10 + pop;
            rev = temp;
        }
        if(neg == true){
            rev = rev * -1;
        }
        return rev;
    }
};
int main()
{
    Solution *num;
    num = new Solution;
    int reversed = num->reverse(-1345);
    cout << reversed << endl;
    return 0;
}
