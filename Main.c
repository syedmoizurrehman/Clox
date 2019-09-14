#include "Common.h"                     
#include "Chunk.h"

int main(int argc, const char* argv[]) 
{
	Chunk chunk;
	initChunk(&chunk);
	writeChunk(&chunk, OpReturn);
	freeChunk(&chunk);
	return 0;
}