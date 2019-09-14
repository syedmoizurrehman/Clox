#include <stdlib.h>

#include "Common.h"
#include "Memory.h"

void* reallocate(void* previous, size_t oldSize, size_t newSize)
{
	if (newSize == 0)
	{
		free(previous);
		return NULL;
	}

	else 
		return realloc(previous, newSize);
}