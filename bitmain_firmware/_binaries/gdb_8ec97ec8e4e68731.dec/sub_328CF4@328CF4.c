unsigned int __fastcall sub_328CF4(unsigned __int16 *a1, int a2, unsigned __int16 *a3, int a4, int a5)
{
  unsigned __int64 v5; // r6
  int v6; // r4
  int v7; // r1
  unsigned __int16 *v8; // r12
  unsigned __int16 *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r1
  unsigned __int16 *v12; // r2
  unsigned __int16 *v13; // r0
  unsigned int v14; // r12
  unsigned int v15; // t1
  unsigned int v16; // t1
  bool v17; // cf
  int v18; // r12
  int v19; // r12
  size_t v22; // r0
  void *v26; // r7
  unsigned __int16 *v27; // r10
  int v28; // r0
  int v29; // r4
  int v30; // r4
  unsigned __int16 *i; // r0
  int v32; // t1
  unsigned __int16 *v33; // r0
  char v34; // [sp+14h] [bp-38h] BYREF

  v6 = a5;
  if ( !a5 )
  {
    if ( a4 < a2 )
      return 1;
    if ( a4 <= a2 )
    {
      v7 = a2 + 0x7FFFFFFF;
      v8 = &a1[v7];
      v9 = &a3[v7];
      if ( __CFADD__(a1, v7 * 2) )
        return v6;
      v10 = a3[v7];
      v11 = a1[v7];
      if ( v11 <= v10 )
      {
        if ( v11 >= v10 )
        {
          v12 = v8;
          v13 = (unsigned __int16 *)((char *)v9 - (((char *)v8 - (char *)a1) & 0xFFFFFFFE));
          while ( v13 != v9 )
          {
            v15 = *--v12;
            v14 = v15;
            v16 = *--v9;
            v17 = v14 >= v16;
            if ( v14 > v16 )
              return 1;
            if ( !v17 )
              return -1;
          }
          return 0;
        }
        return -1;
      }
      return 1;
    }
    return -1;
  }
  if ( a5 <= 49 )
  {
    v18 = 35608;
  }
  else
  {
    v18 = -1431655765;
    LODWORD(v5) = a5 + 2;
  }
  if ( a5 <= 49 )
  {
    HIWORD(v18) = 67;
    v18 = *(unsigned __int8 *)(v18 + a5 + 20);
  }
  else
  {
    v5 = (unsigned int)v5 * (unsigned __int64)(unsigned int)v18;
  }
  if ( a5 > 49 )
    v18 = HIDWORD(v5) >> 1;
  v19 = a4 + v18;
  if ( a2 > v19 )
    return 1;
  if ( v19 > a2 + 1 )
    return -1;
  v22 = 2 * (v19 + 2);
  if ( v22 > 0x32 )
  {
    v33 = (unsigned __int16 *)malloc(v22);
    v27 = v33;
    if ( !v33 )
      return 0x80000000;
    v26 = v33;
  }
  else
  {
    v26 = 0;
    v27 = (unsigned __int16 *)&v34;
  }
  v28 = sub_3275B0(a1, a2, a3, a4, a5 / 3, (signed int)v27, -dword_438D00[a5 % 3]);
  if ( v28 >= 0 )
  {
    v30 = *v27;
    for ( i = &v27[v28 - 1]; v27 < i; v30 = v32 )
    {
      if ( v30 )
        break;
      v32 = v27[1];
      ++v27;
    }
    v29 = v30 != 0;
  }
  else
  {
    v29 = -1;
  }
  free(v26);
  return v29;
}
