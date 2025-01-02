
#include <iostream>
#include <map>
#include <string>

using namespace std;

//CREATE
// int main() {
// //map that stores students with their respective grades
//     map<string, double> studentGrades;
//     string name;
//     double grade;

//     int numStudents;
//     cout << "Enter the number of students: ";
//     cin >> numStudents;

//     for (int i = 0; i < numStudents; i++) {
//         cout << "Enter student's name: ";
//         cin >> name;
//         cout << "Enter student's grade (in decimal format): ";
//         cin >> grade;

// //pairing the keys and values
//         studentGrades[name] = grade;
//     }

//     // Print the student names and their corresponding grades
//     cout << "\nStudent Grades:\n";
//     for (const auto& index : studentGrades) {
//         cout << index.first << ": " << index.second << endl;
//     }

//     return 0;
// }


// //READ (OPERATOR[])
// int main() {
//     map<string, double> student;

//     student["John"] = 32.9;
//     student["Koko"] = 45.7;
//     student["Samnang"] = 99.9;

//     cout << "John's grade is: " << student["John"] << endl;
//     cout << "Koko's grade is: " << student["Koko"] << endl;
//     cout << "Samnang's grade is: " << student["Samnang"] << endl;

//     return 0;
// }

// //READ( .at() )

// int main() {
//     map<string, double> student;

//     student["John"] = 32.9;
//     student["Koko"] = 45.7;
//     student["Samnang"] = 99.9;

//     cout << "John's grade is: " << student.at("John") <<endl;
//     cout << "Koko's grade is: " << student.at("Koko") << endl;
//     cout << "Samnang's grade is: " << student.at("Samnang") << endl;

//     return 0;
// }


//UPDATE


// int main()
// {

//     // creating a map
//     map<int, string> myMap = { { 1, "One" }, { 2, "Two" } };

//     // Updating an existing element's value
//     myMap[2] = "Three";

//     // Accessing and printing elements
//     cout << "Map after Updating" << endl;
//     for (auto it : myMap) {
//         cout << "Key:" << it.first << " Value:" << it.second
//              << endl;
//     }

//     return 0;
// }

//DELETE

// int main()
// {
//     // Creating a map
//     map<int, string> myMap;

//     // Inserting key-value pairs into the map
//     myMap[1] = "One";
//     myMap[2] = "Two";
//     myMap[3] = "Three";

//     // Displaying the map before deletion
//     cout << "Map before deletion:" << endl;
//     for (const auto& pair : myMap) {
//         cout << pair.first << ": " << pair.second << endl;
//     }

//     // Finding the iterator for the key to be deleted
//     int key = 2;
//     auto it = myMap.find(key);

//     // Deleting the key-value pair using erase()
//     if (it != myMap.end()) {
//         myMap.erase(it);
//     }

//     // Displaying the map after deletion
//     cout << "\nMap after deletion:" << endl;
//     for (const auto& pair : myMap) {
//         cout << pair.first << ": " << pair.second << endl;
//     }

//     return 0;
// }






