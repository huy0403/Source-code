#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    vector<int> vt;
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        if(x == 1){
            int data; cin >> data;
            vt.push_back(data);
        }else{
            if(!vt.empty()){
                vt.erase(--vt.end());
            }
        }
    }
    if(vt.empty()){
        cout << "EMPTY";
    }
    else{
        for (int i = 0; i< vt.size(); i++){
            cout << vt[i] << " ";
        }
    }
    return 0;
}
