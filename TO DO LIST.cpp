#include <iostream>
#include <vector>
#include <string>

using namespace std;

void showMenu() {
    cout << "===== To-Do List Manager =====" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Delete Task" << endl;
    cout << "4. Exit" << endl;
    cout << "==============================" << endl;
}

int main() {
    vector<string> tasks;
    int choice;
    
    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                {
                    string newTask;
                    cout << "Enter the task to add: ";
                    cin.ignore(); // Clear the input buffer
                    getline(cin, newTask);
                    tasks.push_back(newTask);
                    cout << "Task added successfully!" << endl;
                    break;
                }
            case 2:
                {
                    cout << "===== Tasks =====" << endl;
                    for (int i = 0; i < tasks.size(); ++i) {
                        cout << i + 1 << ". " << tasks[i] << endl;
                    }
                    cout << "=================" << endl;
                    break;
                }
            case 3:
                {
                    int index;
                    cout << "Enter the index of the task to delete: ";
                    cin >> index;
                    if (index >= 1 && index <= tasks.size()) {
                        tasks.erase(tasks.begin() + index - 1);
                        cout << "Task deleted successfully!" << endl;
                    } else {
                        cout << "Invalid index! Please enter a valid index." << endl;
                    }
                    break;
                }
            case 4:
                cout << "Exiting To-Do List Manager. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please enter a valid choice (1-4)." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
