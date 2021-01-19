#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{

    int A,B,C;
    //cout<<"test1";
    cin>>A>>B>>C;
    vector<int>aCom1,aCom2,bCom1,bCom2;
    int i=1;
    while( A/i >= i ){
        if( A%i == 0 ){
            aCom1.push_back(i);
            aCom2.push_back(A/i);
        }
        i++;
    }

    for(i=-100;i<=100;i++){
        //cout<<i<<endl;
        if( i==0 )
            continue;
        if( C%i == 0){
            bCom1.push_back(i);
            bCom2.push_back(C/i);
        }
    }
    //cout<<"endloop\n";

    /*for(int i=0;i<aCom1.size();i++)
        cout<<aCom1[i]<<' ';
    cout<<endl;
    for(int i=0;i<aCom2.size();i++)
        cout<<aCom2[i]<<' ';
    cout<<endl;
    for(int i=0;i<bCom1.size();i++)
        cout<<bCom1[i]<<' ';
    cout<<endl;
    for(int i=0;i<bCom2.size();i++)
        cout<<bCom2[i]<<' ';
    cout<<endl;*/

    for(int i=0;i<aCom1.size();i++){
          for(int j=0;j<bCom1.size();j++){

                if(aCom1[i]*bCom2[j] + bCom1[j]*aCom2[i] == B){
                    cout<<aCom1[i]<<' '<<bCom1[j]<<' '<<aCom2[i]<<' '<<bCom2[j];
                    return 0;
                }

          }
    }

    //cout<<"No Solution";
    return 0;
}
