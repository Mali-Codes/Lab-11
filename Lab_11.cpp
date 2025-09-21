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