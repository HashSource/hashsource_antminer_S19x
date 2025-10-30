int __fastcall sub_30C338(int a1, char *a2, unsigned int a3)
{
  unsigned int v3; // r0
  char v4; // t1
  unsigned int v6; // r6
  char *v7; // r4
  int v8; // r12
  unsigned int v9; // r7
  unsigned int v10; // r0
  unsigned int v11; // r12
  unsigned int v12; // r0
  unsigned int v13; // lr
  unsigned int v14; // r12
  unsigned int v15; // r0
  unsigned int v16; // r5
  int *v17; // lr
  int v18; // t1
  char *v19; // r2
  char v20; // t1

  if ( !a2 )
    return 0;
  v3 = ~a1;
  if ( !a3 )
    return ~v3;
  while ( ((unsigned __int8)a2 & 3) != 0 )
  {
    v4 = *a2++;
    --a3;
    v3 = dword_430950[(unsigned __int8)(v4 ^ v3)] ^ (v3 >> 8);
    if ( !a3 )
      return ~v3;
  }
  if ( a3 > 0x1F )
  {
    v6 = (a3 - 32) >> 5;
    v7 = a2 + 32;
    do
    {
      v8 = *((_DWORD *)v7 - 8);
      v7 += 32;
      v9 = dword_430950[(unsigned __int8)(v3 ^ v8) + 768]
         ^ dword_430950[(v3 ^ v8) >> 24]
         ^ *((_DWORD *)v7 - 15)
         ^ dword_430950[(unsigned __int8)((unsigned __int16)(v3 ^ v8) >> 8) + 512]
         ^ dword_430950[(unsigned __int8)((v3 ^ v8) >> 16) + 256];
      v10 = dword_430950[HIBYTE(v9)]
          ^ dword_430950[(unsigned __int8)v9 + 768]
          ^ *((_DWORD *)v7 - 14)
          ^ dword_430950[BYTE1(v9) + 512]
          ^ dword_430950[BYTE2(v9) + 256];
      v11 = dword_430950[HIBYTE(v10)]
          ^ dword_430950[(unsigned __int8)v10 + 768]
          ^ *((_DWORD *)v7 - 13)
          ^ dword_430950[BYTE1(v10) + 512]
          ^ dword_430950[BYTE2(v10) + 256];
      v12 = dword_430950[BYTE2(v11) + 256]
          ^ *((_DWORD *)v7 - 12)
          ^ dword_430950[(unsigned __int8)v11 + 768]
          ^ dword_430950[HIBYTE(v11)]
          ^ dword_430950[BYTE1(v11) + 512];
      v13 = dword_430950[(unsigned __int8)v12 + 768]
          ^ dword_430950[HIBYTE(v12)]
          ^ *((_DWORD *)v7 - 11)
          ^ dword_430950[BYTE1(v12) + 512]
          ^ dword_430950[BYTE2(v12) + 256];
      v14 = dword_430950[(unsigned __int8)v13 + 768]
          ^ dword_430950[HIBYTE(v13)]
          ^ *((_DWORD *)v7 - 10)
          ^ dword_430950[BYTE1(v13) + 512]
          ^ dword_430950[BYTE2(v13) + 256];
      v15 = dword_430950[HIBYTE(v14)]
          ^ dword_430950[(unsigned __int8)v14 + 768]
          ^ *((_DWORD *)v7 - 9)
          ^ dword_430950[BYTE1(v14) + 512]
          ^ dword_430950[BYTE2(v14) + 256];
      v3 = dword_430950[(unsigned __int8)v15 + 768]
         ^ dword_430950[HIBYTE(v15)]
         ^ dword_430950[BYTE1(v15) + 512]
         ^ dword_430950[BYTE2(v15) + 256];
    }
    while ( &a2[32 * v6 + 64] != v7 );
    a3 &= 0x1Fu;
    a2 += 32 * v6 + 32;
  }
  if ( a3 > 3 )
  {
    v16 = (a3 - 4) >> 2;
    v17 = (int *)a2;
    do
    {
      v18 = *v17++;
      v3 = dword_430950[(unsigned __int8)(v18 ^ v3) + 768]
         ^ dword_430950[(v18 ^ v3) >> 24]
         ^ dword_430950[(unsigned __int8)((unsigned __int16)(v18 ^ v3) >> 8) + 512]
         ^ dword_430950[(unsigned __int8)((v18 ^ v3) >> 16) + 256];
    }
    while ( &a2[4 * v16 + 4] != (char *)v17 );
    a3 &= 3u;
    a2 += 4 * v16 + 4;
  }
  if ( a3 )
  {
    v19 = &a2[a3];
    do
    {
      v20 = *a2++;
      v3 = dword_430950[(unsigned __int8)(v20 ^ v3)] ^ (v3 >> 8);
    }
    while ( a2 != v19 );
  }
  return ~v3;
}
