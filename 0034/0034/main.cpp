#include <iostream>
#include <math.h>
#include <list>

using namespace std;

int main()
{
    list<int>a;
    list<int>b;
    list<int>c;
    list<int>d;
    /*for(int q = 1 ; q <= 25 ; q++){
        for(int w = 1;w <= 25;w++){
            for(int e = 1;e <= 25;e++){
                for(int r = 1; r <= 25 ; r++){*/

                        //cout<<q<<' '<<w<<' '<<e<<' '<<r<<endl;
                        int q,w,e,r;
                        cin>>q>>w>>e>>r;
                        int A,B,C;
                        A =  q*e;
                        B = (q*r)+(w*e);
                        C =  w*r;
                        //cin>>A>>B>>C;
                        cout<<A<<' '<<B<<' '<<C<<endl;

                        if( (B*B) - (4*A*C) < 0){

                            cout<<"No Solution";
                            //continue;
                            return 0;
                        }

                        for(int i=1;i<=sqrt(A);i++){

                            if(A%i==0){

                                a.push_back(i);
                                c.push_back(A/i);
                            }

                        }

                        for(int i=1;i<=sqrt(C);i++){

                            if(C%i==0){

                                b.push_back(i);
                                d.push_back(C/i);
                            }

                        }

                        cout<<"A\n";
                        while(!a.empty() || !c.empty()){

                            cout<<a.front()<<' '<<c.front()<<'\n';
                            a.pop_front();c.pop_front();
                        }

                        cout<<"C\n";
                        while(!b.empty() || !d.empty()){

                            cout<<b.front()<<' '<<d.front()<<'\n';
                            b.pop_front();d.pop_front();
                        }


                        /*while(B != (a.front()*d.front())+(b.front()*c.front())){
                            cout<<"size "<<a.size()<<' '<<b.size()<<' '<<c.size()<<' '<<d.size()<<endl;
                            a.pop_front();
                            b.pop_front();
                            c.pop_front();
                            d.pop_front();

                        }*/

                        if( q != a.front() || w != b.front() || e != c.front() || r != d.front()){

                            cout<<"case\nqwer="<<q<<' '<<w<<' '<<e<<' '<<r;
                            cout<<" ABC="<<A<<' '<<B<<' '<<C;
                            cout<<" outPut="<<a.front()<<' '<<b.front()<<' '<<c.front()<<' '<<d.front()<<endl;

                        }

                        while(!a.empty())
                            a.pop_front();
                        while(!b.empty())
                            b.pop_front();
                        while(!c.empty())
                            c.pop_front();
                        while(!d.empty())
                            d.pop_front();


/*
                }
            }
        }
    }*/


    return 0;
}
