int __fastcall sub_88EDC(int a1, unsigned int a2)
{
  int *v2; // r3
  int v3; // r3
  _BOOL4 v4; // r4
  int v7; // r5

  v2 = *(int **)(a1 + 4);
  if ( (*(_DWORD *)(v2[25] + 48) & 8) != 0 )
    goto LABEL_7;
  v3 = *v2;
  v4 = v3 == 0x10000;
  if ( v3 < 772 )
    v4 = 1;
  if ( v4 )
  {
LABEL_7:
    v7 = 0;
    sub_D0048(20, 515, 266, "ssl/ssl_lib.c", 2124);
  }
  else
  {
    if ( a2 > 1 )
    {
      sub_D0048(20, 515, 120, "ssl/ssl_lib.c", 2130);
      return 0;
    }
    v7 = sub_9544C(a1);
    if ( v7 )
    {
      if ( sub_7D404(a1 + 1616) )
      {
        v7 = 0;
        sub_D0048(20, 515, 127, "ssl/ssl_lib.c", 2140);
      }
      else
      {
        v7 = 1;
        sub_95D9C(a1, 1);
        *(_DWORD *)(a1 + 1520) = a2;
      }
    }
    else
    {
      sub_D0048(20, 515, 121, "ssl/ssl_lib.c", 2135);
    }
  }
  return v7;
}
