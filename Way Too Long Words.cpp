// Problem link: https://codeforces.com/contest/71/problem/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    int number;
    cin >> number;
    for(int i=0;i<number;i++){
        cin >> str;
            int k=0;
    int n = str.size();
    if(n <= 10){
        cout << "\n" << str << "\n";
    }else{
        cout << "\n"<< str[0];
        for(int i=1;i<=n-2;i++){
            k++;
            
        }
        cout << k;
        cout << str[n-1];
    }
    }
    return 0;
}
