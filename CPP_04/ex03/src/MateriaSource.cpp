// ********************************************************************** //
//                                                                        //
//             MateriaSource.cpp                                          //
//             Created: 2022/05/15 12:25:44 by leo                        //
//             Made by: leo <leonidas.xaralambos@gmail.com>               //
//                                                                        //
// ********************************************************************** //

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource(){
	this->_size = 0;
	this->_sources = new AMateria*[4];
	for (size_t i = 0; i < 4; i++)
		this->_sources[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src ) { *this = src; }

MateriaSource::~MateriaSource(){
	for (int i = 0; i < this->_size; i++)
		delete this->_sources[i];
	delete this->_sources;
}

MateriaSource & MateriaSource::operator=( const MateriaSource &rhs ){
	if (this == &rhs)
		return (*this);
	if (this->_sources == NULL)
		delete [] this->_sources;
	this->_sources = new AMateria*[4];
	for (size_t i = 0; i < 4; i++){
		if (rhs._sources[i])
			this->_sources[i] = rhs._sources[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m){
	if (this->_size  == 4 || m == nullptr)
		return ;
	for (int i = 0; i < this->_size; i++)
		if (this->_sources[i] == m)
			return ;
	this->_sources[this->_size++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type){
	for (int i = 0; i < this->_size; i++)
		if (this->_sources[i]->getType() == type)
			return (this->_sources[i]->clone());
	return (nullptr);
}
