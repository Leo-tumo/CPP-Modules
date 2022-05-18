// ********************************************************************** //
//                                                                        //
//             ShrubberyCreationForm.cpp                                  //
//             Created: 2022/05/17 23:50:07 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
        : Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src){
    this->Form::operator=(src);
    return (*this);
}

std::string ShrubberyCreationForm::getTarget() const {
    return _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): Form(src) {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if (this->getSign() && executor.getGrade() <= this->getExecGrade()) {
        std::fstream f;
        f.open(getTarget() + "_shrubbery", std::ios::in | std::ios::out | std::ios::trunc);
        if (f.is_open()) {
            std::string tree = "                       .\n"
                               "                       M\n"
                               "                      dM\n"
                               "                      MMr\n"
                               "                     4MMML                  .\n"
                               "                     MMMMM.                xf\n"
                               "     .              \"MMMMM               .MM-\n"
                               "      Mh..          +MMMMMM            .MMMM\n"
                               "      .MMM.         .MMMMML.          MMMMMh\n"
                               "       )MMMh.        MMMMMM         MMMMMMM\n"
                               "        3MMMMx.     'MMMMMMf      xnMMMMMM\"\n"
                               "        '*MMMMM      MMMMMM.     nMMMMMMP\"\n"
                               "          *MMMMMx    \"MMMMM\\    .MMMMMMM=\n"
                               "           *MMMMMh   \"MMMMM\"   JMMMMMMP\n"
                               "             MMMMMM   3MMMM.  dMMMMMM            .\n"
                               "              MMMMMM  \"MMMM  .MMMMM(        .nnMP\"\n"
                               "  =..          *MMMMx  MMM\"  dMMMM\"    .nnMMMMM*\n"
                               "    \"MMn...     'MMMMr 'MM   MMM\"   .nMMMMMMM*\"\n"
                               "     \"4MMMMnn..   *MMM  MM  MMP\"  .dMMMMMMM\"\"\n"
                               "       ^MMMMMMMMx.  *ML \"M .M*  .MMMMMM**\n"
                               "          *PMMMMMMhn. *x > M  .MMMM**\"\"\n"
                               "             \"\"**MMMMhx/.h/ .=*\"\n"
                               "                      .3P\"%....\n"
                               "                    nP\"     \"*MMnx";
            f.write(tree.c_str(), tree.length());
            f.close();
        } else
            std::cout << "Cannot open the file: " << getName() + "_shrubbery" << std::endl;
    } else
        throw GradeTooLowException();
}