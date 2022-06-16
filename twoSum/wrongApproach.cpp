// Assumptions (specified in question) :
// Assume that each input would have exactly one solution. 
// you may not use the same element twice
// Constraint : 2 <= nums.length <= 10^9


// ******* Read this *********
// this method will not work when the array is unsorted. We can't sort the array because we have to return indices.
// for eg : array [3, 2, 4] 'sum' given is 6
// If we sort the array, we will get output [0,2] instead of [1,2]. So,

// Method is Sorting and Two Pointer

// This program will give wrong output

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i=0; i<n; ++i){
        cin >> nums[i];
    }

    int sum;
    cin >> sum;

    sort(nums.begin(), nums.end());

    int i=0, j=nums.size()-1;
    while(i<j){
        if(nums[i] + nums[j] == sum){
            cout << i << " " << j;
            break;
        }
        else if(sum < nums[i] + nums[j])
            j--;
        else
            i++;
    }

    return 0;
}