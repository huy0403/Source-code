#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int k; cin >> k;
    string check = "28tech";
    s.insert(k,check);
    cout << s;
    return 0;
}