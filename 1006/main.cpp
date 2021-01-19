#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int cube[n][6];

    for(int i=0;i<n;i++){
        cube[i][0] =  1;
        cube[i][1] =  2;
        cube[i][2] =  3;
        cube[i][3] =  5;
        cube[i][4] =  4;
        cube[i][5] =  6;
    }

    string inp;
    for(int i=0;i<n;i++){
        cin>>inp;
        for(int j=0;j<inp.length();j++){
            //cout<<"test";
            int tmp;
            switch(inp[j]){
                case 'F' :  tmp = cube[i][0];
                            cube[i][0] = cube[i][3];
                            cube[i][3] = cube[i][5];
                            cube[i][5] = cube[i][1];
                            cube[i][1] = tmp;
                break;
                case 'B' :
                            tmp = cube[i][0];
                            cube[i][0] = cube[i][1];
                            cube[i][1] = cube[i][5];
                            cube[i][5] = cube[i][3];
                            cube[i][3] = tmp;
                break;
                case 'L' :
                            tmp = cube[i][0];
                            cube[i][0] = cube[i][4];
                            cube[i][4] = cube[i][5];
                            cube[i][5] = cube[i][2];
                            cube[i][2] = tmp;
                break;
                case 'R' :
                            tmp = cube[i][0];
                            cube[i][0] = cube[i][2];
                            cube[i][2] = cube[i][5];
                            cube[i][5] = cube[i][4];
                            cube[i][4] = tmp;
                break;
                case 'C' :
                            tmp = cube[i][1];
                            cube[i][1] = cube[i][4];
                            cube[i][4] = cube[i][3];
                            cube[i][3] = cube[i][2];
                            cube[i][2] = tmp;
                break;
                case 'D' :
                            tmp = cube[i][1];
                            cube[i][1] = cube[i][2];
                            cube[i][2] = cube[i][3];
                            cube[i][3] = cube[i][4];
                            cube[i][4] = tmp;
                break;
            }
        }

    }

    for(int i=0;i<n;i++){
        cout<<cube[i][1]<<' ';
    }

    return 0;
}
