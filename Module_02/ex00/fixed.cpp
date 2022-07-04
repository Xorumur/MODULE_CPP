#include "fixed.hpp"

// =============================
// ======== CONSTRUCTORS =======
// =============================

fixed::fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->stock = 0;
}

fixed::fixed( fixed const & rhs )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

// =============================
// ======== DESTRUCTOR =========
// =============================

fixed::~fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

// ==============================
// ==== ASSIGNATION OPERATOR ====
// ==============================

fixed&	fixed::operator=( fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	this->stock = rhs.getRawBits();
	return (*this);
}

// =============================
// ==== SET / GET FUNCTIONS ====
// =============================

void	fixed::setRawBits( int const raw )
{
	this->stock = raw;
}

int	fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->stock);
}