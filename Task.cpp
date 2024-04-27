#include <iostream>
#include <iomanip>
using namespace std;

class Task {
    private:
        int taskid;
        string description;
        bool status;

    public:
        Task() {}
        Task(int id, string desc){
            taskid = id;
            description = desc;
            status = false;
        }

        int getID() const {

            return taskid;

        }

        string getDesc() {
            return description;
        }

        bool TaskStatus() {
            //completion status
            return status;
        }

        void Updatestatus() {
            //completion status
            status = true;
        }

};
