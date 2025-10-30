int __fastcall sub_84928(int result, int a2)
{
  int v2; // r3
  int v3; // r2
  _DWORD *v4; // r1
  _DWORD *v5; // r3

  if ( result )
  {
    if ( a2 == 1 )
    {
      v2 = result + 20;
      v3 = 0;
    }
    else
    {
      if ( a2 != 2 )
        return 0;
      v2 = result + 20;
      v3 = -858993459 * ((*(_DWORD *)result - (result + 20)) >> 2) + 1;
      if ( v3 > 8 )
        return 0;
    }
    v4 = (_DWORD *)(v2 + 180);
    v5 = (_DWORD *)(v2 + 20 * v3);
    while ( !*v5 || !v5[1] )
    {
      v5 += 5;
      if ( v4 == v5 )
        return 0;
    }
    *(_DWORD *)result = v5;
    return 1;
  }
  return result;
}
