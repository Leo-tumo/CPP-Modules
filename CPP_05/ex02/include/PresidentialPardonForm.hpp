// ********************************************************************** //
//                                                                        //
//             PresidentialPardonForm.hpp                                 //
//             Created: 2022/05/17 23:50:56 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm: public Form
{
private:
    std::string     _target;
    PresidentialPardonForm();
public:
    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &other);

    std::string getTarget() const;
    void execute(const Bureaucrat &executor) const;

    ~PresidentialPardonForm();
};
#endif //EX02_PRESIDENTIALPARDONFORM_HPP
