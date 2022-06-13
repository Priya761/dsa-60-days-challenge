// TC : O(n*m +n*m)
// SC : O(1)
// Where n amd m are rows and columns respectively.

#include<iostream>
#include<vector>
using namespace std;

void setMatrixZeros(vector<vector<int>> &v){
    // 1st traversal
    int col0 = 1;  // an int variable for storing status of column 0 i.e, 1st column.
    for(int i=0; i<v.size(); ++i){
        if(v[i][0] == 0)
            col0 = 0;
        for(int j=1; j<v[0].size(); ++j){
            if(v[i][j] == 0){
                v[i][0] = 0;
                v[0][j] = 0;
            }
        }
    }

    // 2nd traversal
    for(int i=v.size()-1; i>=0; --i){
        for(int j=v[0].size()-1; j>=1; --j){
            if(v[i][0] == 0 || v[0][j] == 0)
                v[i][j] = 0;
        }
        if(col0 == 0)
            v[i][0] = 0;
    }
}

int main(){
    vector<vector<int>> v;

    // input vector
    int row, col;
    cin >> row >> col;

    for(int i=0; i<row; ++i){
        vector<int> temp;
        for(int j=0; j<col; ++j){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    setMatrixZeros(v);

    // print vector
    for(auto &it : v){
        for(auto &x : it)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}