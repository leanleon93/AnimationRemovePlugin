#pragma once
struct DrEl
{
public:
	char type;
	__int16 subtype;
	unsigned __int16 size;
};
struct _DrEl {
	DrEl* _el;
};