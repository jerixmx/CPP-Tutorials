// file.cpp, Maggie Johnson
// Description: A program to illustrate file processing.
// Modified to input and read multiple entries -jlm

#include <fstream>
#include <iostream>
using namespace std;

int main() {
  char first_name[30], last_name[30];
  int age;
  char file_name[20];
  bool add_more=true;

  cout << endl << "Enter the name of the file: ";
  cin >> file_name;
  // Create an ofstream called People, open the stream for output.
  ofstream People(file_name, ios::out);
  while(add_more)
  {
    char yn ='y';
    // Collect the data.
    cout << "Enter First Name: ";
    cin >> first_name;
    cout << "Enter Last Name:  ";
    cin >> last_name;
    cout << "Enter Age:        ";
    cin >> age;



    // Write the output to the stream.
    People << first_name << endl << last_name << endl << age << endl;

    cout<<"Add more entries? (y/n)";
    cin>>yn;

    if(yn=='n'){
      add_more = false;
    }
  }
  // Close the stream.
  People.close();

  // Create an ifstream to read the file.
  ifstream People_in(file_name);
  while(!People_in.eof()){
    People_in >> first_name >> last_name >> age;
    cout << endl << "First Name: " << first_name;
    cout << endl << "Last Name:  " << last_name;
    cout << endl << "Enter Age:  " << age;
    cout << endl;
  }
  // Close the stream.
  People_in.close();

  return 0;
}