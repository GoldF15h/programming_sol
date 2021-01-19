#include <iostream>

using namespace std;

int main()
{
    int d,m,op_day = 0;
    int mounth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string days[7] =  { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" ,"Sunday" };
    cin>>d>>m;
    for(int i=0;i<m-1;i++)
        op_day+=mounth[i];
    //cout<<op_day<<endl;
    op_day+=d+2;

    cout<<days[op_day%7];

    return 0;
}
