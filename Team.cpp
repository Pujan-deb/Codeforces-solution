//Problem Link: https://codeforces.com/contest/231/problem/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,res=0;
    cin >> n;
    for(int i=1;i<=n;i++){
     int a,b,c;
     cin >> a >> b >> c;
     int d = a+b+c;
     if(d==2){
         res++;
         d=0;
     }else if(d==3){
         res++;
         d=0;
     }
    }
    cout << res;
    
    return 0;
}
