#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<pair<pair<int,int>,int>> vt;
    for(int i = 0; i< n; i++){
        int x,y,z;
        cin >> x >> y >> z;
        vt.push_back({{x,y},z});
    }

    vector<int> sum;
    for(int i=0; i< n; i++){
        sum.push_back(vt[i].first.first+vt[i].first.second+vt[i].second);
    }
    for(int i = 0; i< n; i++){
        cout << sum[i] << " ";
    }
    return 0;
}