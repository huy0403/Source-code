#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin , s);
    multiset<string> str;
    stringstream ss(s);
    string token;
    while(ss >> token){
        str.insert(token);
    }
    for(auto it = str.begin(); it != str.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for(auto it = str.rbegin(); it != str.rend(); it++){
        cout << *it << " ";
    }
    return 0;
}