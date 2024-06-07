#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream Myfile("C:\\Users\\DEFENDER\\Desktop\\cpp");
	Myfile << "hello";
	Myfile.close();
}
