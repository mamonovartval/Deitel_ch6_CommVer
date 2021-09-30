#pragma once
// determine minimum from two values 
template <class T>
T minimum(T val1, T val2)
{
	T minimum = val1;

	if (val2 < val1)
		return val2;
	else
		return val1;
}