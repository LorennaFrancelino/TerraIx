#include "stdio.h"
#include "stdarg.h"

void dbg(char* canal, char* format, ...){

	va_list lista;
	va_start(lista,format);

	vprintf(format,lista);

}

