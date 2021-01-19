#include <iostream>

using namespace std;

int main()
{
    int j,l;
    cin>>j>>l;
    if(j>l){
        cout<<2;

    }else
    if(l%j == 0){
        cout<<l/j;
    }else{
        cout<<l/j+1;
    }

    return 0;
}
