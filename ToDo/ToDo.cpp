#include <iostream>
#include <vector> 
#include <string> 

using namespace std;

int main() {
    vector<string> todoList;  
    string task;
    int choice;

    while (true) {
    
        cout << "\n Simple To-Do List Menu: \n";
        cout << "1. Add task \n";
        cout << "2. Show all tasks \n";
        cout << "3. Delete task \n";
        cout << "4. Close list \n";
        cout << "Please choose one of this option (1-4): ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            
            cout << "Enter a task: ";
            getline(cin, task);
            todoList.push_back(task);
            cout << "Task added!" << endl;
        }
        else if (choice == 2) {
            
            if (todoList.empty()) {
                cout << "Your to-do list is empty.\n";
            }
            else {
                cout << "Your tasks:\n";
                for (int i = 0; i < todoList.size(); ++i) {
                    cout << i + 1 << ". " << todoList[i] << endl;
                }
            }
        }
        else if (choice == 3) {
            if (todoList.empty()) {
                cout << "Your to-do list is empty, nothing to delete.\n";
            }
            else {
                cout << "Enter the number of the task you want to delete: ";
                int deleteIndex;
                cin >> deleteIndex;

                if (deleteIndex >= 1 && deleteIndex <= todoList.size()) {
                    todoList.erase(todoList.begin() + deleteIndex - 1);  // delete task
                    cout << "Task deleted!" << endl;
                }
                else {
                    cout << "Invalid number! Try again.\n";
                }
            }
        }
        else if (choice == 4) {
            // Programm beenden
            cout << "Program is closing. Goodbye!" << endl;
            break;
        }
        else {
            cout << "Invalid selection! Please select a number between 1 and 4.\n";
        }
    }

    return 0;
}
