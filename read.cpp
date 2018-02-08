#include <iostream>  
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line; 
  ifstream myfile ("example.txt");  //to get the file locathion
  if (myfile.is_open())  //i asked him if the file has been open
  {
    while ( getline (myfile,line) ) //(getline(my file object , the line who i want to get him)
    {
      cout << line << '\n';  //to cout the line string
    }
    myfile.close();  //file close
  }

  else cout << "Unable to open file"; 

  return 0;
}
