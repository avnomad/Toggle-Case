#include "stdafx.h"
#include "toggleCase.h"

wchar_t toggleCase(wchar_t c)
{
	if(L'a'<=c && c<=L'z' || L'A'<=c && c<=L'Z')
		return c ^ 0x0020;
	else if(c == L'�')
		return L'�';
	else if(L'�'<=c && c<=L'�')
		return c + 32;
	else if(L'�'<=c && c<=L'�')
		return c - 32;
	else if(L'�'<=c && c<=L'�')
		return c + 37;
	else if(L'�'<=c && c<=L'�')
		return c - 37;
	else if(L'�'==c || c==L'�')
		return c + 63;
	else if(L'�'==c || c==L'�')
		return c - 63;
	else if(c==L'�')
		return L'�';
	else if(c==L'�')
		return L'�';
	else if(c==L'�')
		return L'�';
	else if(c==L'�')
		return L'�';
	else if(c==L'�')
		return L'�';
	else if(c==L'�')
		return L'�';
	else return c;
}//�������������������������������������������������������߸��������������