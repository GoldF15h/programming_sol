#include <iostream>

using namespace std;

int main()
{
    string a,b;
    char oper;
    cin>>a>>oper>>b;
    //cout<<a<<' '<<oper<<' '<<b<<endl;
    //cout<<a.length()<<' '<<b.length()<<endl;

    switch(oper){

        case '+':{
            if(a.length() < b.length()){
                string tmp = a;
                a = b;
                b = tmp;
            }
            //cout<<a<<' '<<b<<endl;
            if(a.length() == b.length()){
                a[0] = '2';
            }else{
                for( int i=0; i<b.length() ; i++ ){

                    //cout<<b[i]<<' ';
                    if(b[i] == '1'){
                        //cout<<"FOUND "<<a.length() - b.length() + i ;
                        a[a.length() - b.length() + i ] = '1';

                    }

                }
            }

            cout<<a;

        }
            break;

        case '*':{
             cout<<'1';
            for(int i=0;i<a.length()+b.length()-2;i++)
                cout<<'0';
        }
            break;
    }

    return 0;
}
