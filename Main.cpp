// TodoList.cpp :
//

#include <iostream>
#include <iomanip>
#include <vector>
#include "TaskList.cpp"

using namespace std;


int main()
{
    int choice;
    TaskList tasklist;

    do {
        cout << "--------------------" << endl;
        cout << "TO DO LIST" << endl;
        cout << "--------------------" << endl;
        cout << "\t" << "Menu" << endl;
        cout << "--------------------" << endl;
        cout << "1] Add Task" << endl;
        cout << "2] Task Status" << endl;
        cout << "3] View Tasks" << endl;
        cout << "4] Exit" << endl;
        cout << "--------------------" << endl;

        cout << "Enter your choice" << endl;
        cin >> choice;

        //options
        switch (choice) {
           case 1:
           {
               string Desc;
               cout << "Enter task" << endl;
               cin.ignore();
               getline(cin, Desc);
               //cin >> Desc;
               tasklist.addTask(Desc); 
               cout << "task added successfully" << endl;
              
               break;

           }
           case 2:
           {
               int id;
               cout << "Enter task id to mark completed" << endl;
               cin >> id;
               tasklist.TaskStatus(id);

               break;
           }
           case 3: 
           {
               cout << "[Task View]" << endl;
               tasklist.viewTask();
               break;
           }
           case 4:
           {
               cout << "Exit" << endl;
               break;

           }
           default:
               cout << "Invalid choice. Try again" << endl;

        }


    } while (choice != 4);

    
    return 0;
}
