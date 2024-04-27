//All task related operations

#include <iostream>
#include <iomanip>
#include <vector>
#include "Task.cpp"

class TaskList {
     private:
         vector<Task> tasks;
         int ID;

     public:
         
         TaskList() {
             //by default
             ID = 1;
         }
         TaskList(int id) {
             ID = id;
         }

         void addTask(string desc) {
             Task newTask(ID++, desc);
             tasks.push_back(newTask);
         }

         void TaskStatus(int taskId) {
             bool found = false;
             for (Task& t : tasks) {
                 if (t.getID() == taskId) {
                     t.Updatestatus();
                     cout << "Task" << taskId << "marked completed" << endl;
                     found = true;
                     break;
                 }
             }
             if (!found) {
                 cout << "[Not Found]" << endl;
             }
         }


         void viewTask() {
             cout << "Current tasks: " << endl;
             for (Task& t : tasks) {
                 cout << "Task ID " << t.getID() << " Description " << t.getDesc();
                 if (t.TaskStatus()) {
                     cout << "[Completed]";
                 }
                 cout << endl;
             }
         
         }

};
