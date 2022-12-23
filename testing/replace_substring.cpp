#include <iostream>
#include <string>

int string_inside(std::string haystack, std::string needle)
{
	int haystack_ctr = 0;
	int needle_ctr = 0;
	while (haystack[haystack_ctr])
	{
		needle_ctr = 0;
		while (haystack[haystack_ctr + needle_ctr] == needle[needle_ctr])
		{
			if (needle_ctr == needle.length() - 1)
				return haystack_ctr;
			needle_ctr++;
		}
		haystack_ctr++;
	}
	return -1;
}

std::string replace_str(std::string src, std::string s1, std::string s2)
{
	int position = 0;
	int s1_len = s1.length();
	int s2_len = s2.length();
	int	new_str_ctr = 0;
	std::string new_string;
	while (string_inside(src, s1) != -1)
	{
		new_str_ctr = 0;
		position = string_inside(src, s1);
		while (new_str_ctr < position)
		{
			new_string.push_back(src[new_str_ctr]);
			new_str_ctr++;
		}
		int i = 0;
		while (i < s2_len)
		{
			new_string.push_back(s2[i]);
			i++;
		}
		new_str_ctr = new_str_ctr + i;
		i = 0;
		int j = new_str_ctr - 1;
		while (src[j + i])
		{
			new_string.push_back(src[j + i]);
			i++;
		}
		std::cout << "cock \n";
	}
	return new_string;
}

int main(){
	std::cout << replace_str("wagwan my g my", "my", "thy");
}