#include "Replacewurd.h"

int main(){
	std::string contents = getfile(filein);
	find_and_replace(contents, "morning", "night");
	fileout << contents;
}
