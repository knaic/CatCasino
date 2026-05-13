#include "headings.h"

void Tax(USERSTRUCT& p) {
	p.Tax = 100 + (p.money * 0.05);
}