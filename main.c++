#include <iostream>
using namespace std;

class Travel {
private:
    int km;
    int hr;

public:
    // Constructor
    Travel() {
        km = 0;
        hr = 0;
    }

    // Destructor
    ~Travel() {}

    // Member function to take input from the user
    void input() {
        cout << "Enter distance in kilometers: ";
        cin >> km;
        cout << "Enter time in hours: ";
        cin >> hr;
    }

    // Member function to display data members
    void show() {
        cout << "Distance: " << km << " km" << endl;
        cout << "Time: " << hr << " hr" << endl;
    }

    // Member function that accepts another Travel object as a parameter
    void Add(Travel p) {
        int total_km = km + p.km;
        int total_hr = hr + p.hr;

        cout << "\n--- Total Travel Summary ---" << endl;
        cout << "Total Distance: " << total_km << " km" << endl;
        cout << "Total Time: " << total_hr << " hrs" << endl;
    }
};

int main() {
    // Declaring two objects of class Travel
    Travel t1, t2;

    cout << "--- Input for Travel 1 ---" << endl;
    t1.input();

    cout << "\n--- Input for Travel 2 ---" << endl;
    t2.input();

    cout << "\n--- Travel 1 Details ---" << endl;
    t1.show();

    cout << "\n--- Travel 2 Details ---" << endl;
    t2.show();

    // Calling Add function with t1 object and passing t2 object as an argument
    t1.Add(t2);

  
