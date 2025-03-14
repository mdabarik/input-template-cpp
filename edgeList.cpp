#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* n nodes and e edges */
    int n, e;
    cin >> n >> e;

    vector<pair<int, int> > edgeList;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edgeList.push_back(make_pair(a, b)); /* {a, b} */
    }

    /* print the edges */
    for (int i = 0; i < edgeList.size(); i++)
    {
        cout << edgeList[i].first << " " << edgeList[i].second << endl;
    }

    return 0;
}
