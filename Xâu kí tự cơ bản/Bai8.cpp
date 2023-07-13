#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string check = "28tech";
    for(int i =0; i < s.size(); i++){
        if(check.find(s[i]) != string::npos){
            s.erase(i,1);
            --i;
        }
    }
    if(s.empty()){
        cout << "EMPTY";
    }else{
        cout << s;
    }
    return 0;
}