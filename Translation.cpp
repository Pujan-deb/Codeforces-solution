/*
Problem link: https://codeforces.com/problemset/problem/41/A 
The translation from the Berland language into the Birland language is not an easy task. Those languages are very similar: a berlandish word differs from a 
birlandish word with the same meaning a little: it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a 
Birlandish word edoc. However, it's easy to make a mistake during the «translation». Vasya translated word s from Berlandish into Birlandish as t. 
Help him: find out if he translated the word correctly.

Input
The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. The input data do not consist unnecessary spaces. 
The words are not empty and their lengths do not exceed 100 symbols.

Output
If the word t is a word s, written reversely, print YES, otherwise print NO.

Examples
inputCopy
code
edoc
outputCopy
YES
inputCopy
abb
aba
outputCopy
NO
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cin >> str1 >> str2;
    string str3 = str1;
    int n = str3.length();
    for (int i=0; i<n/2; i++)
    {
        swap(str3[i], str3[n - i - 1]);
    }
    int x = str2.compare(str3);
    if(x == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
