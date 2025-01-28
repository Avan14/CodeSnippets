#include <bits/stdc++.h>

using namespace std;

class DSU
{
    vector<int> parent;
    vector<int> size;

public:
    DSU(int n)
    {
      parent.resize(n);
        size.resize(n);
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }
    int FindParent(int x)
    {
        if (parent[x] == x)
            return x;
        return parent[x] = FindParent(parent[x]);
    }
    void Union(int x, int y)
    {
        int px = FindParent(x);
        int py = FindParent(y);
        if (px != py)
        {
            if (size[px] < size[py])
                swap(px, py);
            parent[py] = px;
            size[px] += size[py];
        }
    }
};

int main()
{
}