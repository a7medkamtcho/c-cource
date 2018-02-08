#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile ("example.txt");  //to get the file location
  if (myfile.is_open())  //i asked him if my file has been open
  {
    myfile << "This is a line.\n";  //i have write the line 1
    myfile << "This is another line.\n";  //i have write the line 2
    myfile.close(); //i have tell the file to close
  }
  else //if my file can`t open
  {
    cout << "Unable to open file";  //cout msg to tell him i can`t open the file
  }
  return 0;
}
