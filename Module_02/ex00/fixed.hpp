#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class fixed
{
	private:
			int					stock;
			static const int	virgule = 8;
	public:
			fixed( void );
			fixed( fixed const & rhs );
			~fixed( void );

			fixed&	operator=(fixed const & rhs);

			int		getRawBits( void ) const;
			void	setRawBits( int const raw );
};

#endif