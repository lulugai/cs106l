//in case mutliple files in a project include strvector, 
//this instruction says only compile this file once!
#ifndef STRVECTOR_H
#define STRVECTOR_H

#include <string>
#include <algorithm>

class StrVector {
    public:
        //type alias (this is how iterator types work!)
        using iterator = std::string*;
        //define an initial size for your underlying array
        const size_t kInitialSize = 2;
        StrVector();
        StrVector(size_t n, const std::string& val);
        ~StrVector();

        size_t size() const;
        bool empty() const;

        std::string& operator[](size_t index);
        const std::string& operator[](size_t index) const;
        std::string& at(size_t index);

        iterator insert(iterator pos, const std::string& elem);
        void push_back(const std::string& elem);

        iterator begin();
        iterator end();

        //constructors and destructor


        //public interface: What can users of vectors do with the vector?


        //we will learn how to define operators soon, for now lets make
        //at(index) instead of [index]


        //dont forget about accessing iterators!

    private:
        //all member variables should go here!
        void grow();
        std::string* elems;
        size_t logicalSize;
        size_t allocatedSize;
        //Any private helper functions we might need?

};





#endif // STRVECTOR_H


