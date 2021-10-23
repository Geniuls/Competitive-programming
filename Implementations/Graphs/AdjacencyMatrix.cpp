#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5] ={0};

    vector<vector<int>> arr2;

    vector<int> temp (5,0);

    vector<pair<int,int>> edges = {{1,2},{3,4}};

    for(int i=0;i<5;i++)
    {
        arr2.push_back(temp);
    }

    for(int i=0;i<edges.size();i++)
    {
        arr2[edges[i].first - 1][edges[i].second - 1] = 1;
        arr2[edges[i].second - 1][edges[i].first - 1] = 1;
    }

    for(auto it:arr2)
    {
        for(auto it2:it)
        {
            cout<<it2<<" ";
        }
        cout<<endl;
    }

    /*
    
    Array
    
    pair<int,int> edges[] = {{1,2}, {3,4}};

    for(int i=0;i<2;i++)
    {
        arr[edges[i].first - 1][edges[i].second - 1] = 1;
        arr[edges[i].second - 1][edges[i].first - 1] = 1;
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    
    */
}
