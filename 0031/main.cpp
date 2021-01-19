#include <iostream>

using namespace std;

int main()
{
    int inp[3],sum=0,op=0;
    for(int i=0;i<3;i++){
        cin>>inp[i];
    }

    for(int i=0;i<3;i++){
        while(inp[i]!=1){
            inp[i]/=2;
            op++;
        }
    }

    cout<<op;

    return 0;
}
