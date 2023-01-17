#include "Replacewurd.h"

int main(int argc, char **argv){
	if (argc != 4)
	{
		std::cout << "not enough parameters" << std::endl;
		exit(1);
	}

	Replacewurd *rep = new Replacewurd();

	std::ifstream readFile;
	std::ofstream writeFile;

	std::string contents = rep->Openfile(argv[1], argv[2], argv[3]);
	rep->myDestFile << contents;

	return 0;
}
