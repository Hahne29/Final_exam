#include <string>
#include <iostream>
#include <fstream>

//you don't make it very clear if the parameter in the functions is the filename or it's what we are actually supposed to count

using namespace std;
void countChar(char const* pName);///function that counts characters in array of chars
void countLine(char const* pName);///fucntion that counts lines in array of chars

int main(int argc, char* argv[]){
	
	ifstream in_stream;
	in_stream.open(*argv);
	char ch[101];
	int i = 0;
	while(!in_stream.eof() && (i < 100)){///reading file
		in_stream >> ch[i];
		i++;
	}
	ch[i] = '\0';
	countChar(ch);///calling functions
	countLine(ch);
	return 0;
}

void countChar(char const* pName){
	string def = "Ohio University";
	if(pName[0] == '\0'){
		pName = def.c_str();
	}
	int i = 0;
	int count = 0;
	while((i < 100) && (pName[i] != '\0')){
		count++;
		i++;
	}
	cout << count << " characters" << endl;
	return;
}

void countLine(char const* pName){
	string def = "Athens";
	if(pName[0] == '\0'){
		pName = def.c_str();
	}
	int i = 0;
	
	int count = 0;
	while((i < 100) && (pName[i] != '\0')){
		if(pName[i] == '\n'){
			count++;
		}
		i++;
	}
	cout << count << " lines" << endl;
	return;
}
