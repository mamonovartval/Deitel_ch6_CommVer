#pragma once
// ����������� ������� ������� maximurn .

template < class � > // ��� template < typename � >
� maximum(� valuel, � value2, � value�)
{
	� maximumValue = valuel; // �����������, value l - ��������

	// ����������, �� �������� �� value2 ������� maximurnValue
	if (value2 > maximumValue)
		maximumValue = value2;

	// ����������, � � �������� � � value 3 ������� ma.ximurnValue
	if (value� > maximumValue)
		maximumValue = value�;

	return maximumValue;
}// ����� ������� ������� maximum