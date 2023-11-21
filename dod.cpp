#include "dod.h"
#include "var.h" 
using namespace nsVar;

void nsDod::A() {
	R = -x * x / (2 * n - 1) / (2 * n);
	a *= R;
}