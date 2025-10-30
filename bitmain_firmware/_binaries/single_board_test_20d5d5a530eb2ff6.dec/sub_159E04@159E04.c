int __fastcall sub_159E04(char *a1, unsigned int a2, int a3, unsigned int a4, int a5, unsigned int a6, _DWORD *a7)
{
  bool v8; // cc
  int v10; // r3
  int result; // r0
  size_t v12; // r6
  int *v14; // r5
  int v15; // r4
  size_t v16; // r7
  int v17; // r4
  _BYTE v18[4]; // [sp+4h] [bp-48h] BYREF
  _BYTE v19[68]; // [sp+8h] [bp-44h] BYREF

  v8 = a4 > 0x40000000;
  if ( a4 <= 0x40000000 )
    v8 = a2 > 0x40000000;
  v10 = v8;
  if ( a6 > 0x40000000 )
    v10 |= 1u;
  if ( v10 )
    return 0;
  v12 = a2;
  result = sub_D14F4();
  v14 = (int *)result;
  if ( result )
  {
    v15 = 1;
    v16 = sub_D8C78((int)a7);
    while ( 1 )
    {
      if ( !sub_D1520(v14, a7, 0) )
        goto LABEL_20;
      v18[2] = BYTE1(v15);
      v18[3] = v15;
      v18[1] = BYTE2(v15);
      v18[0] = HIBYTE(v15);
      if ( !sub_D16D8((int)v14, a3, a4) )
        goto LABEL_20;
      ++v15;
      if ( !sub_D16D8((int)v14, (int)v18, 4) || !sub_D16D8((int)v14, a5, a6) )
        goto LABEL_20;
      if ( v16 > v12 )
        break;
      if ( !sub_D1734(v14, (int)a1, 0) )
        goto LABEL_20;
      v12 -= v16;
      a1 += v16;
      if ( !v12 )
        goto LABEL_24;
    }
    if ( !sub_D1734(v14, (int)v19, 0) )
    {
LABEL_20:
      v17 = 0;
      goto LABEL_21;
    }
    memcpy(a1, v19, v12);
    sub_E07F8(v19, v16);
LABEL_24:
    v17 = 1;
LABEL_21:
    sub_D1504(v14);
    return v17;
  }
  return result;
}
