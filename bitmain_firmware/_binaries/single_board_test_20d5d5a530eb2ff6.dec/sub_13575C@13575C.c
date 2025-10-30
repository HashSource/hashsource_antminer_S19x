char *__fastcall sub_13575C(_DWORD *a1)
{
  _BYTE *v2; // r0
  _BYTE *v3; // r8
  _BYTE *v4; // r3
  int v5; // r4
  int v6; // r1
  int v7; // r9
  unsigned int *v8; // r2
  unsigned int v9; // r2
  int v10; // r9
  char v11; // r10
  int v12; // r9
  char v13; // r11
  int v14; // r9
  char v15; // r11
  char v16; // r11

  if ( sub_B85B0((int)a1) )
    return sub_E9E3C(a0);
  v2 = CRYPTO_malloc((void *)(16 * a1[1] + 2));
  v3 = v2;
  if ( v2 )
  {
    if ( a1[3] )
    {
      v4 = v2 + 1;
      *v2 = 45;
    }
    else
    {
      v4 = v2;
    }
    v5 = a1[1] - 1;
    if ( v5 >= 0 )
    {
      v6 = 4 * v5;
      v7 = 0;
      do
      {
        v8 = (unsigned int *)(*a1 + v6);
        if ( v7 )
        {
          *v4 = 48;
          v7 = 1;
          v4[1] = 48;
          v4 += 8;
          *(v4 - 6) = 48;
          *(v4 - 5) = 48;
          *(v4 - 4) = 48;
          *(v4 - 3) = 48;
          *(v4 - 2) = 48;
          *(v4 - 1) = 48;
          v8 = (unsigned int *)(*a1 + v6);
        }
        v9 = *v8;
        v10 = v7 | HIBYTE(v9);
        if ( v10 )
        {
          v11 = a0123456789abcd_2[HIBYTE(v9) & 0xF];
          v10 = 1;
          *v4 = a0123456789abcd_2[v9 >> 28];
          v4[1] = v11;
          v4 += 2;
          v9 = *(_DWORD *)(*a1 + v6);
        }
        v12 = v10 | BYTE2(v9);
        if ( v12 )
        {
          v13 = a0123456789abcd_2[HIWORD(v9) & 0xF];
          v12 = 1;
          *v4 = a0123456789abcd_2[(int)BYTE2(v9) >> 4];
          v4[1] = v13;
          v4 += 2;
          v9 = *(_DWORD *)(*a1 + v6);
        }
        v14 = v12 | BYTE1(v9);
        if ( v14 )
        {
          v15 = a0123456789abcd_2[(v9 >> 8) & 0xF];
          v14 = 1;
          *v4 = a0123456789abcd_2[(int)BYTE1(v9) >> 4];
          v4[1] = v15;
          v4 += 2;
          v9 = *(_DWORD *)(*a1 + v6);
        }
        v7 = v14 | (unsigned __int8)v9;
        if ( v7 )
        {
          v16 = a0123456789abcd_2[v9 & 0xF];
          v7 = 1;
          *v4 = a0123456789abcd_2[(int)(unsigned __int8)v9 >> 4];
          v4[1] = v16;
          v4 += 2;
        }
        --v5;
        v6 -= 4;
      }
      while ( v5 != -1 );
    }
    *v4 = 0;
  }
  else
  {
    sub_D0048(3, 105, 65, (int)"crypto/bn/bn_print.c", 30);
  }
  return v3;
}
