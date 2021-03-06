#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define DEBUG(x) //x

class Test {
	string name;
	public:
	string getName() {
		return name;
	}
	Test(string newName) {
		name=newName;
	}
	static void check(Test *test) {
		cout << "!!!" << test->name << "!!!" <<endl;
		if (test->checker()) cout <<  " Passed"<< endl;
		else cerr <<  " Failed" << endl;
	}
	virtual bool checker()=0;
};

extern vector<Test *> tests;

void runTests();

