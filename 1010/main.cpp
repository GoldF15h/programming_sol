#include <iostream>

using namespace std;

int main()
{
    int h,w;
    cin>>h>>w;
    char inp[h][w];

    for(int i=0;i<h;i++){

        for(int j=0;j<w;j++){

            cin>>inp[i][j];
            if(inp[i][j] >= 'A' && inp[i][j] <= 'Z'){
                inp[i][j]+=32;
            }

        }

    }

    /*cout<<"DEBUG\n";
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cout<<inp[i][j];
        }
        cout<<endl;
    }*/

    int n;
    cin>>n;
    string finder[n];
    for(int i=0;i<n;i++)
        cin>>finder[i];

    /*cout<<"DEBUG\n";
    for(int i=0;i<n;i++){
        cout<<finder[i]<<endl;
    }*/

    int output[n][2];
    for(int i=0;i<n;i++){
        output[i][0] = h;
        output[i][1] = w;
    }

    /*for(int i=0;i<n;i++){
        cout<<output[i][0]<<' '<<output[i][1]<<endl;
    }*/



}
