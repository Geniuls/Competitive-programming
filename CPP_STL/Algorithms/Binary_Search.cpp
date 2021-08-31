#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {};
    int n ;
    int key ;

    cin>>n; // Input size

    for(int i=0;i<n;i++) //Input Array
        cin>>arr[i];

    cin >> key; // Element to find

    bool present = binary_search(arr, arr + n, key); //logN

    if (present)
        cout << "Element Found";
    else
        cout << "Error 404!";

    auto lb = lower_bound(arr, arr + n, key);
    if(present)cout << endl << "At index: " << (lb - arr) << endl;

    return 0;
}
