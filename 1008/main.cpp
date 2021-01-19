#include <iostream>

using namespace std;

int main()
{
    int n;
    int sky[257] = {};
    cin>>n;
    int r,l,h,maxx=0;
    for(int i=0;i<n;i++){
        cin>>l>>h>>r;
        //cout<<"->";
        for(int j=l+1;j<=r;j++){
            if(sky[j] < h){
                sky[j] = h;
                //cout<<j<<' ';
            }
            if(r>maxx)
                maxx = r;
        }
        //cout<<endl;
    }

    for(int i=0;i<=maxx;i++){

        if(sky[i] != sky[i+1]){
            cout<<i<<' '<<sky[i+1]<<' ';
        }
    }

    return 0;
}
