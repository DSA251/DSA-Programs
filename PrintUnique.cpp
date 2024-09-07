#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int cnt[n]={0},a[n]={0};
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(cnt[a[i]]==1) cout << a[i] << " ";
    }
    cout << endl;
}
