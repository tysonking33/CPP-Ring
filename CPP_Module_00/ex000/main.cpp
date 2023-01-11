#include "Megaphone.h"

int main(int argc, char **argv)
{
	std::string final_str;
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else{
		Megaphone *M = new Megaphone();
		final_str = final_str + M->amplify(argv[1]);
		for(int i = 2; i < argc; i++){
			final_str = final_str + " " +  M->amplify(argv[i]);
		}
		std::cout << final_str << std::endl;
	}
	return 0;
}
