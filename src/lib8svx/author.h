/*
 * Copyright (c) 2012 Sander van der Burg
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so, 
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef __8SVX_AUTHOR_H
#define __8SVX_AUTHOR_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <libiff/chunk.h>
#include <libiff/rawchunk.h>

typedef IFF_RawChunk _8SVX_Author;

_8SVX_Author *_8SVX_createAuthor(void);

IFF_Chunk *_8SVX_readAuthor(FILE *file, const IFF_Long chunkSize);

int _8SVX_writeAuthor(FILE *file, const IFF_Chunk *chunk);

int _8SVX_checkAuthor(const IFF_Chunk *chunk);

void _8SVX_freeAuthor(IFF_Chunk *chunk);

void _8SVX_printAuthor(const IFF_Chunk *chunk, const unsigned int indentLevel);

int _8SVX_compareAuthor(const IFF_Chunk *chunk1, const IFF_Chunk *chunk2);

#ifdef __cplusplus
}
#endif

#endif
