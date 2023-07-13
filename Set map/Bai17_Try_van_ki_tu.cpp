#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s; cin >> s;
    map<char,int> mp;
    for(int i =0; i< s.size(); i++){
        mp[s[i]]++;
    } 
    int hzmax = mp[s[0]];
    char keyhzmax = s[0];
    for(map<char,int>::iterator it = mp.begin(); it != mp.end(); it++){
        if((*it).second > hzmax){
            hzmax = (*it).second;
            keyhzmax = (*it).first;
        }
    }
    cout << keyhzmax << " " << mp[keyhzmax] << endl;
    int hzmin = mp[s[0]];
    char keyhzmin = s[0];
    for(map<char,int>::iterator it = mp.begin(); it != mp.end(); it++){
        if((*it).second <= hzmin){
            hzmin = (*it).second;
            keyhzmin = (*it).first;
        }
    }
    cout << keyhzmin << " " << mp[keyhzmin] << endl;
    cout << mp.size() << endl;
    return 0;
}