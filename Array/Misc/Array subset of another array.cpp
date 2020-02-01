#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, t, stat = 0;
    cin >> t;

    while(t--)
    {
        stat = 0;
        cin >> n >> m;
        int r[n], s[m];
        for(int i=0; i<n; i++) cin >> r[i];
        for(int i=0; i<m; i++) cin >> s[i];
        sort(r, r+n);
        sort(s, s+m);

        int i=0, j=0;
        if(n<m) cout << "No" << endl;
        else
        {
            while(j!=m)
            {
               if(r[i]==s[j])
                {
                    i++;
                    j++;
                }
                else if(r[i] < s[j])
                    i++;
                else
                {
                    stat=1;
                    break;
                }
            }

            if(stat) cout << "No" << endl;
            else cout << "Yes" << endl;
        }
    }
}
