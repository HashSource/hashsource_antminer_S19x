int __fastcall sub_82F94(int a1, int a2)
{
  int *v2; // r5
  _BOOL4 v3; // r3
  int *v4; // r0
  int v5; // r2
  bool v6; // zf
  int v7; // r3
  int v8; // t1
  int *v9; // r0
  int *v11; // r0

  if ( a1 && (unsigned __int16)*(_DWORD *)(a1 + 16) >> 12 == 6 )
  {
    v2 = *(int **)(a1 + 28);
    if ( v2 )
    {
      v3 = 0;
      v4 = v2 + 2;
      v5 = *v2;
      while ( --v5 >= 0 )
      {
        v6 = !v3;
        v8 = *v4++;
        v7 = v8;
        if ( !v6 )
        {
          if ( !v7 )
            break;
          return v7;
        }
        v3 = v7 == a2;
      }
    }
    v9 = _errno_location();
    v7 = 0;
    *v9 = 2;
  }
  else
  {
    v11 = _errno_location();
    v7 = 0;
    *v11 = 22;
  }
  return v7;
}
