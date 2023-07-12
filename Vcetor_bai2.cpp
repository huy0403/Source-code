#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int m; cin >> m;
    vector<int> vt(m);
    for(int i = 0; i< m; i++) cin >> vt[i];
    int n; cin >> n;
    for(int i = 0; i< n; i++){
        int th; cin >> th;
        if(th == 1){
            int index, data;
            cin >> index >> data;
            if(index >= 0 && index <= vt.size()){
                vt.insert(vt.begin()+index,data);
            }
        }else{
            int index; cin >> index;
            if(!vt.empty() && index >= 0 && index <= vt.size()-1){
                vt.erase(vt.begin()+index);
            }
        }
    }
    for(int i = 0; i< vt.size(); i++){
        cout << vt[i] << " ";
    }
    
    return 0;
}
