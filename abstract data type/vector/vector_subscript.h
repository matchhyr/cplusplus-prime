#pragma once
#include "vector.h"
template <typename T> Vector<T>& Vector::operator=(Vector<T> const& V) {//重载 运算符=
	if (_elem) delete[]_elem; //释放原内容
	copyFrom(V.elem, 0,V.size());
	return *this;              //返回当前对象的引用
}