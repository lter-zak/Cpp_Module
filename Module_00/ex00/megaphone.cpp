#include <iostream>   

int main(int nb, char **str)
{
	if (nb <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
	for (int i = 1; i < nb; i++)
	{
		std::string s = str[i]; 
		std::transform(s.begin(), s.end(), s.begin(), ::toupper);
		//std::transform(str[1], ::strlen(str[1]), str, ::toupper);
		std::cout<<s<<std::endl;
	}
}