// constraint : 1 <= rows <= 30 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int rows;
    cin >> rows;

    vector<vector<int>> nums(rows);

    // pascal's triangle
    for(int i=0; i<rows; ++i){
        nums[i].resize(i+1);
        nums[i][0] = nums[i][i] = 1;
        for(int j=1; j<i; ++j){
            nums[i][j] = nums[i-1][j-1] + nums[i-1][j];
        }
    }

    // print 
    for(auto &it : nums){
        for(auto &x : it)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}