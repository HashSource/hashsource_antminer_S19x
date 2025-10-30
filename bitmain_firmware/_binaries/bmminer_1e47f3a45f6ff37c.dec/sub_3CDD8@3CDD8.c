int *__fastcall sub_3CDD8(_DWORD *a1, int a2)
{
  int v3; // r3
  int v5; // r6
  char *v6; // r0
  int v7; // r6
  int v8; // r2
  size_t v9; // r2
  int v10; // r7
  int v11; // r8
  int v12; // r9
  int v13; // r10
  int v14; // r11
  int v15; // r6
  int *result; // r0
  int i; // r3
  _BYTE *v18; // r2
  int v19; // t1

  v3 = a1[1];
  v5 = *a1;
  v6 = (char *)a1 + v3 + 8;
  v7 = v3 + v5;
  if ( (v3 & 0x3Fu) <= 0x37 )
    v8 = 64;
  else
    v8 = 128;
  v9 = v8 - v3;
  if ( (v3 & 0x3Fu) <= 0x37 )
    v10 = 15;
  else
    v10 = 31;
  if ( (v3 & 0x3Fu) <= 0x37 )
    v11 = 61;
  else
    v11 = 125;
  if ( (v3 & 0x3Fu) <= 0x37 )
    v12 = 62;
  else
    v12 = 126;
  if ( (v3 & 0x3Fu) <= 0x37 )
    v13 = 63;
  else
    v13 = 127;
  if ( (v3 & 0x3Fu) <= 0x37 )
    v14 = 1;
  else
    v14 = 2;
  memset(v6, 0, v9);
  v15 = 8 * v7;
  *((_BYTE *)a1 + a1[1] + 8) = 0x80;
  *((_BYTE *)a1 + v13 + 8) = v15;
  *((_BYTE *)a1 + v12 + 8) = BYTE1(v15);
  *((_BYTE *)a1 + v11 + 8) = BYTE2(v15);
  LOBYTE(a1[v10 + 2]) = HIBYTE(v15);
  sub_3CAE0((int)a1, (int)(a1 + 2), v14);
  result = a1 + 34;
  for ( i = 0; i != 8; ++i )
  {
    v18 = (_BYTE *)(a2 + 4 * i);
    v18[3] = *result;
    v18[2] = BYTE1(*result);
    v18[1] = *((_WORD *)result + 1);
    v19 = *result++;
    *v18 = HIBYTE(v19);
  }
  return result;
}
