#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct to_do{
    string task;
    bool finish;
};
void display(const vector<to_do>& tasks){
    cout<<"To-Do List :\n";
    for (size_t i=0;i<tasks.size();++i){
        cout<<i+1<<".["<<(tasks[i].finish ? "X" : " ")<<"] "<<tasks[i].task<<endl;
    }
}
int main(){
    vector<to_do> tasks;
    int option;
    cout<<"To-Do list Manager\n";
    while(true){
        cout<<"\nSelect any of the following you want to do :\n";
        cout<<"1.Add Task\n";
        cout<<"2.View Task\n";
        cout<<"3.Mark Task as Completed\n";
        cout<<"4.Delete Task\n";
        cout<<"5.Exit\n";
        cout<<"Enter your choice : \n";
        cin>>option;
        if (option==1)
        {
            to_do add;
            cout<<"Enter the Task to be done : ";
            cin.ignore();
            getline(cin,add.task);
            add.finish=false;
            tasks.push_back(add);
            cout<<"Task Added Successfully!!!\n";
        }
        else if(option ==2){
            if(tasks.empty()){
                cout<<"Sorry..No task to be displayed!!!\n";}
                else{
                    display(tasks);
                }
        }
        else if(option == 3){
            int comp;
            cout<<"Enter the task to be maked as complete : \n";
            cin>>comp;
            if(comp>=1 && comp<=static_cast<int>(tasks.size())){
                tasks[comp-1].finish=true;
            }
            else{
                cout<<"Enter the correct task to be marked as complete.";
            }
        }
        else if(option==4){
            int comp;
            cout<<"Enter the task to be deleted : ";
            cin>>comp;
            if(comp>=1 && comp <=static_cast<int>(tasks.size())){
                tasks.erase(tasks.begin()+comp-1);
                cout<<"Task Deleted successfully!!!";
            }
            else{
                cout<<"Enter the correct task to be Deleted.";
            }
        }
        else if(option==5){
            cout<<"Exit.\n";
            break;
        }
        else{
            cout<<"Enter the valid option.\n";
        }
    }
    return 0;
}