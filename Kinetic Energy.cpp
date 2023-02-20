#include <iostream>
using namespace std;

double KeneticEnergy(int m, int v)
{
    int  mass = m;
    int velocity = v;
    // Kenetic energy equation.
    double ke = ((0.5 * mass) * pow(velocity, 2));
    // Display results after the equation.
    cout << "The kinetic energy is equal to " << ke << " joules" << endl;
    cout << endl;
    return ke;
}

int main()
{
    char choice = 0;
    // Using a do/while loop to run the program again.
    do {
        int mass; // The weight...
        int velocity; // The speed...
        // Getting user input for mass value.
        cout << "Enter a value for mass: ";
        cin >> mass;
        cout << endl;
        // Getting user input for velocity value.
        cout << "Enter a value for velocity: ";
        cin >> velocity;
        KeneticEnergy(mass, velocity);
        // Asking user if they want to run the program again;
        cout << "Would you like to run the program again (y/n): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    return 0;
}