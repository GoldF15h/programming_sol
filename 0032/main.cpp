#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int inp[n];

    for(int i=0;i<n;i++){
        cin>>inp[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(inp[i] > inp[j]){
                swap(inp[i],inp[j]);
            }
        }
    }

    int i=0;
    while(inp[i]==0){
        i++;
    }
    swap(inp[i],inp[0]);

    for(int i=0;i<n;i++){
        cout<<inp[i];
    }

    return 0;
}
