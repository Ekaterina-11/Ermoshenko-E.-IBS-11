//#pragma once

#ifndef _SHOP_H_
#define _SHOP_H_

#include "Point.h"

class Shop : public Point {
public:
	//int i;
	//int j;

	Shop(int i, int j) {
		this->i = i;
		this->j = j;
	}
};

#endif // _SHOP_H_
