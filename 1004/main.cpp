#include <iostream>
#include <vector>

using namespace std;

struct student{

    int level;
    int number;

};

int main()
{
    vector<student>student_list;
    vector<student>line;
    vector<student>out_put;

    int l,n;
    cin>>l>>n;
    for(int i=0;i<n;i++){

        student tmp;
        cin>>tmp.level>>tmp.number;
        student_list.push_back(tmp);

    }

    //for(int i=0;i<student_list.size();i++)
    //    cout<<student_list[i].level<<" "<<student_list[i].number<<endl;


    char inp='T';
    while(inp != 'X'){

        //cout<<"\nGET INP : \n";
        cin>>inp;
        if(inp == 'E'){
            //cout<<"E loop : \n";
            int stu_num;
            int i=0;
            cin>>stu_num;
            bool found=false;
            while(!found){

                if(stu_num == student_list[i].number){

                    int place = line.size();
                    for(int j=0;j<line.size();j++){

                        if(line[j].level == student_list[i].level && line[j].level != line[j+1].level){
                            place = j+1;
                            break;
                        }
                    }
                    line.insert(line.begin()+place,student_list[i]);
                    found = true;


                }else{

                    i++;
                    if(i>=student_list.size()){
                        found = true;

                    }
                }
            }

        }else
        if(inp == 'D'){
            //cout<<"line size = "<<line.size();
            if(line.size()>0){
                out_put.push_back(line[0]);
                //cout<<"outPutSize = "<<out_put.size()<<endl;
                for(int i=0;i<line.size()-1;i++){
                    line[i] = line[i+1];
                }
                line.pop_back();

            }

        }


    }
    //cout<<"OUT PUT SIZE = "<<out_put.size()<<endl;
    for(int i=0;i<out_put.size();i++)
        cout<<out_put[i].number<<endl;
    cout<<0;

    return 0;
}
