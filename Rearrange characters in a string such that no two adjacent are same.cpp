#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, sz;
    cin >> t;
    string s;

    while(t--)
    {
        int arr[27] = {0};
        cin >> s;
        sz = s.length();

        for(int i=0; i<sz; i++)
        {
            arr[s[i] - 'a']++;
        }

        if(*max_element(arr, arr+27) <= (sz+1)/2) cout << "1" << endl;
        else cout << "0" << endl;
    }
}
