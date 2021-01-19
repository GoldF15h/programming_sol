#include <iostream>
#include <list>

using namespace std;

void nucket_number(int n){

    //cout<<n;
    list<int>op;

    for(int i=0;i<=16;i++){
        for(int j=0;j<=11;j++){
            for(int k=0;k<=5;k++){

                if( 6*i + 9*j + 20*k <= n){
                    //cout<<6*i<<"+"<<9*j<<"+"<<20*k<<"="<<6*i + 9*j + 20*k <<endl;
                    op.push_back( 6*i + 9*j + 20*k );
                }

                else
                    break;

            }
        }
    }

    op.sort();
    op.unique();
    //<<op.size();
    if(op.size()==1){
        cout<<"no";
    }
    if(op.front()==0)
        op.pop_front();
    while(!op.empty()){

        cout<<op.front()<<'\n';
        op.pop_front();
    }
    op.clear();

}

int main()
{

    int n;
    cin>>n;
    //cout<<"no";
    nucket_number(n);
    /*for(int i=1;i<=n;i++)
    {
        cout<<endl<<i<<" -> ";
        nucket_number(i);
    }*/


    return 0;
}
