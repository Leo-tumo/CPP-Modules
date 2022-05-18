// ********************************************************************** //
//                                                                        //
//             PresidentialPardonForm.cpp                                 //
//             Created: 2022/05/17 23:50:16 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
        : Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &src){
    this->Form::operator=(src);
    return (*this);
}

std::string PresidentialPardonForm::getTarget() const { return _target; }

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): Form(src) {}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if(this->getSign() && executor.getGrade() <= this->getExecGrade())
        std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
    else
        throw GradeTooLowException();
}