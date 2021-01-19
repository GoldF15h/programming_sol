#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int year[25][4];
    year[0][0] = 1;
    year[0][1] = 1;
    year[0][2] = 0;
    year[0][3] = 2;

    for(int i=1;i<=24;i++){
        year[i][0] = 1;
        year[i][1] = year[i-1][0] + year[i-1][1] + year[i-1][2];
        year[i][2] = year[i-1][1];
        year[i][3] = year[i][0] + year[i][1] + year[i][2];
    }

    int inp=0;
    vector<int>output;
    while(inp != -1){
        cin>>inp;
        output.push_back(inp);
    }
    //<output.size()-1
    for(int i=0;i<output.size()-1;i++){
        //cout<<output[i]<<' ';
        cout<<year[ output[i] ][1]<<' '<<year[ output[i] ][3]<<endl;
        //cout<<year[i][0]<<' '<<year[i][1]<<' '<<year[i][2]<<' '<<year[i][3]<<endl;
    }

    return 0;
}
