#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string,pair<int,int>> mp;
    while(true){
        string name;
        int tc,diem;
        cin >> name;
        cin >> tc >> diem;
        if(name == "\0") break;
        mp[name].first += tc;
        mp[name].second += diem*tc;
    }
    for(auto it = mp.rbegin(); it != mp.rend(); it++){
        cout << (*it).first << " : " << setprecision(2) << fixed << (double)(*it).second.second/(*it).second.first << endl;
    }
    return 0;
}