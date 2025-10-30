int __fastcall sub_99ED0(_DWORD *a1, int a2)
{
  int result; // r0
  int (*v4)(void); // r3
  int v5; // r0
  int v6; // r4
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r4
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r0
  int v15; // [sp+8h] [bp-8h] BYREF
  int v16; // [sp+Ch] [bp-4h] BYREF

  v15 = 0;
  v16 = 0;
  if ( a2 == 3 )
  {
    v4 = *(int (**)(void))(a1[257] + 224);
    if ( v4 )
    {
      v5 = v4();
      v6 = v5;
      if ( v5 < 0 )
      {
        a1[5] = 4;
        return 3;
      }
      if ( !v5 )
      {
        sub_95494(a1, 80, 360, 234, (int)"ssl/statem/statem_clnt.c", 3482);
        return v6;
      }
      a1[5] = 1;
    }
    if ( sub_A4EE8(a1, 0)
      && *(_DWORD *)(a1[31] + 608)
      && ((*(_DWORD *)(a1[257] + 16) & 0x30001) == 0 || sub_A46BC(a1, 0, 0)) )
    {
      goto LABEL_12;
    }
  }
  else if ( a2 != 4 )
  {
    sub_95494(a1, 80, 360, 68, (int)"ssl/statem/statem_clnt.c", 3544);
    return 0;
  }
  v7 = sub_99E7C(a1, (int)&v15, (int)&v16);
  v10 = v7;
  if ( v7 < 0 )
  {
    a1[5] = 4;
    return 4;
  }
  a1[5] = 1;
  if ( v7 == 1 )
  {
    if ( v16 && v15 )
    {
      if ( sub_AB55C(a1) && sub_AB894(a1, v16) )
      {
        X509_free(v15, v12, v13);
        sub_DA240(v16);
        goto LABEL_28;
      }
    }
    else
    {
      sub_D0048(20, 360, 106, "ssl/statem/statem_clnt.c", 3516);
    }
    X509_free(v15, v12, v13);
    sub_DA240(v16);
    goto LABEL_19;
  }
  X509_free(v15, v8, v9);
  sub_DA240(v16);
  if ( !v10 )
  {
LABEL_19:
    v11 = a1[31];
    goto LABEL_20;
  }
LABEL_28:
  v14 = sub_A4EE8(a1, 0);
  v11 = a1[31];
  if ( v14 && *(_DWORD *)(v11 + 608) )
  {
    if ( (*(_DWORD *)(a1[257] + 16) & 0x30001) == 0 || sub_A46BC(a1, 0, 0) )
      goto LABEL_12;
    goto LABEL_19;
  }
LABEL_20:
  if ( *a1 == 768 )
  {
    *(_DWORD *)(v11 + 536) = 0;
    sub_83FEC(a1, 1, 41);
    return 2;
  }
  *(_DWORD *)(v11 + 536) = 2;
  result = sub_A9244(a1, 0);
  if ( result )
  {
LABEL_12:
    if ( a1[381] == 4 )
      return 1;
    return 2;
  }
  return result;
}
