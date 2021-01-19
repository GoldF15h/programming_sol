#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned long long int a=0,b=0;
    int x,y;

    cin>>x>>y;

    string A[3]={},B[3]={};

    getline(cin,A[0]);
    getline(cin,A[0]);
    getline(cin,A[1]);
    getline(cin,A[2]);

    getline (cin,B[0]);
    getline (cin,B[1]);
    getline (cin,B[2]);

    /*for(int i=0;i<3;i++){
        for(int j=0;j<(4*x);j++){
            cout<<A[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<(4*y);j++){
            cout<<B[i][j];
        }
        cout<<endl;
    }*/

    /*for(int i=0;i<x;i++){




    }
    */
    //cout<<1*pow(10,5)<<endl;
    //cout<<"\n\nDEBUGING A\n\n";
    for(int i=0;i<x;i++){
        //cout<<endl<<a<<endl;
        /*cout<<"\n**************\n";
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                cout<<A[j][ i*3 + i + k];
            }
            cout<<endl;
        }
        cout<<endl;*/

        if( A[2][ i*3 + i] == '|' ){ // 2 6 8 0

            if( A[1][i*3+1+ i] == '_' ){ // 2 6 8

                if( A[2][i*3+2 + i] == '|'){ // 6 8

                    if( A[1][i*3+2 + i] == '|' ){ // 8

                        a+= 8*ceil(pow(10,x-1-i));

                    }else{ // 6

                        a+= 6*ceil(pow(10,x-1-i));

                    }

                }else{ // 2

                    a+= 2*ceil(pow(10,x-1-i));


                }

            }else{ // 0

                a+= 0*ceil(pow(10,x-1-i));

            }

        }else{ // 1 3 4 5 7 9

            if( A[1][i*3 + i] == '|' ){ // 4 5 9

                if( A[0][i*3+1 + i] == '_' ){ // 5 9

                    if( A[1][i*3+2 + i] == '|' ){ // 9

                        a+= 9*ceil(pow(10,x-1-i));

                    }else{ // 5

                        a+= 5*ceil(pow(10,x-1-i));

                    }

                }else{ // 4

                    a+= 4*ceil(pow(10,x-1-i));

                }

            }else{ // 1 3 7

                if( A[0][i*3+1 + i] == '_' ){ // 3 7

                    if( A[1][i*3+1 + i] == '_' ){ // 3

                        a+= 3*ceil(pow(10,x-1-i));

                    }else{ // 7

                        a+= 7*ceil(pow(10,x-1-i));

                    }

                }else{ // 1

                    a+= 1*ceil(pow(10,x-1-i));

                }
            }
        }
    }
    //cout<<a;

    for(int i=0;i<y;i++){
        //cout<<endl<<b<<endl;
        /*cout<<"\n**************\n";
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                cout<<B[j][ i*3 + i + k];
            }
            cout<<endl;
        }
        cout<<endl;*/

        if( B[2][ i*3 + i] == '|' ){ // 2 6 8 0

            if( B[1][i*3+1+ i] == '_' ){ // 2 6 8

                if( B[2][i*3+2 + i] == '|'){ // 6 8

                    if( B[1][i*3+2 + i] == '|' ){ // 8

                        b+= 8*ceil(pow(10,y-1-i));

                    }else{ // 6

                        b+= 6*ceil(pow(10,y-1-i));

                    }

                }else{ // 2

                    b+= 2*ceil(pow(10,y-1-i));


                }

            }else{ // 0

                b+= 0*ceil(pow(10,y-1-i));

            }

        }else{ // 1 3 4 5 7 9

            if( B[1][i*3 + i] == '|' ){ // 4 5 9

                if( B[0][i*3+1 + i] == '_' ){ // 5 9

                    if( B[1][i*3+2 + i] == '|' ){ // 9

                        b+= 9*ceil(pow(10,y-1-i));

                    }else{ // 5

                        b+= 5*ceil(pow(10,y-1-i));

                    }

                }else{ // 4

                    b+= 4*ceil(pow(10,y-1-i));

                }

            }else{ // 1 3 7

                if( B[0][i*3+1 + i] == '_' ){ // 3 7

                    if( B[1][i*3+1 + i] == '_' ){ // 3

                        b+= 3*ceil(pow(10,y-1-i));

                    }else{ // 7

                        b+= 7*ceil(pow(10,y-1-i));

                    }

                }else{ // 1

                    b+= 1*ceil(pow(10,y-1-i));

                }
            }
        }
    }
    //cout<<endl<<b;

    cout<<a+b;


    return 0;
}
