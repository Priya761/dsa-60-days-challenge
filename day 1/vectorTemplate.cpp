#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums;

    int n;
    cin >> n;

    for(int i=0; i<n; ++i){
        int n;
        cin >> n;
        nums.push_back(n);
    }

    for(int i=0; i<nums.size(); ++i){
        cout << nums[i] << " ";
    }

    return 0;
}