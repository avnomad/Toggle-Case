//	Copyright (C) 2008, 2012 Vaptistis Anogeianakis <nomad@cornercase.gr>
/*
 *	This file is part of Toggle Case.
 *
 *	Toggle Case is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	Toggle Case is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with Toggle Case.  If not, see <http://www.gnu.org/licenses/>.
 */

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