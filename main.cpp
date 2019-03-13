#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

void junk(istream & inputFile, ostream & outputFile){
	string fName, lName;
	int strangeCharsCounter = 0;
	char next;
	while(inputFile.get(next)){
		if(next == '#'){
			if(inputFile.peek() == 'N'){
				inputFile.ignore();
				if(inputFile.peek() == '#'){
					inputFile.ignore();
					++strangeCharsCounter;
					if (strangeCharsCounter == 1){
						cout << "Enter the first name: ";
						cin >> fName;
						cout << "Enter the last name: ";
						cin >> lName;
					};
					outputFile << fName << " " << lName;continue;
					
				};
			if(inputFile){outputFile << '#' << 'N'; continue;};
			
				};
			if(inputFile){outputFile << '#'; continue;};
		};
		outputFile << next;
		
	};
	
};

int main(){
	string fileName;
	cout << "Hi, Enter the junk mail file name: ";
	cin >> fileName;
	fstream junkFile(fileName, ios::in);
	
	if(!junkFile) {cout << "I couldn't find the file in the current directory";
					exit(1);};
					
	junk(junkFile, editedJunkFile);
	
	junkFile.close();
	editedJunkFile.close();
	cout << "Done";
	return0;
}