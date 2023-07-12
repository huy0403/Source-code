#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   \
    int n; cin >> n;
    vector<int> vt(n);
    for(int i = 0; i< n; i++) cin >> vt[i];
    sort(vt.begin(), vt.end());
    for(vector<int>::iterator it = vt.begin(); it != vt.end(); it++){
        cout << *it << " ";
    } 
    cout << endl;
    for(vector<int>::iterator it = vt.end()-1; it >= vt.begin(); it--){
        cout << *it << " ";
    }
    return 0;
}
