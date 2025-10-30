int __fastcall sub_92C1C(_DWORD *a1, unsigned __int8 **a2)
{
  unsigned int v2; // r2
  _BYTE *v4; // r0
  unsigned int v5; // r3
  int v6; // r3
  unsigned int v8; // r2
  _BYTE *v9; // r7
  unsigned int v10; // r5
  int *v11; // r3
  int v12; // r3
  _BOOL4 v13; // r2
  int v14; // r3
  int v15; // r6
  int v16; // r3
  int v17; // r5

  v2 = (unsigned int)a2[1];
  if ( v2 <= 1
    || (v4 = *a2, v5 = (*a2)[1] | (**a2 << 8), v5 > v2 - 2)
    || v5 != v2 - 2
    || (*a2 = &v4[v5 + 2], a2[1] = 0, !v5) )
  {
    v6 = 107;
    goto LABEL_8;
  }
  if ( v4[2]
    || v2 - 3 <= 1
    || (v8 = v2 - 5, v9 = v4 + 5, v10 = (unsigned __int8)v4[4] | ((unsigned __int8)v4[3] << 8), v10 > v8)
    || v10 != v8 )
  {
    v6 = 126;
LABEL_8:
    sub_95494(a1, 50, 573, 110, "ssl/statem/extensions_srvr.c", v6);
    return 0;
  }
  if ( !a1[35] )
    goto LABEL_22;
  v11 = (int *)a1[1];
  if ( (*(_DWORD *)(v11[25] + 48) & 8) == 0 )
  {
    v12 = *v11;
    v13 = v12 >= 772;
    if ( v12 == 0x10000 )
      v13 = 0;
    if ( v13 )
    {
LABEL_22:
      if ( v10 > 0xFF )
      {
        v16 = 138;
      }
      else
      {
        if ( !memchr(v4 + 5, 0, (unsigned __int8)v4[4] | ((unsigned __int8)v4[3] << 8)) )
        {
          CRYPTO_free(a1[334], "ssl/statem/extensions_srvr.c", 153);
          a1[334] = 0;
          CRYPTO_free(0, "ssl/statem/../packet_local.h", 482);
          v17 = sub_E9EF4(v9, v10, "ssl/statem/../packet_local.h", 485);
          a1[334] = v17;
          if ( v17 )
          {
            a1[371] = 1;
            return 1;
          }
          else
          {
            sub_95494(a1, 80, 573, 68, "ssl/statem/extensions_srvr.c", 157);
            return 0;
          }
        }
        v16 = 145;
      }
      sub_95494(a1, 112, 573, 110, "ssl/statem/extensions_srvr.c", v16);
      return 0;
    }
  }
  v14 = a1[285];
  v15 = *(_DWORD *)(v14 + 460);
  if ( v15 )
    v15 = strlen(*(const char **)(v14 + 460)) == v10 && sub_BC33C(v9, v15, v10) == 0;
  a1[371] = v15;
  return 1;
}
