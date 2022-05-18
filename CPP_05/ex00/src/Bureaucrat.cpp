// ********************************************************************** //
//                                                                        //
//             Bureaucrat.cpp                                             //
//             Created: 2022/05/17 18:43:43 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include <string>
#include <iostream>
#include "../include/Bureaucrat.hpp"


Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const & name, int grade): _name(name){
   if(grade > 150)
       throw(Bureaucrat::GradeTooLowException());
   else if(grade < 1)
       throw(Bureaucrat::GradeTooHighException());
   else
       this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src._name), _grade(src._grade){}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & src){
    this->_grade = src._grade;
    return *this;
}
Bureaucrat::~Bureaucrat(){}

std::string Bureaucrat::getName() const {return(_name);}

int Bureaucrat::getGrade() const{return _grade;}

void Bureaucrat::incrementGrade(int amount){
    if(this->_grade - amount < 1)
        throw(GradeTooHighException());
    else
        _grade -= amount;
}

void Bureaucrat::decrementGrade(int amount){
    if(this->_grade + amount > 150)
        throw(GradeTooLowException());
    else
        _grade += amount;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is too low ⬇️⬇️");
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade is too high ⬆️⬆️");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return os;
}

