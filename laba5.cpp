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
        vector<Bug> bug;
    void getSeverity(){
            for (int i = 0; i < bug.size() - 1; i++){
                for (int j = 0; j < bug.size() - i - 1; j++){
                    if (bug[j].severity > bug[j + 1].severity){
                        swap(bug[j], bug[j+1]);
                    }
                }
            }
    };
    void printSeverity(){
        for (int i = 0; i < bug.size(); i++){
                cout << bug[i].description  << "\t" << bug[i].severity << "\t" << bug[i].deadline << "\t" << bug[i].status << "\t" << bug[i].assignee << endl;
        }   
    }
    void getStatus(){
        for (int i = 0; i < bug.size(); i++){
            if (bug[i].status == "Resolved"){
                cout << bug[i].description<< "\t" << bug[i].severity << "\t" << bug[i].deadline << "\t" << bug[i].status << "\t" << bug[i].assignee  << endl;
            }}}
};
int main(){
    BugLog buglog;
    buglog.bug.push_back(Bug("No selicom", 1, "25.11.2022", "Resolved", "Developer"));
    buglog.bug.push_back(Bug("Not conect to server", 2, "21.11.2022 ", "Open", "Developer"));
    buglog.bug.push_back(Bug("Text error", 6, "0.11.2022", "Open", "Developer"));
    buglog.bug.push_back(Bug("Not adaptive menu in mobile", 4, "23.11.2022", "Resolved", "UI/UX designer" ));
    buglog.getStatus();
    cout << endl;
    buglog.getSeverity();
    buglog.printSeverity();
}
