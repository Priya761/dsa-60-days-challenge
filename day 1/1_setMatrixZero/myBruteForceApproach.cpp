// Didn't work out well!

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

    int s;
    cin >> s;

    for(int i=0; i<s; ++i){
        vector<int> temp;    // size is 's' since it is a square matrix.
        for(int j=0; j<s; ++j){
            int n;
            cin >> n;
            temp.push_back(n);
        }
        v.push_back(temp);
    }

    // setMatrixZero
    for(int i=0; i<s; ++i){
        for(int j=0; j<s; ++j){
            if(v[i][j] == 0){
                for(int k=0; k<s; ++k){
                    v[i][k] = 0;
                    v[k][j] = 0;
                }
            }
        }
    }

    print(v);

    return 0;
}