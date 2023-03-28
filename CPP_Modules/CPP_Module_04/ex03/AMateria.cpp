#include "AMateria.h"

AMateria::AMateria(std::string const & type){
	materialType = type;
}

std::string const & AMaterial::getType() const;

AMateria::AMateria* clone() const = 0;

void AMateria::use(ICharacter& target);
