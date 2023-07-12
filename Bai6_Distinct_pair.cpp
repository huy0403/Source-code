#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    set<pair<int,int>> se;
    for(int i = 0; i < n; i++){
        int x,y; cin >> x >> y;
        se.insert({x,y});
    }
    cout << se.size();
    return 0;
}