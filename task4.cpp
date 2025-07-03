#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;

    Task(string desc) {
        description = desc;
        completed = false;
    }
};

vector<Task> todoList;

void addTask() {
    string taskDesc;
    cout << "Enter the task description: ";
    cin.ignore();
    getline(cin, taskDesc);
    todoList.push_back(Task(taskDesc));
    cout << "Task added successfully!\n";
}

void viewTasks() {
    if (todoList.empty()) {
        cout << "No tasks in the list.\n";
        return;
    }

    cout << "\nTo-Do List:\n";
    for (int i = 0; i < todoList.size(); i++) {
        cout << i + 1 << ". " << todoList[i].description;
        if (todoList[i].completed)
            cout << " [Completed]";
        else
            cout << " [Pending]";
        cout << "\n";
    }
}

void markCompleted() {
    int index;
    cout << "Enter the task number to mark as completed: ";
    cin >> index;

    if (index < 1 || index > todoList.size()) {
        cout << "Invalid task number!\n";
    } else {
        todoList[index - 1].completed = true;
        cout << "Task marked as completed.\n";
    }
}

void deleteTask() {
    int index;
    cout << "Enter the task number to delete: ";
    cin >> index;

    if (index < 1 || index > todoList.size()) {
        cout << "Invalid task number!\n";
    } else {
        todoList.erase(todoList.begin() + index - 1);
        cout << "Task deleted successfully.\n";
    }
}

void showMenu() {
    cout << "\n===== To-Do List Menu =====\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Mark Task as Completed\n";
    cout << "4. Delete Task\n";
    cout << "5. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                markCompleted();
                break;
            case 4:
                deleteTask();
                break;
            case 5:
                cout << "Exiting To-Do List Manager. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
