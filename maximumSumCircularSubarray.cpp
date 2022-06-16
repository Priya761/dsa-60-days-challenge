#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int kadanes(vector<int> &nums){
    int sum = 0; 
    int maxSum = INT_MIN;

    for(int i=0; i<nums.size(); ++i){
        sum += nums[i];
        if(nums[i] > sum)
            sum = nums[i];
        maxSum = max(maxSum, sum);
    }

    return maxSum;
}

int maxSumCircularSubarray(vector<int> &nums){
    // linear maxSum
    int lsm = kadanes(nums);

    int totalSum = 0;
    for(int i=0; i<nums.size(); ++i){
        totalSum += nums[i];
        nums[i] = -1*nums[i];
    }

    // negative linear maxSum
    int negativelsm = kadanes(nums);

    //circular maxSum
    int csm = totalSum - (-negativelsm);

    if(lsm < 0)                       // OR if(csm == 0)
        return lsm;
    else 
        return max(lsm, csm);
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

    cout << maxSumCircularSubarray(nums);

    return 0;
}