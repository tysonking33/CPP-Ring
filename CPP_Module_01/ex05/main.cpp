#include "Harl.h"

int main(){
	Harl *kar = new Harl();
	kar->complain("debug");
	kar->complain("info");
	kar->complain("warning");
	kar->complain("error");

	return 0;
}
