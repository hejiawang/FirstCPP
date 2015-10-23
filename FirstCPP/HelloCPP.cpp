#include <iostream>
#include <string>
#include <fstream>
using namespace std;
/*
	函数原型(函数声明),函数原型描述了函数的接口。
	C++规定可以先说明函数原型，然后就可以调用函数。函数定义可放在程序后面。
	在本例中，如果Simon函数声明在main之前，就不用函数声明了。
	*/
void simon(int);
void stringAndArray();
void stringType();
void myInflatable();
void pointer();
void cin1();
void fileTest();
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
unsigned int c_int_str(const char * str, char ch);
char * builderStr(char c, int n);
double betsy(int lns);
double pam(int lns);
void estimate(int lines, double(*pf)(int));
void valueTransmit(int value);
void quoteTransmit(int & value);
void pointerTransmit(int * value);
void stove(double && i);

extern void printTest();	//声明外部函数

//结构
struct inflatable{
	string name;
	float volume;
	double price;
};

int mainMAIN(){

	cout << "my first C++ project";
	cout << endl;	//另起一行
	cout << "hello C++" << endl;

	//int b;
	//cin >> b;	//将控制台输入的值赋给b
	//simon(b);	//自定义函数

	//stringAndArray();
	//stringType();
	//myInflatable();//结构
	//pointer();//指针
	//cin1();//使用原始的cin进行输入
	//fileTest();//从控制台输入的信息记录到文件中

	//const int max = 5;
	//double propertise[max];
	//int size = fill_array(propertise, max);
	//show_array(propertise, max);

	//char mmm[15] = "minminmin";
	//unsigned int m = c_int_str(mmm, 'm');
	//cout << "m : " << m << endl;
	//char * nnn = "minminminminmin";
	//unsigned int n = c_int_str(nnn, 'n');
	//cout << "n : " << n << endl;

	//char * str = builderStr('a', 5);
	//cout << str << endl;

	//int code;
	//cout << " How many lines of code do you nead? ";
	//cin >> code;
	//cout << "Here`s Betsy`s estimate:\n";
	//estimate(code, betsy);
	//cout << "Here`s Pam`s estimate:\n";
	//estimate(code, pam);

	//int i = 123;
	//cout << " i is " << i << endl;
	////valueTransmit(i);
	////quoteTransmit(i);
	//pointerTransmit(&i);
	//cout << " i is " << i << endl;
	printTest();
	

	cin.get();
	cin.get();
	return 0;
}

void simon(int b){

	cout << "a int num is " << b << endl;
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

void stringType(){

	char char1[20];
	char char2[20] = "nihaoChar";

	string str1;
	string str2 = "nihaoString";

	//char1 = char2; err..
	str1 = str2;
	cout << str1 << endl;

	string str3 = str1 + str2;
	cout << str3 << endl;

	cout << str3.size();
}

void myInflatable(){

	inflatable myInflatable1 = {
		"name is haha",
		0.290,
		12.45
	};
	inflatable myInflatable2 = myInflatable1;

	cout << "myInflatable1 name is " << myInflatable1.name << endl;
	cout << "myInflatable2 volume is " << myInflatable2.volume << endl;
}

void pointer(){

	int updates = 6;
	int * p_updates;
	p_updates = &updates;

	cout << "Values : updates = " << updates;
	cout << " , *p_updates = " << *p_updates << endl;

	cout << "Addresses : updates = " << &updates;
	cout << " , p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
}

void cin1(){

	char ch;
	int count = 0;
	cout << "Enter characters; enter # to-quit:\n";
	cin >> ch;	//不能识别出空格、换行
	cin.get(ch);	//能够识别出空格、换行
	//while ( ch != '#' ) {
	/*while (cin.fail() == false){	//检测文件尾，在win7中，要按Ctrl+z，然后Enter。
		cout << ch;
		++count;
		//cin >> ch;	//读取下一个字符
		cin.get(ch);	//读取下一个字符
		}*/
	while (cin.get(ch)){
		cout << ch;
		++count;
	}
	cout << endl << count << " characters read \n";
}

void fileTest(){

	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;
	outFile.open("E:\\test.txt");

	cout << " Enter the make and model of automonile: ";
	cin.getline(automobile, 50);
	cout << " Enter the model year: ";
	cin >> year;
	cout << " Entry the original asking price: ";
	cin >> a_price;
	d_price = 0.913 * a_price;

	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << " Make and model:" << automobile << endl;
	cout << " Year: " << year << endl;
	cout << " Was asking $ " << a_price;
	cout << " Now asking $ " << d_price;

	//输入到文件中
	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << " Make and model:" << automobile << endl;
	outFile << " Year: " << year << endl;
	outFile << " Was asking $ " << a_price;
	outFile << " Now asking $ " << d_price;
	outFile.close();
}

int fill_array(double ar[], int limit){

	//int fill_array( const double ar[], int limit ){//const修饰常亮数据，意味着，不能修改ar
	double temp;
	int i;
	for (i = 0; i < limit; i++) {

		cout << " Enter value # " << (i + 1) << ": ";
		cin >> temp;
		if (!cin){	//输入的不合法

			cin.clear();//清除输入的内容
			while (cin.get() != '\n'){

				continue;
			}
			cout << " Bad input; input process terminated. \n ";
			break;
		}
		else if (temp < 0){

			break;
		}
		ar[i] = temp;
	}
	return i;
}

void show_array(const double ar[], int n){ //显示数组内容

	for (int i = 0; i < n; i++){

		cout << " Property # " << (i + 1) << " :$ ";
		cout << ar[i] << endl;
	}
}

unsigned int c_int_str(const char * str, char ch){//比较在指定字符串str中，有几个字符与ch相同
	//unsigned int c_int_str(const char str[], char ch){
	unsigned int count = 0;
	while (*str){

		if (*str == ch) {

			count++;
		}
		str++;
	}
	return count;
}

char * builderStr(char c, int n){ //返回一个字符串

	char * pStr = new char[n + 1];//*****
	while (n-- > 0) { //*****

		pStr[n] = c;
	}
	return pStr;
}

double betsy(int lns){
	return 0.05*lns;
}

double pam(int lns){
	return lns*lns;
}

void estimate(int lines, double(*pf)(int)){

	cout << lines << " lines will take ";
	cout << (*pf)(lines) << " hours";
}

void valueTransmit(int value){ //传递值的普通函数,不能修改原值

	value = 100;
	cout << "value transmit value is " << value << endl;
}

void quoteTransmit(int & value){  //传递引用的函数,能修改原值

	value = 100;
	cout << "quote transmit value is " << value << endl;
}

void pointerTransmit(int * value){ //传递引用的函数,能修改原值

	*value = 100;
	cout << "pointer transmit value is " << *value << endl;
}
