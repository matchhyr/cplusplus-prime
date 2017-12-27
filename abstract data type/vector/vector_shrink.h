#pragma once
#include"vector.h"
template <typename T> void Vector<T>::shrink() {//装填因子较小时压缩向量空间
	if (_capacity < DEFAULT_CAPACITY * 2) return;
	if (_size << 2 > _capacity) return; // 若小于25%，则缩容
	T* oldElem = _elem; _elem = new T[_capacity >>= 1];
	for (int i = 0; i < _size; i++)
		_elem[i] = oldElem[i];
	delete[] oldElem;
}