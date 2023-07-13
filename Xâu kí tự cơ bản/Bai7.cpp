#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string num = "";
    string str = "";
    for(int i =0; i < s.size(); i++){
        if(isdigit(s[i])){
            num += s[i];
        }else{
            str += s[i];
        }
    }
    cout << num << endl;
    cout << str;
    return 0;
}