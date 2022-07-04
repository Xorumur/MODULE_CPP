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

fixed::fixed(const float c) {
	std::cout << "Float constructor called" << std::endl;
	this->stock = roundf(c * (1 << this->virgule));
}

fixed::fixed(const int c) {
	std::cout << "Int constructor called" << std::endl;
	this->stock = c << this->virgule;
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

fixed&	fixed::operator=(fixed const & ope)
{
	std::cout << "Assignation operator called" << std::endl;
	this->stock = ope.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream& ifs, fixed const & ope)
{
	std::cout << ope.toFloat();
	return (ifs);
}


// =============================
// ==== SET / GET FUNCTIONS ====
// =============================

float	fixed::toFloat(void) const 
{
	return (((double)this->stock / (double)(1 << this->virgule)));
}

int	fixed::toInt(void) const 
{
		return (this->stock >> this->virgule);
}

void	fixed::setRawBits( int const raw )
{
	this->stock = raw;
}

int	fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->stock);
}

