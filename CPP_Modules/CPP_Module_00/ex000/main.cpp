#include <string>
#include <iostream>

std::string amplify(char *src);

int main(int argc, char **argv)
{
	std::string final_str;
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else{
		final_str = amplify(argv[1]);
		std::cout << final_str << std::endl;
	}
	return 0;
}
