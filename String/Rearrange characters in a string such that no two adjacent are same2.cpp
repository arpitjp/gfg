#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, sz, max_index, max_val, temp, stat = 1;
    string s, ans, c;
    cin >> t;

    while(t--)
    {
        stat = 1;
        int arr[27] = {0};
        cin >> s;
        sz = s.length();

        for(int i=0; i<sz; i++) arr[s[i]-'a']++;

        max_index = max_element(arr, arr+27)-arr;
        max_val = arr[max_index];
        c = max_index + int('a');
        ans.append(c);
        arr[max_index] = 0;
        max_val--;

        for(int i=0; i<sz-1; i++)
        {
            temp = max_element(arr, arr+27)-arr;

            if(arr[temp] == 0)
            {
                stat = 0;
                break;
            }
            c = temp + int('a');
            ans.append(c);
            arr[max_index] = max_val;
            max_index = temp;
            max_val = arr[temp]-1;
            arr[temp] = 0;
        }
        if(stat) cout << ans << endl;
        else cout << "Not Possible" << endl;
    }
}
