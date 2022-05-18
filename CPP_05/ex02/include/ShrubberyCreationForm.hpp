// ********************************************************************** //
//                                                                        //
//             ShrubberyCreationForm.hpp                                  //
//             Created: 2022/05/17 23:50:47 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
    std::string     _target;
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

    std::string getTarget() const;
    void execute(const Bureaucrat &executor) const;

    ~ShrubberyCreationForm();
};

#endif //EX02_SHRUBBERYCREATIONFORM_HPP
