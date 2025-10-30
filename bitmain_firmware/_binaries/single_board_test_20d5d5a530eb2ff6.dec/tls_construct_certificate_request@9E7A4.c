int __fastcall tls_construct_certificate_request(int *a1, int a2)
{
  int *v2; // r3
  int v5; // r3
  _BOOL4 v6; // r2
  int v7; // r1
  int v9; // r3
  int v10; // r6
  int v11; // r0
  int v12; // r0
  int v13; // [sp+Ch] [bp-8h] BYREF

  v2 = (int *)a1[1];
  if ( (*(_DWORD *)(v2[25] + 48) & 8) != 0 )
    goto LABEL_33;
  v5 = *v2;
  v6 = v5 != 0x10000;
  if ( v5 < 772 )
    v6 = 0;
  if ( !v6 )
  {
LABEL_33:
    if ( sub_A8398(a2, 1) && sub_82994(a1, a2) && sub_A7EDC(a2) )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 2) == 0
        || (v10 = sub_A2E74(a1, 1, &v13), sub_A8398(a2, 2))
        && sub_A7D88(a2, 1)
        && sub_A3C90(a1, a2, v13, v10)
        && sub_A7EDC(a2) )
      {
        v11 = sub_9D8A0(a1);
        if ( sub_9D8C8(a1, v11, a2) )
          goto LABEL_8;
        return 0;
      }
      v9 = 2913;
    }
    else
    {
      v9 = 2899;
    }
LABEL_12:
    sub_95494(a1, 80, 372, 68, (int)"ssl/statem/statem_srvr.c", v9);
    return 0;
  }
  if ( a1[381] != 3 )
  {
    if ( !sub_A8450(a2, 1, 0, 0, 1) )
    {
      sub_95494(a1, 80, 372, 68, (int)"ssl/statem/statem_srvr.c", 2881);
      return 0;
    }
    goto LABEL_7;
  }
  CRYPTO_free(a1[383], "ssl/statem/statem_srvr.c", 2855);
  a1[384] = 32;
  v12 = CRYPTO_malloc(32, "ssl/statem/statem_srvr.c", 2857);
  a1[383] = v12;
  if ( !v12 )
  {
    a1[384] = 0;
    sub_95494(a1, 80, 372, 68, (int)"ssl/statem/statem_srvr.c", 2861);
    return 0;
  }
  if ( sub_F497C(v12, a1[384]) <= 0 || !sub_A8544(a2, a1[383], a1[384], 1) )
  {
    v9 = 2869;
    goto LABEL_12;
  }
  if ( !sub_9DD14(a1) )
    return 0;
LABEL_7:
  if ( sub_8F72C(a1, a2, 0x4000, 0, 0) )
  {
LABEL_8:
    v7 = a1[31];
    ++a1[385];
    *(_DWORD *)(v7 + 580) = 1;
    return 1;
  }
  return 0;
}
