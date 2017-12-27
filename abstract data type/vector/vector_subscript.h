#pragma once
#include"vector.h"
template <typename T> T& Vector<T>::operator[](Rank r)const {
	return _elem[r];
}