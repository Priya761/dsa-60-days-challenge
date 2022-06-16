#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums;

    int n;
    cin >> n;

    for(int i=0; i<n; ++i){
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int sum;
    cin >> sum;

    sort(nums.begin(), nums.end());

    int i=0, j=1;
    while(i<j){
        if(sum = nums[i] + nums[j])
            break;
        else if(sum < nums[i] + nums[j])
            i++;
        else
            j++;
    }

    if(i != j){
        for(int k=i; k<=j; ++k)
            cout << nums[k] << " ";
    }
}