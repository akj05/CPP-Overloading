// Ankush jha
// 24070123016

#include <iostream>
using namespace std;

class UserInfo {
public:
    void show(string name) {
        cout << "Name: " << name << endl;
    }

    void show(string name, int age) {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void show(string name, string city) {
        cout << "Name: " << name << ", City: " << city << endl;
    }

    void show(string name, int age, string city) {
        cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
    }
};

int main() {
    UserInfo u;

    u.show("Ankush");
    u.show("Ankush", 20);
    u.show("Ankush", "Pune");
    u.show("Ankush", 20, "Pune");

    return 0;
}

// OUTPUT
// Name: Ankush
// Name: Ankush, Age: 20
// Name: Ankush, City: Pune

// Name: Ankush, Age: 20, City: Pune

