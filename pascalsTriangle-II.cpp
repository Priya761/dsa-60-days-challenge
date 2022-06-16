#include<iostream>
#include<vector>
using namespace std;

int main(){
    int rows;
    cin >> rows;

    vector<int> nums(rows, 1);

    // pascal's triangle II
    for(int i=1; i<rows-1; ++i){
        for(int j=i; j>=1; --j){
            nums[j] = nums[j] + nums[j-1];
        }
    }

    for(auto &it : nums)
        cout << it << " ";

    return 0;
}