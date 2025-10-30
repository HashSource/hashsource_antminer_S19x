int __fastcall sub_2AFC7C(int a1, int a2, const void *a3, int a4, __int64 a5, size_t n)
{
  int v9; // r8
  _DWORD *v10; // r10
  _DWORD *v11; // r7
  void *v13; // r0
  void *v14; // r4
  unsigned int v15; // r5
  __int64 v16; // r0
  int v17; // r0
  _DWORD *v18; // r3
  unsigned int v19; // r0
  _DWORD *v20; // r3
  _DWORD *v21; // r1

  v9 = sub_2A6904(a1);
  v10 = *(_DWORD **)(a1 + 160);
  v11 = (_DWORD *)sub_2ACBF4(a1, 16);
  if ( !v11 )
    return 0;
  if ( !n || (*(_DWORD *)(a2 + 20) & 3) != 3 )
    return 1;
  v13 = (void *)sub_2ACBF4(a1, n);
  v14 = v13;
  if ( !v13 )
    return 0;
  memcpy(v13, a3, n);
  if ( dword_48FC04 )
  {
    v10[2] = 3;
    v15 = *(_DWORD *)(a2 + 32);
  }
  else
  {
    v15 = *(_DWORD *)(a2 + 32);
    v16 = sub_347ED4((unsigned int)a5 + n, (a5 + (unsigned __int64)n) >> 32, v9, v9 >> 31) + v15;
    if ( v16 > 0x10000 )
    {
      if ( v16 > 0x1000000 || v10[2] > 2u )
        v10[2] = 3;
      else
        v10[2] = 2;
    }
  }
  v11[1] = v14;
  v17 = sub_347ED4(a5, HIDWORD(a5), v9, v9 >> 31);
  v18 = (_DWORD *)v10[1];
  v19 = v15 + v17;
  v11[2] = v19;
  v11[3] = n;
  if ( v18 && v19 >= v18[2] )
  {
    *v18 = v11;
    *v11 = 0;
    v10[1] = v11;
    return 1;
  }
  else
  {
    v20 = (_DWORD *)*v10;
    v21 = v10;
    if ( *v10 )
    {
      do
      {
        if ( v19 <= v20[2] )
          break;
        v21 = v20;
        v20 = (_DWORD *)*v20;
      }
      while ( v20 );
    }
    *v11 = v20;
    *v21 = v11;
    if ( *v11 )
      return 1;
    v10[1] = v11;
    return 1;
  }
}
