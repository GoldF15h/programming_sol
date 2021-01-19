#include <iostream>

using namespace std;

int main()
{
    int n,inp[10001]={};
    cin>>n;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        inp[tmp]++;
    }

    int tmp_max=0;
    for(int i=1;i<=10000;i++){
        if(inp[i]>tmp_max){
            tmp_max = inp[i];
        }
    }

    for(int i=1;i<10000;i++){
        if(inp[i]==tmp_max)
            cout<<i<<' ';
    }

    return 0;
}
