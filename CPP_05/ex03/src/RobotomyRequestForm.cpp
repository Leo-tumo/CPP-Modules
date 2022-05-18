// ********************************************************************** //
//                                                                        //
//             RobotomyRequestForm.cpp                                    //
//             Created: 2022/05/17 23:49:50 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
        : Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &src){
    this->Form::operator=(src);
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const {
    return _target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): Form(src) {}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (this->getSign() && executor.getGrade() <= this->getExecGrade()) {
        std::srand(time(nullptr));
        int randi = std::rand() % 2;
        if (randi)
            std::cout << this->getTarget() << " has been robotomized successfully !" << std::endl;
        else
            std::cout << "Robotomy failed !" << std::endl;
    } else
        throw GradeTooLowException();
}