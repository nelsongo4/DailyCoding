#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int temp = 0;
        int rev = 0;
        int pop = 0;
        bool neg = false;
        int c = x;
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
        if(c == rev){
            return true;
        }
        return false;
    }
};

int main()
{
    Solution *num;
    num = new Solution;
    cout << num -> isPalindrome(1234321) <<endl;    
    return 0;
}
