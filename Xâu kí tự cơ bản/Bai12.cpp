#include<bits/stdc++.h>
using namespace std;

bool isUpper(string s){
    for(int i = 0; i< s.size(); i++){
        if(s[i] < 'A' || s[i] > 'Z') return false;
    }
    return true;
}

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string token;
    int count = 0;
    while(ss >> token){
        if(isUpper(token)) count++;
    }
    cout << count;
    return 0;
}