#include <iostream>

using namespace std;

int i=0,v=0,x=0,l=0,c=0;

void roman(int inp){

    int tmp = inp%10;
    inp/=10;

    if(tmp == 9){
        x++;
        i++;
    }else
    if(tmp > 5){
        v++;
        i+=tmp%5;
    }else
    if(tmp == 5){
        v++;
    }else
    if(tmp == 4){
        i++;
        v++;
    }else{
        i+=tmp%4;
    }

    tmp = inp%10;
    inp/=10;

    if(tmp == 9){
        c++;
        x++;
    }else
    if(tmp > 5){
        l++;
        x+=tmp%5;
    }else
    if(tmp == 5){
        l++;
    }else
    if(tmp == 4){
        x++;
        l++;
    }else{
        x+=tmp%4;
    }

    tmp = inp;

    c += tmp%5;


}

int main()
{
    int inp;
    cin>>inp;
    for(int j=1;j<=inp;j++){
        roman(j);
    }
    cout<<i<<' '<<v<<' '<<x<<' '<<l<<' '<<c;

    return 0;
}
