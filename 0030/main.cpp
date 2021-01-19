#include <iostream>

using namespace std;

int main()
{
    string inp;
    cin>>inp;
    int op3,op11;

    /*int sum3=0,sum11=0;
    for(int i=inp.length()-1;i>=0;i--){
        sum3+=inp[i]-48;
        if(i%2==0){
            sum11+=inp[i]-48;
        }else{
            sum11-=inp[i]-48;
        }
    }

    cout<<(sum3)%3<<' '<<(abs(sum11))%11;*/

    int tmp = 0;
    for(int i=0;i<inp.length();i++){
        //cout<<inp[i]<<' '<<tmp<<' '<<tmp+inp[i]-48<<endl;
        tmp += inp[i]-48;
        tmp %= 3;
        tmp *= 10;
    }
    op3 = tmp/10;

    tmp=0;
    for(int i=0;i<inp.length();i++){
        //cout<<inp[i]<<' '<<tmp<<' '<<tmp+inp[i]-48<<endl;
        tmp += inp[i]-48;
        tmp %= 11;
        tmp *= 10;
    }
    op11 = tmp/10;

    cout<<op3<<' '<<op11;

    return 0;
}
