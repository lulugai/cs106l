// system and timing
#include <iostream>
#include <chrono>

// data structure imports
#include <deque>
#include <vector>
#include <iterator>
#include <utility> // pair

using std::cout;    using std::endl;

// count_occurrences
template <typename InputIt, typename DataType>
int count_occurrences(InputIt begin, InputIt end, DataType val){
    int count = 0;
    for(auto iter = begin; iter != end; ++iter){
        if(*iter == val) count++;
    }
    return count;
}

int main() {

    // vector of strings
    std::vector<std::string> lands = {"Xadia", "Drakewood", "Innean"};
    // how can we count the number of times "Xadia" appears in this?
    int count = count_occurrences(lands.begin(), lands.end(), "Xadia");
    cout << count <<endl;    
    // string itself (array of chars)
    std::string str = "Xadia";
    // how can we count the number of times 'a' appears in this?
    cout << count_occurrences(str.begin(), str.end(), 'a') << endl;
    return 0;
}

