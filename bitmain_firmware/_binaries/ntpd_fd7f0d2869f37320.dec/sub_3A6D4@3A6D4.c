_BYTE *__fastcall sub_3A6D4(int a1, bool *a2, int a3, _DWORD *a4)
{
  _BYTE *v4; // r2
  char *v5; // lr
  bool *v6; // r2
  int v7; // r5
  bool *v8; // r4
  char v9; // t1
  int v10; // r12
  bool v11; // zf
  bool v12; // r12
  _DWORD *v13; // r0
  int v14; // r1

  if ( a3 <= 0 )
    return 0;
  v5 = (char *)(a1 + 88);
  v6 = &a2[a3 - 1];
  v7 = a1 + 88 + *(_DWORD *)(a1 + 84);
  v8 = a2;
  while ( 1 )
  {
    v11 = v8 == v6;
    if ( v8 != v6 )
      v11 = v5 == (char *)v7;
    v12 = !v11;
    if ( v11 )
      break;
    v9 = *v5++;
    v10 = v9 & 0x7F;
    if ( (unsigned int)(v10 - 32) <= 0x5E )
      *v8++ = v10;
  }
  v13 = (_DWORD *)(a1 + 72);
  v4 = (_BYTE *)(v8 - a2);
  if ( v8 != a2 )
    *v8 = v12;
  v14 = v13[1];
  *a4 = *v13;
  a4[1] = v14;
  return v4;
}
