int __fastcall sub_297EE4(int result)
{
  int v1; // r5
  int v2; // r9
  int v3; // r8
  int v4; // r4
  void **v5; // r0
  _DWORD *v6; // r12
  int v7; // r3
  void ***v8; // r2
  int v9; // r1
  int v10; // r3
  void **v11; // t1

  v1 = result & ~(result >> 31);
  if ( dword_490158 > v1 )
  {
    v2 = result;
    v3 = dword_490158 - v1;
    v4 = 0;
    do
    {
      v5 = *(void ***)(dword_48BB28 + 4 * v4++);
      result = (int)sub_297B08(v5);
    }
    while ( v3 != v4 );
    v6 = (_DWORD *)dword_48BB28;
    dword_4707AC = v3;
    if ( v2 > 0 )
    {
      v8 = (void ***)(dword_48BB28 + 4 * (dword_490158 - v1));
      v9 = dword_48BB28 - 4;
      v10 = 0;
      do
      {
        ++v10;
        v11 = *v8++;
        result = (int)v11;
        *(_DWORD *)(v9 + 4) = v11;
        v9 += 4;
      }
      while ( v1 > v10 );
      if ( v1 < 1 )
        v7 = 1;
      else
        v7 = v1;
      v6 += v7;
    }
    else
    {
      v7 = 0;
    }
    *v6 = 0;
    dword_490158 = v7;
  }
  dword_490160 = v1;
  dword_49015C = v1;
  dword_48BB30 = 1;
  return result;
}
