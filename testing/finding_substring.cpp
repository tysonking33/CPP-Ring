#include <iostream>
#include <string>

bool is_present_substr(std::string haystack, std::string needle)
{
	int haystack_ctr = 0;
	int needle_ctr = 0;
	while (haystack[haystack_ctr])
	{
		needle_ctr = 0;
		while (haystack[haystack_ctr + needle_ctr] == needle[needle_ctr])
		{
			if (needle_ctr == needle.length() - 1)
				return true;
			needle_ctr++;
		}
		haystack_ctr++;
	}
	return false;
}

int main()
{
    std::string haystack = "hey nice cock\n";
 	std::string	needle = " ";
	std::cout << is_present_substr(haystack, needle) << std::endl;
	return 0;
}