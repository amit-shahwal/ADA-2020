// usage of adjancey list by using queue

#include <bits/stdc++.h>

using namespace std;

vector<int> q[5];
int visited[5];
void dfs(int);
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

    // for (int i = 0; i < n; i++)
    // {
    //     if (visited[i] != 1)
    //         dfs(i);
    // }
    dfs(0);
    return 0;
}
void dfs(int x)
{
    cout << x << " ";
    visited[x] = 1;
    for (int i = 0; i < q[x].size(); i++)
    {

        int child = q[x][i];
        if (visited[child] == 0)
            dfs(child);
    }
    return;
}