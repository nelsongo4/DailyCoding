# DailyCoding
DailyCoding0
#include <iostream> 
#include <string>
using namespace std;

class Solution {
public:
	bool twosum(int arr[], int sz_arr,int num) {
		int i = 0;
		int j = 0;
		for (i = 0; i < sz_arr; i++) {
			for (j = i + 1; j < sz_arr; j++) {
				if ((arr[i] + arr[j]) == num) {
					return true;
				}
			}
		}

	}

};
int main()
{
	Solution truth_table;
	int sz_arr;
	int num; 
	cout << "Enter number: " << endl;
	cin >> num;
	cout << "Enter size of array: " << endl;
	cin >> sz_arr;
	int *arr = new int[sz_arr]; 
	for (int i = 0; i < sz_arr; i++) {
		cout << "Enter number: " << endl;
		cin >> arr[i];
	}
	cout << "True or false, numbers in array add up to " << num << endl;
	if (truth_table.twosum(arr, sz_arr, num)) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}

}
