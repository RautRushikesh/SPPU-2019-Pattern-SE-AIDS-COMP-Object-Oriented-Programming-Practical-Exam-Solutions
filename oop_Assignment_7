// Write a program in C++ to use map associative container. 
// The keys will be the names of states and the values will be the populations of the states. 
// When the program runs, the user is prompted to type the name of a state. 
// The program then looks in the map, using the state nameas an index and returns the population of the state.



#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Define a map with string keys and integer values
    typedef map<string, int> mapType;
    mapType populationMap;

    // Insert population data for different states into the map
    populationMap.insert(pair<string, int>("Maharashtra", 7026357));
    populationMap.insert(pair<string, int>("Rajasthan", 6578936));
    populationMap.insert(pair<string, int>("Karnataka", 6678993));
    populationMap.insert(pair<string, int>("Punjab", 5789032));
    populationMap.insert(pair<string, int>("West Bengal", 6676291));

    // Iterator to traverse the map
    mapType::iterator iter;

    // Display a header for the population information
    cout << "========Population of states in India==========\n";

    // Display the size of the population map
    cout << "\n Size of populationMap: " << populationMap.size() << "\n";

    // Ask the user to enter the name of a state
    string state_name;
    cout << "\n Enter name of the state: ";
    cin >> state_name;

    // Search for the entered state in the population map
    iter = populationMap.find(state_name);
    
    // Check if the state was found in the map
    if (iter != populationMap.end())
        cout << state_name << "'s population is " << iter->second;
    else
        cout << "Key is not in the populationMap" << "\n";

    // Clear the entire population map
    populationMap.clear();

    // The program finishes here
}
