#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* code start */

    int n, e;
    cin >> n >> e;
    vector<int> adjList[n+1]; // array of vector

    while (e-- > 0)
    {
        int a, b;
        cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << "-> ";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }

    /* code end */

    return 0;
}