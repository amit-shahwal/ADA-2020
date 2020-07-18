// usage of adjancey list by using queue 

#include <bits/stdc++.h>

using namespace std;

vector<int> q[6];

int main()
{

    int m, n, x, y;
    //number of edges

    cin >> m >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        q[x].push_back(y);
    }

    for (int i = 0; i < n; i++)
    {cout<<i<<"-->";
        for (int j = 0; j < q[i].size(); j++)
        {
            cout << q[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}
