#include "Harl.h"

void Harl::debug( void ){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n";
}
	
void Harl::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void Harl::warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error( void ){
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain( std::string level ){
	for (int i = 0; i < 4; i++){
		if (levelArr[i].level == level)
			(this->*levelArr[i].ptr)();
	}
}

Harl::Harl(){
	levelArr[0].level = "debug";
	levelArr[0].ptr = &Harl::debug;
	levelArr[1].level = "info";
	levelArr[1].ptr = &Harl::info;
	levelArr[2].level = "warning";
	levelArr[2].ptr = &Harl::warning;
	levelArr[3].level = "error";
	levelArr[3].ptr = &Harl::error;

}
