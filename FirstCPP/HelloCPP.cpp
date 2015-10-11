#include <iostream>
using namespace std;
/*
	函数原型(函数声明),函数原型描述了函数的接口。
	C++规定可以先说明函数原型，然后就可以调用函数。函数定义可放在程序后面。
	在本例中，如果Simon函数声明在main之前，就不用函数声明了。
*/
void simon(int);
void stringAndArray();

int main(){
	
	cout << "my first C++ project";
	cout << endl;	//另起一行
	cout << "hello C++" << endl;
	
	//int b;
	//cin >> b;	//将控制台输入的值赋给b
	//simon(b);	//自定义函数
	
	stringAndArray();
	
	cin.get();
	cin.get();
	return 0;
}

void simon(int b){
	
	cout << "a int num is " << b <<endl;
}

void stringAndArray(){
	
	const int Size = 15;
	char name1[Size] = "c++ array";
	cout << name1 << endl;
	cout << strlen(name1) << endl;
	cout << sizeof(name1) << endl;

	char name2[Size];
	cin.getline(name2, Size);
	cout << name2 << endl;
}