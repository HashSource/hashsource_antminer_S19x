int __fastcall sub_2B23D0(int a1, int a2, const void *a3, int a4, int a5, int a6, size_t n)
{
  _DWORD *v10; // r7
  _DWORD *v11; // r6
  void *v13; // r0
  void *v14; // r4
  _DWORD *v15; // r2
  int v16; // r3
  unsigned int v17; // r8
  _DWORD *v18; // r3
  _DWORD *v19; // r1

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
  v15 = (_DWORD *)v10[1];
  v16 = *(_DWORD *)(a2 + 32);
  v11[1] = v14;
  v17 = v16 + a5;
  v11[3] = n;
  v11[2] = v16 + a5;
  if ( v15 && v17 >= v15[2] )
  {
    *v15 = v11;
    *v11 = 0;
    v10[1] = v11;
    return 1;
  }
  else
  {
    v18 = (_DWORD *)*v10;
    v19 = v10;
    if ( *v10 )
    {
      do
      {
        if ( v17 <= v18[2] )
          break;
        v19 = v18;
        v18 = (_DWORD *)*v18;
      }
      while ( v18 );
    }
    *v11 = v18;
    *v19 = v11;
    if ( *v11 )
      return 1;
    v10[1] = v11;
    return 1;
  }
}
