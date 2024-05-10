#include <iostream>
#include <vector>
#include <set>
using namespace std;

struct Node
{
    set<int> elements;
};

class SegmentTree
{
private:
    vector<Node> tree;
    vector<int> arr;

    void build(int node, int start, int end)
    {
        if (start == end)
        {
            tree[node].elements.insert(arr[start]);
        }
        else
        {
            int mid = (start + end) / 2;
            build(2 * node, start, mid);
            build(2 * node + 1, mid + 1, end);
            merge(tree[2 * node], tree[2 * node + 1], tree[node]);
        }
    }

    void merge(Node &left, Node &right, Node &parent)
    {
        parent.elements = left.elements;
        parent.elements.insert(right.elements.begin(), right.elements.end());
    }

    pair<int, int> query(int node, int start, int end, int l, int r)
    {
        if (start > r || end < l)
        {
            return {-1, -1};
        }
        if (start >= l && end <= r)
        {
            if (tree[node].elements.size() >= 2)
            {
                auto it = tree[node].elements.begin();
                return {*it, *(++it)};
            }
            return {-1, -1};
        }
        int mid = (start + end) / 2;
        auto leftQuery = query(2 * node, start, mid, l, r);
        if (leftQuery.first != -1)
        {
            return leftQuery;
        }
        return query(2 * node + 1, mid + 1, end, l, r);
    }

public:
    SegmentTree(const vector<int> &arr)
    {
        this->arr = arr;
        int n = arr.size();
        tree.resize(4 * n);
        build(1, 0, n - 1);
    }

    pair<int, int> query(int l, int r)
    {
        return query(1, 0, arr.size() - 1, l - 1, r - 1);
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        SegmentTree segmentTree(arr);

        int q;
        cin >> q;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            auto result = segmentTree.query(l, r);
            cout << result.first << " " << result.second << endl;
        }

        if (t > 0)
        {
            // Output an empty line between test cases
            cout << endl;
        }
    }

    return 0;
}
