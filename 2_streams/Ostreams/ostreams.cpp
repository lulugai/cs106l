
//What do we need to include?
#include <iostream>
#include <string>
#include <fstream>

//No using namespace std;!!!!
using std::cout;
using std::endl;
using std::string;

//function to write num to any ostream
void write_method(std::ostream& anyoutstream, int num){
    anyoutstream << "Take any ostream:" << num << endl;
}

int main() {
    // Write an int to the user's console.
    int myNum = 42;
    
    cout << "Write an int to the user's console:" << myNum << endl;

    // Write an int to a file.
    std::ofstream outputfile("out.txt");
    outputfile << "Write an int to a file:" << myNum << endl;

    // Write method to take any ostream
    std::ofstream fileout("out.txt");
    
    write_method(cout, myNum);    
    write_method(fileout, myNum + 1);    
   
    return 0;
}
