// system
#include <iostream>
#include <algorithm>
#include "simple_fraction.h"

using std::cout;    using std::endl;
using std::to_string;

// constructor to initialize Fraction
Fraction::Fraction (int num, int denom) {
    this->num = num;
    this->denom = denom;
    reduce();
}

void Fraction::reduce() {
    int gcd = std::__gcd(num, denom);
    num /= gcd;
    denom /= gcd;
}

bool Fraction::operator< (const Fraction& rhs) const{
    return rhs.denom * this->num < this->denom * rhs.num;
}

bool Fraction::operator> (const Fraction& rhs) const{
    return rhs.denom * num > denom * rhs.num;
}

Fraction Fraction::operator- (const Fraction& rhs) const{
    int Newnum = num  * rhs.denom - denom * rhs.num;
    int Newdenum = denom * rhs.denom;
    return Fraction(Newnum, Newdenum);
}


int main() {

    // creating a few fractions:
    Fraction half(1, 2);
    Fraction third(1, 3);
    Fraction weird(1.5, 3.141);

    // testing out operations:
    bool lessThan = half < third;
    bool greaterThan = half > third;
    cout << "half is less than third: " << lessThan << endl;
    cout << "half is greater than third: " << greaterThan << endl;

    Fraction difference = half - weird;
    // how do we print this out?
    // cout << "difference of half - weird: " << difference << endl;
    return 0;
}

