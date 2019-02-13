#pragma once
BITMAPINFO *PrepareRGBBitmapInfo(WORD wWidth,
	WORD wHeight);

void ShrinkData(BYTE *pInBuff,
	WORD wWidth,
	WORD wHeight,
	BYTE *pOutBuff,
	WORD wNewWidth,
	WORD wNewHeight);

void EnlargeData(BYTE *pInBuff,
	WORD wWidth,
	WORD wHeight,
	BYTE *pOutBuff,
	WORD wNewWidth,
	WORD wNewHeight);

HBITMAP ScaleBitmap(HBITMAP hBmp,
	WORD wNewWidth,
	WORD wNewHeight);

float *CreateCoeff(int nLen, int nNewLen, BOOL bShrink);