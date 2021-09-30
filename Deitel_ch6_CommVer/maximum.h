#pragma once
// Определение шабпона функции maximurn .

template < class Т > // ипи template < typename Т >
Т maximum(Т valuel, Т value2, Т valueЗ)
{
	Т maximumValue = valuel; // предпопожим, value l - максимум

	// опредеЛить, не является пи value2 бопьшим maximurnValue
	if (value2 > maximumValue)
		maximumValue = value2;

	// определить, н е является п и value 3 большим ma.ximurnValue
	if (valueЗ > maximumValue)
		maximumValue = valueЗ;

	return maximumValue;
}// конец шаблона функции maximum