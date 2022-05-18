// ********************************************************************** //
//                                                                        //
//             main.cpp                                                   //
//             Created: 2022/05/15 12:27:06 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"

int main() {


	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Rob");
	Bureaucrat graf("Graf", 5);
	rrf->beSigned(graf);
	rrf->execute(graf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("shrubbery creation", "fazenda");
	rrf->beSigned(graf);
	rrf->execute(graf);
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("presidential pardon", "Ford");
	rrf->beSigned(graf);
	rrf->execute(graf);
	graf.executeForm(*rrf);

	std::cout << std::endl;

	try {
		rrf = someRandomIntern.makeForm("escaping armenia", "myself");
		rrf->beSigned(graf);
		graf.executeForm(*rrf);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	delete rrf;
	return 0;
}
