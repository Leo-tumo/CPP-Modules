// ********************************************************************** //
//                                                                        //
//             Form.hpp                                                   //
//             Created: 2022/05/17 23:31:17 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP
#include "Bureaucrat.hpp"
#include <exception>

class Bureaucrat;

class Form
{
private:
    const std::string   _name;
    bool                _sign;
    const int           _signGrade;
    const int           _exGrade;
    Form();

public:
    Form(std::string const &name, int signGrade, int exGrade);
    Form(Form const &src);
    Form &operator=(Form const &src);
    ~Form();

    std::string getName() const;
    bool getSign() const;
    int getSignGrade() const;
    int getExecGrade() const;

    void beSigned(Bureaucrat const &bureaucrat);

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, Form const &form);

#endif //EX01_FORM_HPP
