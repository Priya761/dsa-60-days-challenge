// TC : O(n*m +n*m)
// SC : O(n)+O(m)
// Where n amd m are rows and columns respectively.

#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>> &v){
    for(auto &it : v){
        for(auto &x : it)
            cout << x << " ";
        cout << endl;
    }
}

int main(){

    vector<vector<int>> v;
    int r, c;
    cin >> r >> c;

    for(int i=0; i<r; ++i){
        vector<int> temp;
        for(int j=0; j<c; ++j){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    vector<int> row(c, -1);
    vector<int> column(r, -1);

    // 1st traversal - TC : O(n*m)
    for(int i=0; i<v.size(); ++i){
        for(int j=0; j<v[i].size(); ++j){
            if(v[i][j] == 0){
                row[j] = column[i] = 0;
            }
            // else{
            //     updating by 1 will override the existing value 0 of rows and columns
            //     row[j] = column[i] = 1;
            //     // cout << "no" <<" ";
            // }
            // row[j] = column[i] = ((v[i][j] == 0) ? 0 : 1) ;
        }
    }

    // 2nd traversal - TC : O(n*m)
    for(int i=0; i<v.size(); ++i){
        for(int j=0; j<v[i].size(); ++j){
            if(row[j] == 0 || column[i] == 0)
                v[i][j] = 0;
        }
    }

    print(v);
}