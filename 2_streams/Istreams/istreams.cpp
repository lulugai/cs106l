
#include <iostream>
#include <fstream>

using std::cout;    using std::endl;
using std::string; using std::cin;

//read numbers from a file
void readNumbers() {
    // Create our ifstream and make it open the file
    std::ifstream in("./res/numbers.txt");

    // Something to store values we get from the stream
    int num;
    while(true){
        in >> num;
        if(in.fail()) break;

        cout << "The value is :" << num << endl;
    }    
        // Extract next number from input
        

        // If input is in a fail state, either a value couldn't
        // be converted, or we are at the end of the file.

        //print whatever we read
        
}

//read a single word at a time from a file
void readHaikuWord() {
    // Create our ifstream and make it open the file
    std::ifstream in("./res/haiku.txt");
     // Something to store values we get from the stream
    string str;
    while(true){
        in >> str;
        if(in.fail()) break;

        cout << "The string is :" << str << endl;
    }
        // Extract next word from input


        // If input is in a fail state, either a value couldn't
        // be converted, or we are at the end of the file.

        //print whatever we read

}

void readHaikuLine() {
    // Create our ifstream and make it open the file
    std::ifstream in("./res/haiku.txt");
    string line;
    while(true){
        std::getline(in, line);

        if(in.fail()) break;
        cout << "The line is :" << line << endl;
    }
    // Something to store the lines as we get them form the stream

        // If input is in a fail state, either a value couldn't
        // be converted, or we are at the end of the file.

        //print whatever we read

}

//function for us to play around with cin
void playground(){
    readNumbers();
    cout << "========================" << endl;
    readHaikuWord();
    cout << "========================" << endl;
    readHaikuLine();

}

int main() {

    playground();

    return 0;
}


