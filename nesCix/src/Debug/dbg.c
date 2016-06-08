#include "stdio.h"
#include "stdarg.h"

void dbg(char* canal, char* format, ...){

	va_list lista;
	va_start(lista,format);

	printf("%s\n",canal);
	vprintf(format,lista);

}
