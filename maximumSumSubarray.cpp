#include<iostream>
#include<vector>
#include<climits>
// #include<algorithm>                     // not required for max(a, b);
using namespace std;

int kadanes(vector<int> &nums){
    int sum = 0;
    int maxSum = INT_MIN;                  // can also write : maxSum = nums[0];
    
    for(int i=0; i<nums.size(); ++i){
        sum += nums[i];
        if(nums[i] > sum)
            sum = nums[i];
        maxSum = max(maxSum, sum);
    }

    return maxSum;
}

int main(){
    vector<int> nums;

    int n;
    cin >> n;

    for(int i=0; i<n; ++i){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << kadanes(nums);

    return 0;
}