#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int index1 = 0;
        int index2 = 0;
        vector<int> fin;
        cout << "here is size" << nums.size()<<endl;
        for(int i = 0;i < nums.size() - 1; i ++){
             for(int j = 1; j < nums.size(); j++){
                if(abs(nums[i] - nums[j]) == target){
                    index1 = i;
                    index2 = j;
                    fin.push_back(index1);
                    fin.push_back(index2);
                    return fin;
                }
            }
        }
        return fin;
    }
};

int main()
{
    vector<int> numbers; 
    for(int i = 0; i < 6; i++){
        numbers.push_back(i);
    }
    Solution *vector_ind;
    vector_ind = new Solution;
    vector<int> indices = vector_ind->twoSum(numbers,2);
    for(int i = 0; i < indices.size(); i++){
        cout << indices[i] << endl;
    }

    return 0;
}
