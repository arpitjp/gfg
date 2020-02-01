#include<bits/stdc++.h>
using namespace std;

int ones(int arr[], int k, int n)
{
    int result = 0, countt=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1) countt++;
        else
        {
            result += counnt*(countt+1)/2;
            countt = 0;
        }
    }
    return countt;
}

int windowSlider(int arr, int k, int n)
{
    int start, endd, countt=0, product=1;
    start = endd = 0;
    while(endd < n)
    {
        p *= arr[endd];
        if(p==)
    }
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

        if(k==1) cout << ones(arr, k, n) << endl;
        else cout << windowSlide(arr, k, n) << endl;
    }
}
