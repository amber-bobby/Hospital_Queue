#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct Patient {
    
    string name;
    int priority;

    bool operator<(const Patient& other) const {
        return priority < other.priority;
    }
};

int main() {

    priority_queue<Patient> pq;

    for(int i = 0; i < 5; i++) {
        Patient p;
        cout << "Enter name of patient " << (i + 1) << ": ";
        cin >> p.name;

        cout << "Enter priority of " << p.name << ": ";
        cin >> p.priority;
        pq.push(p);
    }

    cout << endl;
    cout << "Order of treatment: " << endl;

    while(!pq.empty()) {
        cout << pq.top().name << endl;
        pq.pop();
    }
}