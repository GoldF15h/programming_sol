#include <iostream>

using namespace std;

int main()
{
    string team[4];
    int goal[4][4];
    int score[4]={};
    int being_shoot[4]={};
    int shoot[4]={};
    for(int i=0;i<4;i++){
        cin>>team[i];
    }
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++){
            cin>>goal[i][j];
            shoot[i] += goal[i][j];
            being_shoot[j] += goal[i][j];
        }

    for(int i=0;i<4;i++){
        for(int j=i;j<4;j++){
            if(i != j){
                //cout<<"\n"<<team[i]<<' '<<goal[i][j]<<" VS "<<team[j]<<' '<<goal[j][i]<<endl;
                if(goal[i][j] > goal[j][i] ){
                    //cout<<team[i]<<"win"<<endl;
                    score[i]+=3;
                }else{
                    if(goal[i][j] < goal[j][i] ){
                        //cout<<team[j]<<"win"<<endl;
                        score[j]+=3;
                    }else{
                        //cout<<team[i]<<' '<<team[j]<<"Draw\n";
                        score[j]+=1;
                        score[i]+=1;
                    }

                }

            }
        }
    }
    //cout<<"Sort"
    for(int i = 0 ; i < 4 ; i ++){
        int tmp_max = i;
        for(int j = i ; j < 4 ; j ++){
            if(score[j]>score[tmp_max])
                tmp_max = j;
            else if(score[j]==score[tmp_max]){
                    if( shoot[tmp_max] - being_shoot[tmp_max] < shoot[j] - being_shoot[j] ){
                        tmp_max = j;
                    }else
                    if( shoot[tmp_max] - being_shoot[tmp_max] == shoot[j] - being_shoot[j] ){
                        if(shoot[tmp_max] < shoot[j]){
                            tmp_max = j;
                        }

                    }
                }



        }
        swap(team[i],team[tmp_max]);
        swap(score[i],score[tmp_max]);
        swap(shoot[i],shoot[tmp_max]);
        swap(being_shoot[i],being_shoot[tmp_max]);
    }

    //cout<<"\n\nFinalScore\n";
    for(int i =0;i<4;i++){
        //cout<<team[i]<<' '<<score[i]<<' '<<shoot[i]<<' '<<being_shoot[i]<<endl;
        cout<<team[i]<<' '<<score[i]<<endl;
    }


    return 0;
}
