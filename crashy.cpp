#define __STRICT_ANSI__
#define BOOST_HAS_INT128
#define BOOST_MP_HAS_IMMINTRIN_H

#include <boost/multiprecision/cpp_int.hpp>

typedef boost::multiprecision::number<boost::multiprecision::cpp_int_backend<256, 256, boost::multiprecision::unsigned_magnitude, boost::multiprecision::unchecked, void> > NTYPE;

int main()
{
	NTYPE sv = 267386880;
	sv >>= 1; // Step into this. Then step into the range check. Then display assembly
}
