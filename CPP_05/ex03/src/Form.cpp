// ********************************************************************** //
//                                                                        //
//             Form.cpp                                                   //
//             Created: 2022/05/17 23:30:57 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/Form.hpp"
#include <iostream>

Form::Form(): _name("Unknown"), _sign(false), _signGrade(1), _exGrade(1) {}

Form::Form(std::string const& name, int signGrade, int exGrade) : _name(name),
    _signGrade(signGrade), _exGrade(exGrade) {
    {
        if (signGrade < 0 || exGrade < 0)
            throw Form::GradeTooHighException();
        if ( signGrade > 150 || exGrade > 150)
            throw Form::GradeTooLowException();
        this->_sign = false;
    }
}

Form::Form(Form const &src) : _name(src.getName()), _sign(src._sign), _signGrade(src.getSignGrade()),
    _exGrade(src.getExecGrade()) {}

Form &Form::operator=(Form const &src){
    this->_sign = src._sign;
    return (*this);
}

Form::~Form(){}

void Form::beSigned(Bureaucrat const &bureaucrat){
    if (bureaucrat.getGrade() > this->_exGrade)
        throw Form::GradeTooLowException();
    this->_sign = true;
}

std::string Form::getName() const{
    return (this->_name);
}

bool Form::getSign() const{
    return (this->_sign);
}

int Form::getSignGrade() const{
    return (this->_signGrade);
}

int Form::getExecGrade() const{
    return (this->_exGrade);
}

std::ostream& operator<<(std::ostream& os, Form const& form){
    os << form.getName() << " sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade() << ", status:";
    if (form.getSign())
        os << " signed!";
    else
        os << " unsigned!";
    return (os);
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Grade is too low ⬇️⬇️");
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high ⬆️⬆️");
}
