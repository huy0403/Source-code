#include<bits/stdc++.h>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<int> vt(n);
    for(int i = 0; i< n; i++) cin >> vt[i];
    cout << *min_element(vt.begin(), vt.end()) << endl;
    cout << *max_element(vt.begin(), vt.end()) << endl;
    cout << accumulate(vt.begin(), vt.end(),0);
    return 0;
}