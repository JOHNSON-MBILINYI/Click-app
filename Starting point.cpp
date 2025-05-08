#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> tasks;

void showTasks() {
    if (tasks.empty()) {
        cout << "No tasks.\n";
        return;
    }
    for (size_t i = 0; i < tasks.size(); ++i)
        cout << i + 1 << ". " << tasks[i] << '\n';
}

void addTask() {
    string task;
    cout << "Enter task: ";
    getline(cin >> ws, task);
    tasks.push_back(task);
}

void removeTask() {
    int index;
    cout << "Enter task number to remove: ";
    cin >> index;
    if (index < 1 || index > tasks.size()) {
        cout << "Invalid number.\n";
        return;
    }
    tasks.erase(tasks.begin() + index - 1);
}

int main() {
    int choice;
    while (true) {
        cout << "\n1. Show Tasks\n2. Add Task\n3. Remove Task\n4. Exit\nChoice: ";
        cin >> choice;
        switch (choice) {
            case 1: showTasks(); break;
            case 2: addTask(); break;
            case 3: removeTask(); break;
            case 4: return 0;
            default: cout << "Invalid choice.\n";
        }
    }
}
