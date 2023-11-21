#include <math.h>
#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h" 

using namespace nsDod;
using namespace nsVar;

void nsSum::S()
{
	n = 0;
	a = 1;
	s = a;
	do {
		n++;
		A();
		s += a;
	} while (abs(a) >= eps);
}