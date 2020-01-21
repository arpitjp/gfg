#include<bits/stdc++.h>
using namespace std;

void printcrap(int n, int arr[])
{
    int liz[n];
    liz[0] = 1;
    for(int i=1; i<n; i++)
    {
        liz[i] = 1;
        for(int j=0; j<i; j++)
        {
            if(arr[i]>arr[j] && liz[i] < liz[j] + 1 ) liz[i] = liz[j]+1;
        }
    }
    cout << *max_element(liz, liz+n) << endl;
    return;
}

int main()
{
    int t, n, arr[305];
    cin >> t;
    
    while(t--)
    {
        cin >> n;
        for(int i=0; i<n; i++) cin >> arr[i];
        printcrap(n, arr);
    }
    
}
