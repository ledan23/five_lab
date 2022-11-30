#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Bug{
    public:
    string description;
    int severity;
    string deadline;
    string status;
    string assignee;
    Bug(string description, int severity, string deadline, string status, string assignee){
        this -> description = description;
        this -> severity = severity;
        this -> deadline = deadline;
        this -> status = status;
        this -> assignee = assignee;
    }
};

class BugLog{
    public:
    Bug bug[4] = {
        Bug("No selicom", 1, "25.11.2022", "Resolved", "Developer"),
        Bug("Not conect to server", 2, "21.11.2022 ", "Open", "Developer"),
        Bug("Text error", 6, "0.11.2022", "Open", "Developer"),
        Bug("Not adaptive menu in mobile", 4, "23.11.2022", "Resolved", "UI/UX designer" )
    };

    string getStatus(){
        for (int i = 0; i < 4; i++){
            if (bug[i].status == "Resolved"){
                cout << bug[i].description<< "\t" << bug[i].severity << "\t" << bug[i].deadline << "\t" << bug[i].status << "\t" << bug[i].assignee << endl;
            }
        }
    };
/*    int getSeverity(){
            int i, j;
            for (i = 0; i < 4 - 1; i++){
                for (j = 0; j < 4 - i - 1; j++){
                    if (bug[j].severity > bug[j + 1].severity){
                        swap(bug[j].severity, bug[j + 1].severity);
                        swap(bug[j].deadline, bug[j + 1].deadline);
                        swap(bug[j].status, bug[j + 1].status);
                        swap(bug[j].assignee, bug[j + 1].assignee);
                    }
                }
            }
    };
    void printSeverity(){
        for (int i = 0; i < 4; i++){
                cout << bug[i].description  << "\t" << bug[i].severity << "\t" << bug[i].deadline << "\t" << bug[i].status << "\t" << bug[i].assignee << endl;
    }
        
    }
*/
};
int main(){
    BugLog buglog;
    buglog.getStatus();
/*   buglog.getSeverity();
    buglog.printSeverity(); */
}