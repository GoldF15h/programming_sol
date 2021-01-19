#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int inp[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>inp[i];
        sum+=inp[i];
    }
    int my_max[3]={0,0,0};

    for(int i=0;i<n;i++){
        int tmp_sum = sum;
        for(int j=n-1;j>i;j--){
            tmp_sum -= inp[j];
            if(tmp_sum > my_max[2]){
                my_max[0] = i;
                my_max[1] = j;
                my_max[2] = tmp_sum;
            }
        }
        sum-=inp[i];
    }


    if(my_max[2] != 0){

        for(int i=my_max[0];i<my_max[1];i++){
            cout<<inp[i]<<' ';
        }
        cout<<endl<<my_max[2];

    }else{

        cout<<"Empty sequence";

    }

    return 0;
}
