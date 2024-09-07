#include <iostream>
using namespace std;
int main() {
    int n=5;
    int a[5];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f=0;
    for(int i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            f=1;
            cout << "Not a pallindrome" << endl;
            break;
        }
    }
    if(!f) cout << "Pallindrome" << endl;
    return 0;
}
