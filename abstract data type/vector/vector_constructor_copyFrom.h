#pragma once
template<typename T>
void Vector<T>::copyFrom(T const* A, Rank lo, Rank hi) {  //����������[lo��hi��Ϊ������������
	_elem = new T[_capacity = 2 * (hi - lo)]; _size = 0;//����ռ䣬��ģ��0
	while (lo < hi)//A[lo,hi)Ԫ����һ����
		_elem[size++] = A[lo++];
}