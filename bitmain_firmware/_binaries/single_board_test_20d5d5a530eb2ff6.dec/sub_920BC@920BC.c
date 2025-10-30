int __fastcall sub_920BC(_DWORD *a1, unsigned __int8 **a2, int a3)
{
  bool v3; // zf
  unsigned int v4; // r2
  unsigned __int8 *v6; // r2
  int v7; // lr
  int v8; // r5
  int v9; // r7
  int v10; // r4

  v3 = a3 == 0x2000;
  v4 = (unsigned int)a2[1];
  if ( v3 )
  {
    if ( v4 <= 3
      || (v6 = (unsigned __int8 *)(v4 - 4),
          v7 = **a2,
          v8 = (*a2)[1],
          v9 = (*a2)[2],
          v10 = (*a2)[3],
          *a2 += 4,
          (a2[1] = v6) != 0) )
    {
      sub_95494(a1, 50, 538, 174, "ssl/statem/extensions_clnt.c", 1937);
      return 0;
    }
    else
    {
      *(_DWORD *)(a1[285] + 480) = v10 | (v8 << 16) | (v7 << 24) | (v9 << 8);
      return 1;
    }
  }
  else if ( v4 )
  {
    sub_95494(a1, 50, 538, 110, "ssl/statem/extensions_clnt.c", 1948);
    return 0;
  }
  else if ( a1[364] && a1[35] )
  {
    a1[363] = 2;
    return 1;
  }
  else
  {
    sub_95494(a1, 47, 538, 110, "ssl/statem/extensions_clnt.c", 1960);
    return 0;
  }
}
