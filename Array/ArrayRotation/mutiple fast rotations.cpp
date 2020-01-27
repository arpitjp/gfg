#include<bits/stdc++.h>
using namespace std;

void printer(int arr[], int n, int k)
{
    for(int i=k; i<n+k; i++)
    {
        cout << arr[i%n] << " ";
    }
    cout << endl;
}

int main()
{
    int t, n, k;
    cin >> t;

    while(t--)
    {
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        printer(arr, n, k);
    }
}
