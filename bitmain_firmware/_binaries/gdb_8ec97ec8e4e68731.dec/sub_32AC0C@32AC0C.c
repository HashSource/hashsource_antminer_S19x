int __fastcall sub_32AC0C(int a1, int a2, int a3, int *a4, _DWORD *a5)
{
  int v6; // lr
  _WORD *v7; // r3
  unsigned int v8; // r0
  char *v9; // r2
  _WORD *v10; // r12
  int v11; // r2
  __int16 v12; // t1
  int v13; // r1
  char v14; // r3

  if ( (*(_BYTE *)(a2 + 8) & 0x10) != 0 )
  {
    *a5 |= 0x40000080u;
    goto LABEL_3;
  }
  if ( !a3 )
  {
LABEL_3:
    v6 = *a4;
    if ( *(_DWORD *)a2 > *a4 )
      goto LABEL_4;
LABEL_17:
    sub_32AB6C(a1, a2);
    goto LABEL_13;
  }
  if ( (*(_BYTE *)(a3 + 8) & 0x10) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 8) & 0x20) == 0 )
      a2 = a3;
    goto LABEL_3;
  }
  a2 = a3;
  *a5 |= 0x40000080u;
  v6 = *a4;
  if ( *(_DWORD *)a3 <= *a4 )
    goto LABEL_17;
LABEL_4:
  v7 = (_WORD *)(a1 + 10);
  *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 8);
  if ( v6 <= 49 )
  {
    v10 = &v7[*((unsigned __int8 *)&dword_438B18[5] + v6)];
    if ( v7 >= v10 )
      goto LABEL_10;
    goto LABEL_6;
  }
  v8 = (v6 + 2) / 3u;
  v9 = (char *)(2 * v8);
  v10 = &v7[v8];
  if ( v7 < v10 )
  {
LABEL_6:
    v11 = a2 + 8;
    do
    {
      v12 = *(_WORD *)(v11 + 2);
      v11 += 2;
      *v7++ = v12;
    }
    while ( v7 < v10 );
    if ( v6 > 49 )
    {
      v8 = (v6 + 2) / 3u;
      v9 = (char *)(2 * v8);
      goto LABEL_20;
    }
LABEL_10:
    v9 = (char *)dword_438B18 + v6;
    v13 = 3 * *((unsigned __int8 *)&dword_438B18[5] + v6);
    goto LABEL_11;
  }
LABEL_20:
  v13 = (int)&v9[v8];
LABEL_11:
  *(_DWORD *)a1 = v13;
  if ( v6 < v13 )
    sub_327D34((int *)a1, v13 - v6, (int)v9);
LABEL_13:
  v14 = *(_BYTE *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = v14 & 0xCF | 0x20;
  return a1;
}
