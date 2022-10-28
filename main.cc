#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class file_handle{
  string _extension = ".txt";
  string filename = "default";
  string directory = "./noname";
  
  void append_extension();
  int read();
  int write();
  int readline(int idx);
  int writeline(int idx);
 public:
  string buffer = nullptr;
  int get(&content);
  int overwrite(&content);
  int append(&content)
  
}

const int MAX_SZ = 256;
const int MIN_SZ = 8;


enum PROCESS_STATE{
  _SUCCESS = 0,
  _ERROR = 1,
  _INVALID
} status; 

template <typename T>
int boundary_check(T range){
  if(MAX_SZ < range)
    return _INVALID;
  else if(MIN > range)
    return _INVALID;
  else
    return _SUCCESS;
}

//FUNCTIONS DEFINTIONS
using username file_handle;

//basic functionality
int read(){
  ofstream file;
  file.open(direcctory);
  file 
}
int write(){
  
}
//END OF DEFINITIONS

