#include <iostream>

using namespace std;

int main ()
{

    long long int i,inp,sum=0;
    cin>>inp;
    if(inp<1){

        cout<<"Error";
        return 0;

    }

    //for(int i=1;i<=inp;i++)
    //    sum+=i;

    sum = (int)((float)(inp+1)*((float)(inp)/2));
    printf("%llu",sum);

    return 0;

}

