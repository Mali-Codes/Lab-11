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

int main() { 
    vector<Player> roster;
                                                    
    roster.push_back({"Avery", "555-1010", true,  {"Catan"}}); // Add players to the roster with le push_back method
    roster.push_back({"Bri",   "555-2020", false, {}});              // starts with 0 games
    roster.push_back({"Cam",   "555-3030", true,  {"Codenames"}});

    // --- Before updates ---
    cout << "=== Before updates ===\n";
    for (const auto& p : roster) {
        printPlayer(p);
        cout << "--------------------\n";
    }

                                                 // Change data to show mutability (inner dynamic array grows)
    roster[1].rsvped = true;                     // Bri RSVPs later
    roster[1].games.push_back("Uno");            // add games dynamically
    roster[1].games.push_back("Exploding Kittens");

    // --- After updates ---
    cout << "=== After updates ===\n";
    for (const auto& p : roster) {
        printPlayer(p);
        cout << "--------------------\n";
    }

    return 0;
}