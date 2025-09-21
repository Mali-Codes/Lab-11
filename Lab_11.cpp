#include <iostream>
#include <vector>
#include <string>
using namespace std;

// The struct to hold all the palyers data for each player

struct Player {
    string name;
    string phone;
    bool rsvped = false;
    vector<string> games; // dynamic array inside the struct
};

void printPlayer(const Player& p) {
    cout << "Name: " << p.name << endl;
    cout << "Phone: " << p.phone << endl;
    cout << "RSVPed: " << (p.rsvped ? "Yes" : "No") << endl; // output function
    cout << "Games: ";                                       // all these are using the struct to call things                                    
    for (const auto& game : p.games) {                       // and print them (p. is the struct variable)    
        cout << game << " ";
    }
    cout << endl;
} 