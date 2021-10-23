#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> arr;

    int n=5;
    
    //edge list
    vector<pair<int,int>> edges = {{1,2}, {3,4}, {1,3}, {2,1}, {1,4}};

    vector<int> temp;

    for(int i=0;i<n;i++)
    {
        arr.push_back(temp);
    }

    for(int i=0;i<edges.size();i++)
    {
        arr[edges[i].first].push_back(edges[i].second);
    }
    int i=0;

    for(auto it:arr)
    {
        cout<<i<< ": ";
        for(auto it2:it)
        {
            cout<<it2<< " ";
        }
        cout<<endl;
        i++;
    }
}
