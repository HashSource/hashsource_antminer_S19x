int __fastcall sub_56958(int result, int a2)
{
  _DWORD *v2; // r4
  int v3; // r8
  int i; // r0
  int v5; // r6
  int v6; // r7
  int v7; // r0

  if ( a2 )
  {
    v2 = (_DWORD *)dword_48769C;
    v3 = dword_487668;
    dword_487668 = dword_48769C;
    if ( dword_48769C )
    {
      for ( i = sub_191AC0(result); ; i = sub_191AC0(result) )
      {
        v5 = i;
        result = sub_5634C(i);
        v6 = result;
        if ( result )
        {
          v7 = ((int (*)(void))loc_23DBE4)();
          result = sub_568F4(v5, v7);
          if ( result )
            result = sub_18881C(*(_DWORD *)(v6 + 16));
        }
        v2 = (_DWORD *)*v2;
        if ( !v2 )
          break;
        dword_487668 = (int)v2;
      }
    }
    dword_487668 = v3;
  }
  return result;
}
