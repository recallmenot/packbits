/*****************************************************************************
packbits.h  -  run length encoding and decoding using MacPaint / TIFF format.
******************************************************************************/

#ifndef _PACKBITS_H_
#define _PACKBITS_H_

uint16_t packbits(const uint8_t *srcPtr, uint8_t *destPtr, uint16_t srcCount, uint16_t destLimit);
uint16_t unpackbits(const uint8_t *srcPtr, uint8_t *destPtr, uint16_t srcCount, uint16_t destLimit);

#endif
