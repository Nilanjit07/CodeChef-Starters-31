#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() 
{
    int t,i;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int>v(n);
        for (i = 0; i < n; i++) 
        {
            cin >> v[i];
        }
        vector<long long int>m(33, 0);
        for (i = 0; i < n; i++) 
        {
            m[log2(v[i])+1]++;
        }
        long long int res = 0;
        for (i = 0; i < 33; i++) 
        {
            res += ((m[i]) * (m[i] - 1)) / 2;
        }
        cout << res << endl;
    }
	return 0;
}
