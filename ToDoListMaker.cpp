#include <iostream>
#include <windows.h>
using namespace std;
#include <string>

void displayTask(string tasks[], int taskCount){

    cout<< "Your ToDo list: " << endl;
    for (int i =0; i<taskCount; i++){
        cout << "ToDo:" << i << " " << tasks[i] << endl;
    }
}

int main(){

    string tasks[10]= {" "};
    int taskCount = 0;

    int option = -1;
    while(option!=0){
        std::cout << "-------Make a ToDo-------" << std::endl;
        std::cout << "Press the Indicated number key to select what you want to do!" << std::endl;
        std::cout << "[1.] Add a task" << std::endl;
        std::cout << "[2.] View your tasks" << std::endl;
        std::cout << "[3.] Mark task completed" << std::endl;
        std::cout << "[0.] Exit" << std::endl;
        std::cin >> option;


        switch (option)
        {
        case 1:
            if (taskCount>9)
            {
                std::cout << "Boop, ToDo list is full!" << std::endl;
            }
            else
            {
                std::cout << "Add ToDo: ";
                std::cin.ignore( ); 
                getline(cin, tasks[taskCount]); 
                taskCount++;
                system("cls");
            }
            break;
            
        
        case 2:
            system("cls");
            displayTask(tasks, taskCount);
            cout<<endl;
            break;
            system("cls");

        case 3:
        {
            int delTask = 0;
            cout << "Which ToDo was completed?: ";
            cin >> delTask;
            system("cls");
            
            cout<<"----------------------"<<endl;
            cout<<"ToDo marked as complete!"<<endl;
            cout<<"----------------------"<<endl;
            cout<<endl;

            if(delTask<0 || delTask>9){
                cout << "Oops, 404 - ToDo not found!" << endl;
                break;
            }
            for(int i = delTask; i<taskCount; i++){
                tasks[i] = tasks[1+i];
            }
            taskCount--;
            break;

        }
        }
    }

    return 0;
}