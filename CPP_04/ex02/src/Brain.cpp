// ********************************************************************** //
//                                                                        //
//             Brain.cpp                                                  //
//             Created: 2022/05/14 14:10:17 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Brain.hpp"

Brain::Brain()
{
	const std::string ideas[] = {
		"whiskey","tequila","vodka","gin","brandy","wine","champagne","beer","liquor",
		"vermouth","Xérès","rum","cocktail","Old Fashioned", "Old Fashioned", "Margarita", 
		"Moscow Mule", "Martini", "Mojito", "Whiskey Sour", "French 75","Manhattan",
		"Spritz", "Gimlet", " Sazerac", "Pim's Cup", "Boiler Room", "Lean", "Vesper",
		"Tom Collins", "Paloma", "Sidecar", "Sea Breeze", "Ramos Fizz", "Mint Julep", 
		"Daiquiri", "MArtinez", "Dark & Stormy", "Cosmopolitan", "Negroni"
	};

	std::cout << "Constructor Brain 🧠";
	for (int i = 0; i < 100; ++i){
		this->ideas[i] = ideas[rand() % (sizeof(ideas) / sizeof(std::string))];
	}
	std::cout << std::endl;
}

Brain::Brain(Brain const &other){
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = other.getIdea(i);
}

Brain &Brain::operator=(Brain const &other){
	if (this != &other)
	{
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = other.getIdea(i);
	}
	return *this;
}

Brain::~Brain(){
	std::cout << "Destructor Brain 🧠";
	std::cout << std::endl;
}

std::string const &Brain::getIdea(int index) const{
	return this->ideas[index];
}

std::ostream &operator<<(std::ostream &out, const Brain &brain) {
	out << "< ";
	for(int i = 0; i < 100; ++i) {
		out << brain.getIdea(i) << ", ";
	}
	out << ">" << std::endl;
	return out;
}
