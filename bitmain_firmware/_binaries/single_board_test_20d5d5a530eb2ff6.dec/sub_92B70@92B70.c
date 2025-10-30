int __fastcall sub_92B70(int a1, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // r3
  unsigned __int8 *v4; // r3
  char *v5; // r4
  unsigned int v6; // r5
  _DWORD *v7; // r7
  size_t v8; // r2

  v2 = a2[1];
  if ( v2
    && (v4 = v2 - 1, v5 = (char *)(*a2 + 1), v6 = **a2, a2[1] = v4, *a2 = (unsigned __int8 *)v5, v6 <= (unsigned int)v4) )
  {
    v7 = *(_DWORD **)(a1 + 124);
    *a2 = (unsigned __int8 *)&v5[v6];
    a2[1] = &v4[-v6];
    v8 = v7[188];
    if ( v8 == v6 )
    {
      if ( !memcmp(v5, v7 + 172, v8) )
      {
        v7[206] = 1;
        return 1;
      }
      else
      {
        sub_95494(a1, 40, 464, 337, "ssl/statem/extensions_srvr.c", 65);
        return 0;
      }
    }
    else
    {
      sub_95494(a1, 40, 464, 337, "ssl/statem/extensions_srvr.c", 58);
      return 0;
    }
  }
  else
  {
    sub_95494(a1, 50, 464, 336, "ssl/statem/extensions_srvr.c", 51);
    return 0;
  }
}
