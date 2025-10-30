int __fastcall sub_A2168(_DWORD *a1, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // r3
  unsigned __int8 *v4; // r3
  unsigned int v5; // r6
  int v6; // r7
  unsigned __int8 *v8; // r3
  unsigned __int8 *v9; // r2
  unsigned __int8 *v10; // r3
  int v11; // r4

  v2 = a2[1];
  if ( !v2 )
    goto LABEL_3;
  v4 = v2 - 1;
  v6 = (int)(*a2 + 1);
  v5 = **a2;
  if ( v5 > (unsigned int)v4 )
    goto LABEL_3;
  v8 = &v4[-v5];
  *a2 = (unsigned __int8 *)(v6 + v5);
  a2[1] = v8;
  if ( v8
    && (v9 = (unsigned __int8 *)*(unsigned __int8 *)(v6 + v5), v10 = v8 - 1, v9 <= v10)
    && (*a2 = &v9[v6 + 1 + v5], a2[1] = (unsigned __int8 *)(v10 - v9), v10 == v9) )
  {
    CRYPTO_free(a1[359], "ssl/statem/../packet_local.h", 453);
    a1[359] = 0;
    if ( !v5 || (v11 = sub_E9E68(v6, v5, "ssl/statem/../packet_local.h", 462), (a1[359] = v11) != 0) )
    {
      a1[360] = v5;
      return 3;
    }
    else
    {
      a1[360] = 0;
      sub_95494(a1, 80, 383, 68, (int)"ssl/statem/statem_srvr.c", 4253);
      return 0;
    }
  }
  else
  {
LABEL_3:
    sub_95494(a1, 50, 383, 159, (int)"ssl/statem/statem_srvr.c", 4246);
    return 0;
  }
}
