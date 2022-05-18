// ********************************************************************** //
//                                                                        //
//             RobotomyRequestForm.hpp                                    //
//             Created: 2022/05/17 23:50:35 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include <string>
#include "Bureaucrat.hpp"

class RobotomyRequestForm: public Form
{
private:
    std::string     _target;
    RobotomyRequestForm();
public:
    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

    std::string getTarget() const;
    void execute(const Bureaucrat &executor) const;

    ~RobotomyRequestForm();
};

#endif //EX02_ROBOTOMYREQUESTFORM_HPP
