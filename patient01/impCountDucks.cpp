// myProg01.cpp 
// Author: Xingbu Qin
// Simple that counts down from n to 1

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }

	ifstream animalsFile(argv[1]);
	
	if(!animalsFile)
	{
		cerr << "File DNE";
		exit(0);
	}

	int duckCounter = 0;
	string line = "";
	
	getline(animalsFile,line);
	
	while(animalsFile)
	{
		if(line == "duck")
		{
			duckCounter++;
		}

		getline(animalsFile,line);
	}

	cout << "There were " << duckCounter << " ducks in " << argv[1] << endl;

  return 0;
}
