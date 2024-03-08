//Laiba Mazhar
//i22-1855
//Task 3
//NUCES, Fast, ISLAMABAD
#include <iostream>
#include <string>
using namespace std;
class laiba_task
{
public:
    string description;
    bool completed;
};

void laiba_add(laiba_task laiba_list[], int& n, const string& des) 
{
    laiba_list[n].description = des;
    laiba_list[n].completed = false;
    cout << "Task added: " << des << endl;
    n++;
}

void laiba_view(laiba_task laiba_list[], int numTasks)
{
    cout << "Tasks:" << endl;
    for (int i = 0; i < numTasks; i++) 
    {
        cout << "- " << laiba_list[i].description << " [" << (laiba_list[i].completed ? "Completed" : "Pending") << "]" << endl;
    }
}

// Function to mark a task as completed
void laiba_completed(laiba_task laiba_list[], int n, const string& des) 
{
    for (int i = 0; i < n; i++) 
    {
        if (laiba_list[i].description == des) 
        {
            laiba_list[i].completed = true;
            cout << "Task marked as completed: " << des << endl;
            return;
        }
    }
    cout << "Task not found: " << des << endl;
}

void laiba_remove(laiba_task laiba_list[], int& n, const string& des) 
{
    for (int i = 0; i < n; i++)
    {
        if (laiba_list[i].description == des) 
        {
            for (int j = i; j < n - 1; j++) 
            {
                laiba_list[j] = laiba_list[j + 1];
            }
            n--;
            cout << "Task removed: " << des << endl;
            return;
        }
    }
    cout << "Task not found: " << des << endl;
}

int main() 
{
    const int max_tasks = 100;
    laiba_task l1[max_tasks];
    int numTasks = 0;
    char choice;

    do
    {
        cout << endl;
        cout << "Task Manager" << endl<<endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl<<endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        switch (choice) 
        {
        case '1': 
        {
            string desc;
            cout << "Enter task description: ";
            cin.ignore();
            getline(cin, desc);
            laiba_add(l1, numTasks, desc);
            break;
        }
        case '2':
            laiba_view(l1, numTasks);
            break;
        case '3': 
        {
            string des;
            cout << "Enter task description to mark as completed: ";
            cin.ignore();
            getline(cin, des);
            laiba_completed(l1, numTasks, des);
            break;
        }
        case '4': 
        {
            string des;
            cout << "Enter task description to remove: ";
            cin.ignore();
            getline(cin, des);
            laiba_remove(l1, numTasks, des);
            break;
        }
        case '5':
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '5');

    return 0;
}
