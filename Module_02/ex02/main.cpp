#include "fixed.hpp"

int	main( void )
{
	fixed a;
	fixed b(300);
	fixed c(42.42f);
	fixed d(b);

	a = fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << "======= arithmetic operator ========" << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "b * d = " << b << " * " << d << " = " << (b * d) << std::endl;
	std::cout << "a / b = " << a << " / " << b << " = " << a / b << std::endl;

	std::cout << "======= Diff operators ========" << std::endl;
	std::cout << "a > b = " << (a > b) << std::endl;
	std::cout << "a < b = " << (a < b) << std::endl;
	std::cout << "a >= b = " << (a >= b) << std::endl;
	// a = b;
	std::cout << "a <= b = " << (a <= b) << std::endl;
	std::cout << "a != b = " << (a != b) << std::endl;
	std::cout << "a == b = " << (a == b) << std::endl;

	std::cout << "======= pre/post increment =======" << std::endl;
	fixed y;
	fixed const z(fixed(5.05f) * fixed(2));

	std::cout << "y \t" << y << std::endl;
	std::cout << "++y \t" << ++y << std::endl;
	std::cout << "y \t" << y << std::endl;
	std::cout << "y++ \t" << y++ << std::endl;
	std::cout << "y \t" << y << std::endl;
	std::cout << "z \t" << z << std::endl;
	std::cout << "max(" << y << ", " << z << ") = " << fixed::max(y, z) << std::endl;
	std::cout << "min(" << y << ", " << z << ") = " << fixed::min(y, z) << std::endl;
	
	std::cout << "======= pre/post decrement =======" << std::endl;
	fixed w;
	fixed const x(fixed(5.05f) * fixed(2));

	std::cout << "w \t" << w << std::endl;
	std::cout << "++w \t" << --w << std::endl;
	std::cout << "w \t" << w << std::endl;
	std::cout << "w++ \t" << w-- << std::endl;
	std::cout << "w \t" << w << std::endl;
	std::cout << "x \t" << x << std::endl;
	std::cout << "max(" << w << ", " << x << ") = " << fixed::max(w, x) << std::endl;
	std::cout << "min(" << w << ", " << x << ") = " << fixed::min(w, x) << std::endl;
	return (0);
}