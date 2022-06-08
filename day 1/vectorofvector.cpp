#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>> v){
    for(auto &it : v){
        for(auto &x : it)
            cout << x << " ";
        cout << endl;
    }
}

int main(){
    vector<vector<int>> v;

    int num;
    cin >> num;

    for(int i=0; i<num; ++i){
        int n;
        cin >> n;
        vector<int> temp;
        for(int j=0; j<n; ++j){
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    print(v);

    return 0;
}