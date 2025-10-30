int __fastcall sub_BC05C(int a1, int a2)
{
  int v3; // r4
  int v4; // r5
  int v5; // r1
  int v6; // r2
  int v7; // r1
  int v8; // r2
  int v9; // r5
  int v10; // r0
  int v11; // r4
  unsigned int v12; // r1
  int v13; // r5
  int v14; // r11
  int v15; // r1
  int v16; // r2
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r0
  int v21; // r4
  int v22; // r0
  const char *v23; // r7
  int v24; // r5
  int v25; // r6
  int v26; // r8
  char *v27; // r0
  int v28; // r0
  int v29; // r2
  bool v30; // zf
  unsigned int v32; // r2
  int v33; // [sp+Ch] [bp-28h]
  int v34; // [sp+10h] [bp-24h]
  int v35; // [sp+18h] [bp-1Ch]
  int v36; // [sp+1Ch] [bp-18h]
  unsigned int v38; // [sp+24h] [bp-10h]

  v3 = sub_BBDB4(a1);
  v4 = sub_13B390(a2, v3);
  v35 = v4;
  if ( sub_10C010(v4, v5, v6) <= 0 )
  {
    if ( v4 )
      sub_D0048(14, 123, 119, "crypto/conf/conf_ssl.c", 74);
    else
      sub_D0048(14, 123, 120, "crypto/conf/conf_ssl.c", 72);
    sub_D1240(2, "section=", v3);
    goto LABEL_17;
  }
  v9 = sub_10C010(v4, v7, v8);
  sub_BBFA4();
  v10 = sub_E0740(12 * v9, "crypto/conf/conf_ssl.c", 80);
  dword_6DF3E8 = v10;
  if ( !v10 )
  {
LABEL_17:
    sub_BBFA4();
    return 0;
  }
  dword_6DF3EC = v9;
  if ( v9 )
  {
    v38 = 0;
    v11 = v10;
    v36 = 0;
    v12 = 0;
    while ( 1 )
    {
      v13 = sub_10C01C(v35, v12);
      v14 = v11 + v36;
      v33 = sub_13B390(a2, *(_DWORD *)(v13 + 8));
      if ( sub_10C010(v33, v15, v16) <= 0 )
      {
        if ( v33 )
          sub_D0048(14, 123, 117, "crypto/conf/conf_ssl.c", 95);
        else
          sub_D0048(14, 123, 118, "crypto/conf/conf_ssl.c", 92);
        sub_D1240(4, "name=", *(_DWORD *)(v13 + 4));
        goto LABEL_17;
      }
      v17 = sub_E9E3C(*(_DWORD *)(v13 + 4), "crypto/conf/conf_ssl.c", 99);
      *(_DWORD *)(v11 + v36) = v17;
      if ( !v17 )
        goto LABEL_17;
      v34 = sub_10C010(v33, v18, v19);
      v20 = sub_E0740(8 * v34, "crypto/conf/conf_ssl.c", 103);
      *(_DWORD *)(v14 + 4) = v20;
      if ( !v20 )
        goto LABEL_17;
      *(_DWORD *)(v14 + 8) = v34;
      v21 = 0;
      if ( v34 )
        break;
LABEL_21:
      v32 = v38 + 1;
      v38 = v32;
      v36 += 12;
      if ( dword_6DF3EC <= v32 )
        return 1;
      v12 = v32;
      v11 = dword_6DF3E8;
    }
    while ( 1 )
    {
      v22 = sub_10C01C(v33, v21);
      v23 = *(const char **)(v22 + 4);
      v24 = 8 * v21;
      v25 = *(_DWORD *)(v14 + 4);
      v26 = v22;
      ++v21;
      v27 = strchr(v23, 46);
      if ( v27 )
        v23 = v27 + 1;
      *(_DWORD *)(v25 + v24) = sub_E9E3C(v23, "crypto/conf/conf_ssl.c", 118);
      v28 = sub_E9E3C(*(_DWORD *)(v26 + 8), "crypto/conf/conf_ssl.c", 119);
      v29 = *(_DWORD *)(v25 + v24);
      *(_DWORD *)(v25 + v24 + 4) = v28;
      v30 = v28 == 0;
      if ( v28 )
        v30 = v29 == 0;
      if ( v30 )
        goto LABEL_17;
      if ( v34 == v21 )
        goto LABEL_21;
    }
  }
  return 1;
}
