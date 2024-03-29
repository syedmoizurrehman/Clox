#ifndef clox_chunk_h
#define clox_chunk_h

#include "Common.h"


typedef enum 
{
	OpReturn,
} OpCode;

typedef struct
{
	int count;
	int capacity;
	uint8_t* code;
} Chunk;

void initChunk(Chunk* chunk);

void writeChunk(Chunk* chunk, uint8_t byte);

void freeChunk(Chunk* chunk);

#endif // !clox_chunk_h