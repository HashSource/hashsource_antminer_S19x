int __fastcall sub_1A3528(int a1, const char *a2)
{
  int v2; // r4
  int v4; // r5
  int v5; // r7
  int v6; // r0
  int v7; // r3
  int v8; // r2
  _BOOL4 v9; // r3

  v2 = a1;
  if ( j_strcmp(a2, *(const char **)(a1 + 4)) )
  {
    v4 = *(_DWORD *)(v2 + 16);
    if ( v4 )
    {
      v5 = 0;
      v2 = 0;
      do
      {
        v6 = sub_1A3528(v4, a2);
        if ( v6 )
        {
          v7 = *(_DWORD *)(v6 + 8);
          if ( v7 )
          {
            v8 = 0;
            do
            {
              v7 = *(_DWORD *)(v7 + 8);
              ++v8;
            }
            while ( v7 );
          }
          else
          {
            v8 = 0;
          }
          v9 = v5 > v8;
          if ( !v2 )
            v9 = 1;
          if ( v9 )
          {
            v5 = v8;
            v2 = v6;
          }
        }
        v4 = *(_DWORD *)(v4 + 20);
      }
      while ( v4 );
    }
    else
    {
      return 0;
    }
  }
  return v2;
}
