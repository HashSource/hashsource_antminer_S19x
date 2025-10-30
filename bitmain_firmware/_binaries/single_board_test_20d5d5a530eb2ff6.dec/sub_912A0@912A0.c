int __fastcall sub_912A0(int a1, unsigned __int8 **a2)
{
  _DWORD *v3; // r6
  size_t v5; // r2
  size_t v6; // r5
  size_t v7; // lr
  _BOOL4 v8; // r3
  _BOOL4 v9; // r1
  int v10; // r4
  unsigned __int8 *v12; // r4
  unsigned __int8 *v13; // r4
  unsigned __int8 *v14; // r1
  unsigned __int8 *v15; // r3
  unsigned __int8 *v16; // r9

  v3 = *(_DWORD **)(a1 + 124);
  v5 = v3[188];
  v6 = v3[205];
  v7 = v5 + v6;
  v8 = v5 + v6 == 0;
  if ( v5 )
    v9 = 1;
  else
    v9 = v6 == 0;
  if ( !v9 )
    goto LABEL_8;
  if ( v6 )
    v8 = 1;
  if ( !v8 )
  {
LABEL_8:
    v10 = 0;
    sub_95494(a1, 80, 448, 68, "ssl/statem/extensions_clnt.c", 1249);
    return v10;
  }
  v12 = a2[1];
  if ( v12 )
  {
    v13 = v12 - 1;
    v15 = *a2 + 1;
    v14 = (unsigned __int8 *)**a2;
    *a2 = v15;
    a2[1] = v13;
    if ( v14 == v13 )
    {
      if ( (unsigned __int8 *)v7 == v14 )
      {
        if ( v5 > v7
          || (v16 = &v15[v5], a2[1] = (unsigned __int8 *)v6, *a2 = &v15[v5], (v10 = memcmp(v15, v3 + 172, v5)) != 0) )
        {
          v10 = 0;
          sub_95494(a1, 47, 448, 337, "ssl/statem/extensions_clnt.c", 1278);
        }
        else
        {
          *a2 = &v16[v6];
          a2[1] = 0;
          if ( !memcmp(v16, v3 + 189, v6) )
          {
            v10 = 1;
            v3[206] = 1;
          }
          else
          {
            sub_95494(a1, 47, 448, 337, "ssl/statem/extensions_clnt.c", 1286);
          }
        }
      }
      else
      {
        v10 = 0;
        sub_95494(a1, 47, 448, 337, "ssl/statem/extensions_clnt.c", 1270);
      }
    }
    else
    {
      v10 = 0;
      sub_95494(a1, 50, 448, 336, "ssl/statem/extensions_clnt.c", 1263);
    }
    return v10;
  }
  sub_95494(a1, 50, 448, 336, "ssl/statem/extensions_clnt.c", 1256);
  return 0;
}
