#include <stdlib.h>

#include "Chunk.h"
#include "Memory.h"

void initChunk(Chunk* chunk) 
{
	chunk->count = 0;
	chunk->capacity = 0;
	chunk->code = NULL;
}

void writeChunk(Chunk* chunk, uint8_t byte)
{
	if (chunk->capacity <= chunk->count)
	{
		int oldCapacity = chunk->capacity;
		chunk->capacity = GROW_CAPACITY(oldCapacity);
		chunk->code = GROW_ARRAY(chunk->code, uint8_t, oldCapacity, chunk->capacity);
	}

	chunk->code[chunk->count] = byte;
	chunk->count++;
}

void freeChunk(Chunk* chunk)
{
	FREE_ARRAY(uint8_t, chunk->code, chunk->capacity);
	initChunk(chunk);
}
