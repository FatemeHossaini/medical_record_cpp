#include <iostream>
#include <vector>
#include <string>

using namespace std;


// Define a structure to store patient information
struct Patient { 
    int id;
	string name;
	int age;
 };  
// Show the main menu
void showMenu() {
    cout << "\n=== Medical Record System ===\n";
    cout << "1. Add new patient\n";
    cout << "2. Show all patients\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
} 

// Function to add a new patient to the list
 void addPatient(vector<Patient>& patients) {
    Patient p;
    cout << "Enter patient ID: ";
    cin >> p.id;
    cin.ignore();       // Clear the input buffer after reading integer
	
	cout << "Enter patient name: ";
    getline(cin, p.name);       // Read full line (supports spaces)
    
	cout << "Enter patient age: ";
	cin >> p.age;     // Add the new patient to the list
	patients.push_back(p);
	cout << "Patient added successfully!\n";
	} 
// Function to display all patients
 void showPatients(const vector<Patient>& patients) {
    if (patients.empty()) {
    cout << "No patients to show.\n";
	return;
	} 
	cout << "\nList of patients:\n";
	 
	for (const Patient& p : patients) { 
    cout << "ID: " << p.id << ", Name: " << p.name << ", Age: " << p.age << endl;
	} 
} 

int main() {
    vector<Patient> patients;     // A list to store all patient records
	int choice;   // Main program loop
    while (true) {
	showMenu();     // Display menu
	cin >> choice;     // Get user input
	cin.ignore() ;     // Clear buffer again
	if (choice == 1) {
	addPatient(patients);    // Option 1: Add a patient
    }
	else if (choice == 2) {	
	showPatients(patients);     // Option 2: Show all patients
	} 
	else if (choice == 3) { 
	cout << "Goodbye!\n";      // Option 3: Exit the program
	break;
	}
    else {
	cout << "Invalid choice. Try again.\n"; // Invalid input }
	} 
	return 0; 
    }
}