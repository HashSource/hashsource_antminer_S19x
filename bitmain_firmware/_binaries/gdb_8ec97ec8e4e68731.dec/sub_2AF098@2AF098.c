int __fastcall sub_2AF098(int a1, int a2, const void *a3, int a4, int a5, int a6, size_t a7)
{
  _DWORD *v11; // r9
  void *v12; // r0
  void *v13; // r10
  _DWORD *v14; // r12
  int v15; // r3
  _DWORD *v16; // r2
  unsigned int v17; // r7
  _DWORD *v18; // r3
  _DWORD *v19; // r1

  if ( !a7 || (*(_DWORD *)(a2 + 20) & 3) != 3 )
    return 1;
  v11 = (_DWORD *)sub_2ACBF4(a1, 16);
  if ( !v11 )
    return 0;
  v12 = (void *)sub_2ACBF4(a1, a7);
  v13 = v12;
  if ( !v12 )
    return 0;
  memcpy(v12, a3, a7);
  v14 = *(_DWORD **)(a1 + 160);
  v15 = *(_DWORD *)(a2 + 32);
  v11[1] = v13;
  v16 = (_DWORD *)v14[1];
  v17 = v15 + a5;
  v11[3] = a7;
  v11[2] = v15 + a5;
  if ( v16 && v17 >= v16[2] )
  {
    *v16 = v11;
    *v11 = 0;
    v14[1] = v11;
    return 1;
  }
  else
  {
    v18 = (_DWORD *)*v14;
    v19 = v14;
    if ( *v14 )
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
    v14[1] = v11;
    return 1;
  }
}
