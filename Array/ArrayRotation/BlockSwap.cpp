#include<bits/stdc++.h>
using namespace std;

void swapp(int arr[], int s1, int s2, int d)
{
    int temp;
    for(int i=0; i<d; i++)
    {
        temp = arr[i+s1];
        arr[i+s1] = arr[i + s2];
        arr[i+s2] = temp;
    }
    return;
}

void leftRotate(int arr[], int d, int n)// starting point, elements in first array, elements in second arry
{
    if(d==0 || n-d==0) return;

    if(d == n-d)
    {
        swapp(arr, 0, n-d, d);// array, start1, start2, swapp no.
        return;
    }

    if(d < n-d)//A is shorter
    {
        swapp(arr, 0, n-d, d);
        leftRotate(arr, d, n-d);
    }
    else if(d > n-d)
    {
        swapp(arr, 0, d, n-d);
        leftRotate(arr+n-d, 2*d-n, d);
    }
    return;

}
int main()
{
    int n, d;
    cin >> n >> d;
    d = d%n;

    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    leftRotate(arr, d, n);
    for(int i=0; i<n; i++) cout << arr[i] << " ";
}
