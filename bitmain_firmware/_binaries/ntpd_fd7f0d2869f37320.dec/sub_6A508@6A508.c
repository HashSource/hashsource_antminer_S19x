int __fastcall sub_6A508(int a1)
{
  int v2; // r0
  void *v3; // r4
  int v4; // r2
  _BOOL4 v5; // r6

  do
  {
    v2 = sub_6F7FC(a1);
    v3 = (void *)v2;
    if ( !v2 )
      break;
    v4 = *(_DWORD *)(v2 + 8);
    if ( v4 )
    {
      if ( v4 != 1 )
      {
        sub_65D40((_BYTE *)&dword_0 + 3, "unknown req %d to blocking worker", v4);
        free(v3);
        return 0;
      }
      v5 = sub_69110(a1, v2) != 0;
    }
    else
    {
      v5 = sub_6967C(a1, v2) != 0;
    }
    free(v3);
  }
  while ( !v5 );
  return 0;
}
