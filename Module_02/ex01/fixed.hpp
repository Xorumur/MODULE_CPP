#ifndef FIXED_HPP
# define FIXED_HPP

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

			float	toFloat(void) const;
			int		toInt(void) const;
			int		getRawBits( void ) const;
			void	setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& ifs, fixed const & ope );

#endif