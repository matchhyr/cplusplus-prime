#pragma once
template<typename T>
void Vector<T>::copyFrom(T const* A, Rank lo, Rank hi) {  //以数组区间[lo，hi）为蓝本复制向量
	_elem = new T[_capacity = 2 * (hi - lo)]; _size = 0;//分配空间，规模置0
	while (lo < hi)//A[lo,hi)元素逐一复制
		_elem[size++] = A[lo++];
}