#include <iostream>
#include "ClassTest.h"

void  ClassTest::show(){
	cout << "name is " << m_name << " and age is " << m_age << endl;
}

ClassTest::ClassTest(const string & name, int age){
	m_name = name;
	m_age = age;
}

ClassTest::~ClassTest(){
	cout << "~ClassTest";
}
