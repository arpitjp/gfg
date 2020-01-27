#include<bits/stdc++.h>
using namespace std;

int modifiedBinSearch(int arr[], int lo, int hi)
{
    int mid = lo + (hi-lo)/2;

    if(lo>hi) return 0;


    if(arr[mid]>=arr[mid-1] && arr[mid]<=arr[mid+1])
    {
        if(arr[mid]>=arr[lo] && arr[mid]<=arr[hi])//undecisive take both paths
        {
            int l, r;
            l = modifiedBinSearch(arr, lo, mid-1);
            r = modifiedBinSearch(arr, mid+1, hi);
            if(arr[r]<arr[l]) return r;

            return l;
        }
        if(arr[mid]>=arr[mid-1])//left sorted
            return modifiedBinSearch(arr, mid+1, hi);
        return modifiedBinSearch(arr, lo, mid-1);
    }

    if(arr[mid]<arr[mid-1] || arr[mid]>arr[mid+1])
    {
        if(arr[mid-1]>arr[mid]) return mid;
        return mid+1;
    }

}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t, n, lo, hi;
    cin >> t;

    while(t--)
    {
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];
        lo = 0;
        hi = n-1;
        cout << modifiedBinSearch(arr, lo, hi) << endl;
    }
}
