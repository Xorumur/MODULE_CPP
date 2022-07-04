#include "fixed.hpp"

fixed&	fixed::operator=( fixed const & ope )
{
	// std::cout << "Assignation operator called" << std::endl;
	this->stock = ope.getRawBits();
	return (*this);
}

// =================================
// ==== INCREMENTATION OPERATOR ====
// =================================

fixed&	fixed::operator++( void )
{
	this->stock++;
	return (*this);
}

fixed	fixed::operator++( int )
{
	fixed temp(*this);

	operator++();
	return (temp);
}
// =================================
// ==== DECREMENTATION OPERATOR ====
// =================================

fixed&	fixed::operator--( void )
{
	this->stock--;
	return (*this);
}

fixed	fixed::operator--( int )
{
	fixed temp(*this);

	operator--();
	return (temp);
}

// =============================
// ======= DIFF OPERATOR =======
// =============================

bool	fixed::operator>( const fixed& ope )
{
	return (this->getRawBits() > ope.getRawBits());
}

bool	fixed::operator<( const fixed& ope )
{
	return (this->getRawBits() < ope.getRawBits());
}

bool	fixed::operator<=( const fixed& ope )
{
	return !(ope.getRawBits() > this->getRawBits());
}

bool	fixed::operator>=( const fixed& ope )
{
	return !(ope.getRawBits() < this->getRawBits());
}

bool	fixed::operator==( fixed const & ope )
{
	return (this->getRawBits() == ope.getRawBits());
}

bool	fixed::operator!=( fixed const & ope )
{
	return (this->getRawBits() != ope.getRawBits());
}

// =============================
// ==== ARITHMETIC OPERATOR ====
// =============================

fixed	fixed::operator+( fixed const & ope )
{
	fixed temp(*this);

	temp.setRawBits(this->getRawBits() + ope.getRawBits());
	return (temp);
}

fixed	fixed::operator-( fixed const & ope )
{
	fixed temp(*this);

	temp.setRawBits(this->getRawBits() - ope.getRawBits());
	return (temp);
}

fixed	fixed::operator*( fixed const & ope )
{
	fixed	temp(*this);

	// std::cout << (this->getRawBits() >> 8) << " * " << (ope.getRawBits()) << std::endl;
	temp.setRawBits((this->getRawBits() >> temp.virgule ) * ope.getRawBits());

	return (temp);
}

fixed	fixed::operator/( fixed const & ope )
{
	fixed	temp(*this);

	// std::cout << (this->getRawBits() << 8 ) << " / " << (ope.getRawBits()) << std::endl;
	temp.setRawBits((this->getRawBits() << temp.virgule) / ope.getRawBits());
	return (temp);
}