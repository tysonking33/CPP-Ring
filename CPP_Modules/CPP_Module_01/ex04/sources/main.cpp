#include "../includes/Replacewurd.h"

int main(int argc, char **argv){
	if (argc != 4)
	{
		std::cout << "not enough parameters" << std::endl;
		exit(1);
	}

	Replacewurd *rep = new Replacewurd();

	std::ifstream readFile;
	std::string fileName, s1, s2;
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ofstream writeFile(fileName + ".replace");
	std::string contents = rep->Openfile(fileName, s1, s2);
	writeFile << contents;

	return 0;
}
