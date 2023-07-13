#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    multiset<char> str;
    for(int i =0; i< s.size(); i++){
        str.insert(s[i]);
    }
    for(auto it = str.begin(); it != str.end(); it++){
        cout << *it;
    }
    cout << endl;
    for(auto it = str.rbegin(); it != str.rend(); it++){
        cout << *it;
    }
    return 0;
}