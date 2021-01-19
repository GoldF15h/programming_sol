#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int car[n];
    for(int i=0;i<n;i++)
        cin>>car[i];
    sort(car,car+n,greater<int>());
    cout<<car[k-1];

    return 0;
}
