_BYTE *__fastcall sub_39EE4(int a1, bool *a2, int a3, _DWORD *a4)
{
  _BYTE *v4; // r2
  char *v5; // r12
  bool *v6; // r4
  bool *v7; // lr
  int v8; // r5
  char v9; // t1
  int v10; // r2
  bool v11; // zf
  bool v12; // r7
  _DWORD *v13; // r0
  int v14; // r1

  if ( a3 <= 0 )
    return 0;
  v5 = (char *)(a1 + 88);
  v6 = &a2[a3 - 1];
  v7 = a2;
  v8 = a1 + 88 + *(_DWORD *)(a1 + 84);
  while ( 1 )
  {
    v11 = v5 == (char *)v8;
    if ( v5 != (char *)v8 )
      v11 = v7 == v6;
    v12 = !v11;
    if ( v11 )
      break;
    v9 = *v5++;
    v10 = v9 & 0x7F;
    if ( (unsigned int)(v10 - 32) <= 0x5E )
      *v7++ = v10;
  }
  v4 = (_BYTE *)(v7 - a2);
  v13 = (_DWORD *)(a1 + 72);
  if ( v7 != a2 )
    *v7 = v12;
  v14 = v13[1];
  *a4 = *v13;
  a4[1] = v14;
  return v4;
}
