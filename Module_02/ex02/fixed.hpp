#ifndef fixed_HPP
# define fixed_HPP

# include <iostream>
# include <cmath>

class fixed
{
	private:
			int					stock;
			static const int	virgule = 8;
	public:
			fixed( void );
			fixed( fixed const & rhs );
			fixed(const float c);
			fixed(const int c);
			~fixed(void);

			fixed&	operator=(fixed const & rhs);
			fixed	operator+( fixed const & rhs );
			fixed	operator-( fixed const & rhs );
			fixed	operator*( fixed const & rhs );
			fixed	operator/(fixed const & rhs);

			bool	operator>( const fixed & rhs );
			bool	operator<( const fixed & rhs );
			bool	operator<=( const fixed & rhs );
			bool	operator>=( const fixed & rhs );
			bool	operator==( const fixed & rhs );
			bool	operator!=( fixed const & rhs );

			fixed&	operator++( void );
			fixed	operator++( int );

			fixed&	operator--( void );
			fixed	operator--( int );


			static 	fixed	max( fixed & lhs, fixed & rhs );
			static 	fixed	max( const fixed & lhs, const fixed & rhs );
			static 	fixed	min( fixed & lhs, fixed & rhs );
			static 	fixed	min( const fixed & lhs, const fixed & rhs );
			float	toFloat(void) const;
			int		toInt(void) const;
			int		getRawBits( void ) const;
			void	setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& ifs, fixed const & ope );

#endif