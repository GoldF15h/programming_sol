#include <iostream>

using namespace std;

int main()
{
    int h,w;
    cin>>h>>w;
    char inp[h][w];
    int brick[w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>inp[i][j];
        }

    }
    for(int j=0;j<w;j++)
        cin>>brick[j];

    for(int j=0;j<w;j++){
        //cout<<j<<' ';for(int i=0;i<h;i++)cout<<inp[i][j];cout<<endl;
        while(brick[j]>0){
            for(int i=0;i<h;i++){
                if(inp[0][j]=='O' || inp[0][j]=='#'){
                    brick[j]--;
                    break;
                }else if( (inp[i][j] == 'O' || inp[i][j] == '#') ) {
                    inp[i-1][j]='#';
                    brick[j]--;
                    break;
                }else if(i+1==h){
                    inp[i][j]='#';
                    brick[j]--;
                    break;
                }
            }
        //cout<<j<<' ';for(int i=0;i<h;i++)cout<<inp[i][j];cout<<endl;
        }

    }

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<inp[i][j];
        }
        cout<<endl;
    }



    return 0;
}
