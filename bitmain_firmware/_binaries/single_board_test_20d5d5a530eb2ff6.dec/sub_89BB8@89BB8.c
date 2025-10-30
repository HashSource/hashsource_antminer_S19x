_DWORD *__fastcall sub_89BB8(_DWORD *a1, int a2)
{
  _DWORD *v2; // r3
  int *v3; // r3
  int v4; // r2
  int v5; // r3
  _DWORD *result; // r0
  int *v8; // r3
  int v9; // r2
  int v10; // r3

  v2 = (_DWORD *)a1[6];
  if ( v2 )
  {
    if ( a2 )
      return 0;
    if ( a1[7] )
    {
      if ( !a1[35] )
        return (_DWORD *)a1[334];
      v3 = (int *)a1[1];
      if ( (*(_DWORD *)(v3[25] + 48) & 8) != 0 )
        return *(_DWORD **)(a1[285] + 460);
      v4 = *v3;
      v5 = *v3 < 772;
      if ( v4 == 0x10000 )
        v5 |= 1u;
      if ( v5 )
        return *(_DWORD **)(a1[285] + 460);
      else
        return (_DWORD *)a1[334];
    }
  }
  else if ( a2 )
  {
    return v2;
  }
  if ( !sub_95464() )
  {
    v8 = (int *)a1[1];
    if ( (*(_DWORD *)(v8[25] + 48) & 8) == 0 )
    {
      v9 = *v8;
      v10 = *v8 == 0x10000;
      if ( v9 < 772 )
        v10 |= 1u;
      if ( !v10 )
        return (_DWORD *)a1[334];
    }
    if ( !a1[35] )
      return (_DWORD *)a1[334];
    v2 = *(_DWORD **)(a1[285] + 460);
    if ( !v2 )
      return (_DWORD *)a1[334];
    return v2;
  }
  result = (_DWORD *)a1[334];
  if ( result )
    return result;
  v2 = (_DWORD *)a1[285];
  if ( !v2 )
    return v2;
  if ( *v2 != 772 )
    return (_DWORD *)v2[115];
  return result;
}
