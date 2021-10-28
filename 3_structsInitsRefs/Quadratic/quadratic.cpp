#include <string>
#include <iostream>
#include <cmath> //gives us pow and sqrt!

using std::string; using std::cout;
using std::cin; using std::pow;
using std::sqrt; using std::endl;

std::pair<bool, std::pair<double, double>> quadratic(double a, double b, double c){
	//get radical, test if negative, return false if so
	double radical = pow(b, 2) - 4 * a * c;
	if(radical < 0){
		return {false, {-1, -1}};
	}
	//otherwise get roots and return
	else{
		double roots1 = (-b + sqrt(radical)) / (2*a);
		double roots2 = (-b - sqrt(radical)) / (2*a);
		return {true, {roots1, roots2}};
	}
}

int main(){
	//get 3 doubles (ax^2 + bx + c)
	double a, b, c;
	cout << "Input coefficents:" << endl;
	cin >> a >> b >> c;
	auto [exist, roots] = quadratic(a, b, c);
	//get roots if they exist
	if (exist) {
		auto [root1, root2] = roots;
		cout << "Soulutions are : " << root1 << " " << root2 << endl;
	} else {
		cout << "No exist soulutions" << endl;
	}
	
	//print accordingly
	return 0;
}