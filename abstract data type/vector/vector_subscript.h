#pragma once
#include "vector.h"
template <typename T> Vector<T>& Vector::operator=(Vector<T> const& V) {//���� �����=
	if (_elem) delete[]_elem; //�ͷ�ԭ����
	copyFrom(V.elem, 0,V.size());
	return *this;              //���ص�ǰ���������
}