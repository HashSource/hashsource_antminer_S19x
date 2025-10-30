_DWORD *__fastcall sub_20A110(unsigned __int8 **a1, struct obstack *a2, size_t *a3, _DWORD *a4)
{
  unsigned __int8 *v5; // r1
  int v8; // r3
  int *v9; // r9
  int *v10; // r6
  size_t i; // r8
  int v12; // r0
  int v13; // r3
  size_t v14; // r7
  int v15; // r3
  _DWORD *result; // r0
  _BYTE *v17; // r3
  size_t v18; // r4
  _DWORD *v19; // r3
  int v20; // t1
  _DWORD v22[1025]; // [sp+8h] [bp-1004h] BYREF

  v5 = *a1;
  v8 = **a1;
  if ( v8 != 59 )
  {
    if ( v8 != 44 )
      return 0;
    v9 = v22;
    v10 = v22;
    for ( i = 0; ; ++i )
    {
      *a1 = v5 + 1;
      v14 = i + 1;
      v15 = v5[1];
      if ( v15 == 92 || v15 == 63 && !v5[2] )
        *a1 = (unsigned __int8 *)off_478984(a2);
      v12 = sub_2067B4(a1, a2);
      v5 = *a1;
      *v10++ = v12;
      v13 = *v5;
      if ( v13 == 59 )
        break;
      if ( v13 != 44 )
        return 0;
    }
    v17 = *(_BYTE **)(v12 + 24);
    *a1 = v5 + 1;
    if ( *v17 == 10 )
    {
      v18 = i;
      *a4 = 0;
      result = sub_93094(i, 0x18u);
      if ( !i )
      {
        v14 = 0;
LABEL_16:
        *a3 = v14;
        return result;
      }
      v14 = i;
    }
    else
    {
      v18 = i + 1;
      *a4 = 1;
      result = sub_93094(i + 1, 0x18u);
    }
    v19 = result;
    do
    {
      v20 = *v9++;
      v19 += 6;
      *(v19 - 3) = v20;
    }
    while ( v9 != &v22[v18] );
    goto LABEL_16;
  }
  *a1 = v5 + 1;
  if ( dword_47AC88 > 0 )
    sub_F43B4(&off_46D334, "Invalid (empty) method arguments");
  *a4 = 0;
  result = sub_93094(0, 0x18u);
  *a3 = 0;
  return result;
}
