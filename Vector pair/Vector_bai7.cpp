#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<pair<int,int>> vt;
    for(int i = 0; i< n; i++){
        int x, y; cin >> x >> y;
        vt.push_back({x,y});
    }
    vector<double> distances;
    for(int i = 0; i< n; i++){
        double distance = sqrt(vt[i].first*vt[i].first + vt[i].second*vt[i].second);
        distances.push_back(distance);
    }

    for(int i = 0;  i< n; i++){
        cout << setprecision(2) << fixed << distances[i] << " ";
    }
    return 0;
}