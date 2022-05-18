// ********************************************************************** //
//                                                                        //
//             Bureaucrat.hpp                                             //
//             Created: 2022/05/17 18:43:59 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP
#include <string>

class Bureaucrat {
private:
    const std::string _name;
    int _grade;

    Bureaucrat();

public:
    Bureaucrat(std::string const &name, int grade);

    Bureaucrat(Bureaucrat const &other);

    Bureaucrat &operator=(Bureaucrat const &src);

    ~Bureaucrat();

    std::string getName() const;

    int getGrade() const;

    void incrementGrade(int amount);

    void decrementGrade(int amount);

    class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif //EX00_BUREAUCRAT_HPP
