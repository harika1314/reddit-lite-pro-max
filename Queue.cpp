#include <iostream>
#include <queue>
#include <set> // Include the set container

using namespace std;

int main() 
{
    queue<int> q; // Object creation
    set<int> uniqueSet; // Set to store unique values
    int item;
    char ans;
    int choice;

    do
    {
        cout << "\nMain Menu";
        cout << "\n1. Insert element";
        cout << "\n2. Delete Element";
        cout << "\n3. Display Rear Element";
        cout << "\n4. Display Front Element";
        cout << "\n5. Size of queue";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter the value to be inserted in Queue: ";
                cin >> item;
                if (uniqueSet.find(item) == uniqueSet.end()) {
                    // Value is not in the set, insert it
                    q.push(item);
                    uniqueSet.insert(item);
                    cout << "\nItem is Inserted!";
                } else {
                    cout << "\nItem already exists in the queue. Duplicate values are not allowed.";
                }
                break;

            case 2:
                if (!q.empty()) {
                    item = q.front();
                    q.pop();
                    uniqueSet.erase(item);
                    cout << "\nDeleted item is " << item;
                } else {
                    cout << "\nQueue is empty. No item to delete.";
                }
                break;

            case 3:
                if (!q.empty()) {
                    cout << "The element at the rear end is: " << q.back();
                } else {
                    cout << "Queue is empty.";
                }
                break;

            case 4:
                if (!q.empty()) {
                    cout << "The element at the front end is: " << q.front();
                } else {
                    cout << "Queue is empty.";
                }
                break;

            case 5:
                cout << "\nSize of queue = " << q.size();
                break;
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> ans;

    } while (ans == 'y');

    return 0;
}
