// usage of adjancey list by using queue

#include <bits/stdc++.h>

using namespace std;

vector<int> q[5];
int visited[5];

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
    {
        if (visited[i] != 1)
            bfs(i);
    }
    return 0;
}
void bfs(int x)
{
    queue<int> qq;
    qq.push(x);
    visited[x] = 1;

    while (!qq.empty())
    {

        int courrent = qq.front();
        qq.pop();

        cout << courrent << " " << endl;

        for (int i = 0; i < q[courrent].size(); i++)
        {

            int child = q[courrent][i];
            if (visited[child] != 1)
            {
                qq.push(child);
                visited[child] = 1;
            }
        }
    }
    cout << endl;
}