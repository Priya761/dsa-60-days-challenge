// Works correctly when elements are non-negative.

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

void setMatrixZero(vector<vector<int>> &v){

    for(int i=0; i<v.size(); ++i){
        for(int j=0; j<v[i].size(); ++j){
            if(v[i][j] == 0){
                for(int k=0; k<v.size(); ++k){
                    if(v[i][k] != 0)
                        v[i][k] = -1;
                    if(v[k][j] != 0)
                        v[k][j] = -1;
                }
            }
        }
    }

    for(auto &it : v){
        for(auto &x : it){
            if(x == -1)
                x = 0;
        }
    }
}

int main(){
    vector<vector<int>> v;

    int r, c;
    cin >> r >> c;

    for(int i=0; i<r; ++i){
        vector<int> temp;    
        for(int j=0; j<c; ++j){
            int n;
            cin >> n;
            temp.push_back(n);
        }
        v.push_back(temp);
    }

    setMatrixZero(v);

    print(v);

    return 0;
}