#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

class TodoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& description) {
        tasks.push_back({description, false});
    }

    void viewTasks() {
        cout << "Tasks:\n";
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i+1 << ". " << tasks[i].description;
            if (tasks[i].completed)
                cout << " - Completed";
            cout << endl;
        }
    }

    void markTaskCompleted(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks[index - 1].completed = true;
            cout << "Task marked as completed.\n";
        } else {
            cout << "Invalid task number.\n";
        }
    }

    void removeTask(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks.erase(tasks.begin() + index - 1);
            cout << "Task removed.\n";
        } else {
            cout << "Invalid task number.\n";
        }
    }
};

int main() {
    TodoList todoList;
    int choice;

    do {
        cout << "\nTodo List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cin.ignore();
                string description;
                cout << "Enter task description: ";
                getline(cin, description);
                todoList.addTask(description);
                break;
            }
            case 2:
                todoList.viewTasks();
                break;
            case 3: {
                size_t index;
                cout << "Enter the task number to mark as completed: ";
                cin >> index;
                todoList.markTaskCompleted(index);
                break;
            }
            case 4: {
                size_t index;
                cout << "Enter the task number to remove: ";
                cin >> index;
                todoList.removeTask(index);
                break;
            }
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
