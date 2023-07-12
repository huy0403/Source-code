#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    vector<int> vt(n);
    for(int i = 0; i< n; i++) cin >> vt[i];
    int l,r;
    cin >> l >> r;
    for(vector<int>::iterator it = vt.begin()+l; it <= vt.begin()+r; it++){
        cout << *it << " ";
    }
    cout << endl;
    for(vector<int>::iterator it = vt.begin()+r; it >= vt.begin()+l; it--){
        cout << *it << " "; 
    }
    return 0;
}
