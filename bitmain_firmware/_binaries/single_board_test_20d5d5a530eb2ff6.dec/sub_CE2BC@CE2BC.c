int __fastcall sub_CE2BC(int result, int a2)
{
  _DWORD *v2; // r4
  int v4; // r3
  int v5; // r2

  if ( result )
  {
    if ( *(_DWORD *)(result + 108) )
    {
      v2 = (_DWORD *)result;
      if ( !a2 || (result = sub_10C554(global_engine_lock)) != 0 )
      {
        v4 = v2[26];
        v2[27] = 0;
        if ( v4 )
          *(_DWORD *)(v4 + 100) = v2[25];
        v5 = v2[25];
        if ( v5 )
          *(_DWORD *)(v5 + 104) = v4;
        if ( v2 == (_DWORD *)dword_6DF404 )
          dword_6DF404 = v2[26];
        if ( v2 == (_DWORD *)dword_6DF408 )
          dword_6DF408 = v5;
        if ( a2 )
          return sub_10C564(global_engine_lock);
      }
    }
  }
  return result;
}
