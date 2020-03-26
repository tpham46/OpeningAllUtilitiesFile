#include <Windows.h>
#include <vector>
#include <iostream>
#include<unistd.h>


std::vector<std::string> GetFileNamesInDirectory(std::string directory) {
	std::vector<std::string> files;
	WIN32_FIND_DATA fileData;
	HANDLE hFind;

	if ( !((hFind = FindFirstFile(directory.c_str(), &fileData)) == INVALID_HANDLE_VALUE) ) {
		while(FindNextFile(hFind, &fileData)) {
			files.push_back(fileData.cFileName);
		}
	}

	FindClose(hFind);
	return files;
}

using namespace std;

int main() {
    string Dir = "C:\\Users\\pkimt\\Desktop\\All the Fun Program ShortCut\\";
	chdir(Dir.c_str());

	std::vector<std::string> vFileNames = GetFileNamesInDirectory("C:\\Users\\pkimt\\Desktop\\All the Fun Program ShortCut\\*");
	for (int i = 0; i < vFileNames.size(); i++) {
		std::cout << vFileNames[i] << std::endl;
	}

	cout << "Let's make decision! \n";
	for(int i = 0; i < vFileNames.size(); i++){
        cout << i << " " << vFileNames[i] << endl;
	}

	int decision;
	while(true){
        cout << "Chose: ";
        cin >> decision;
        cout << endl;
        string commandLine = "start " + vFileNames[decision];
        system(commandLine.c_str());
	}
    return 0;
}
