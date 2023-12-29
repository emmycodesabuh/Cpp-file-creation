#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;
int main()
{
	char file [] = "hello world!!! I am a programmer";
	
	fstream myFile;
	myFile.open("text.txt", ios::out);
	myFile.write(file, sizeof(file));
	myFile.close();
	
	cout<<"written '"<<file<<"' to text.txt"<<endl;
	
	return 0;
}