#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    int a1[26] = {0}, a2[26] = {0};

    int n1 = s1.size(), n2 = s2.size();

    for(int i=0; i<n1; i++){ a1[s1[i] - 'a']++; }
    for(int i=0; i<n2; i++){ a2[s2[i] - 'a']++; }

    int count = 0;
    for(int i=0;i<26;i++){ count = count + abs(a1[i] - a2[i]); }
    cout<<count;
}