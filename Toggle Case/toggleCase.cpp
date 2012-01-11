#include "stdafx.h"
#include "toggleCase.h"

wchar_t toggleCase(wchar_t c)
{
	if(L'a'<=c && c<=L'z' || L'A'<=c && c<=L'Z')
		return c ^ 0x0020;
	else if(c == L'ò')
		return L'Ó';
	else if(L'Á'<=c && c<=L'Û')
		return c + 32;
	else if(L'á'<=c && c<=L'û')
		return c - 32;
	else if(L'¸'<=c && c<=L'º')
		return c + 37;
	else if(L'Ý'<=c && c<=L'ß')
		return c - 37;
	else if(L'¾'==c || c==L'¿')
		return c + 63;
	else if(L'ý'==c || c==L'þ')
		return c - 63;
	else if(c==L'¢')
		return L'Ü';
	else if(c==L'Ü')
		return L'¢';
	else if(c==L'ü')
		return L'¼';
	else if(c==L'¼')
		return L'ü';
	else if(c==L'à')
		return L'Û';
	else if(c==L'À')
		return L'Ú';
	else return c;
}//áâãäåæçèéêëìíîïðñóòôõö÷øùÁÂÃÄÅÆÇÈÉÊËÌÍÎÏÐÑÓÔÕÖ×ØÙûúÛÚÝÞß¸¹ºýþ¾¿Üü¢¼àÀÛÚ