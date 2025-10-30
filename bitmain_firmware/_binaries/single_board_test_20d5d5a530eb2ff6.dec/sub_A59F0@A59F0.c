int __fastcall sub_A59F0(int a1, char a2)
{
  int v4; // r11
  char *v5; // r5
  int v6; // r8
  int v7; // r9
  int v8; // r0
  int v9; // r0
  int v10; // r6
  int v12; // r0
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r8
  int v17; // r0
  int v18; // r10
  int v19; // r5
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r3
  int v24; // r0
  int v25; // r0
  size_t v26; // r3
  int v27; // r0
  int v28; // r2
  bool v29; // zf
  int v30; // r5
  int v31; // r3
  int v32; // r0
  int v33; // r3
  size_t v34; // r2
  void *v35; // r0
  int v36; // r0
  int v37; // r3
  int v38; // r3
  int v39; // [sp+18h] [bp-F4h]
  size_t v40; // [sp+18h] [bp-F4h]
  _BYTE *v41; // [sp+1Ch] [bp-F0h]
  int v42; // [sp+20h] [bp-ECh]
  char *s; // [sp+24h] [bp-E8h]
  unsigned int v44; // [sp+28h] [bp-E4h]
  int v45; // [sp+28h] [bp-E4h]
  int v46; // [sp+2Ch] [bp-E0h]
  int v47; // [sp+30h] [bp-DCh]
  int v48; // [sp+34h] [bp-D8h]
  int v49; // [sp+38h] [bp-D4h]
  int v50; // [sp+3Ch] [bp-D0h]
  size_t n; // [sp+44h] [bp-C8h] BYREF
  unsigned __int8 v52[64]; // [sp+48h] [bp-C4h] BYREF
  _BYTE src[64]; // [sp+88h] [bp-84h] BYREF
  _DWORD v54[17]; // [sp+C8h] [bp-44h] BYREF

  n = 0;
  if ( (a2 & 1) == 0 )
  {
    v8 = *(_DWORD *)(a1 + 1004);
    *(_DWORD *)(a1 + 96) = 1;
    if ( v8 )
    {
      sub_D7A10();
      v47 = *(_DWORD *)(a1 + 1004);
    }
    else
    {
      v12 = sub_D7A5C();
      *(_DWORD *)(a1 + 1004) = v12;
      if ( !v12 )
      {
        v38 = 497;
        goto LABEL_100;
      }
      v47 = v12;
    }
    v46 = a1 + 1008;
    sub_7D42C(a1 + 1616);
    if ( (a2 & 0x12) == 0x12 )
      goto LABEL_5;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(a1 + 972) )
  {
    sub_D7A10();
    v47 = *(_DWORD *)(a1 + 972);
    goto LABEL_4;
  }
  v13 = sub_D7A5C();
  *(_DWORD *)(a1 + 972) = v13;
  if ( !v13 )
  {
    v38 = 481;
LABEL_100:
    v10 = 0;
    sub_95494((_DWORD *)a1, 80, 440, 65, (int)"ssl/tls13_enc.c", v38);
    goto LABEL_27;
  }
  v47 = v13;
LABEL_4:
  v46 = a1 + 976;
  sub_7D420(a1 + 1616);
  if ( (a2 & 0x12) == 0x12 )
    goto LABEL_5;
LABEL_13:
  if ( (a2 & 0x21) != 0x21 )
  {
    if ( a2 < 0 )
    {
      v39 = a1 + 268;
      v15 = sub_86508(a1);
      v42 = a1 + 524;
      v4 = sub_D8C78(v15);
      v5 = "s hs traffic";
      s = "SERVER_HANDSHAKE_TRAFFIC_SECRET";
    }
    else
    {
      v4 = 0;
      v42 = 0;
      v5 = "s ap traffic";
      s = "SERVER_TRAFFIC_SECRET_0";
      v39 = a1 + 332;
    }
    if ( (a2 & 0x40) != 0 )
    {
      v7 = 0;
      v41 = src;
      v6 = 0;
      goto LABEL_19;
    }
    v41 = src;
LABEL_8:
    v6 = sub_86508(a1);
    v7 = *(_DWORD *)(*(_DWORD *)(a1 + 124) + 560);
    if ( !sub_A9244(a1, 1) || !sub_8B6E8(a1, (int)src, 0x40u, &n) )
      goto LABEL_26;
LABEL_19:
    if ( v5 == "s ap traffic" )
    {
      v34 = n;
      v35 = (void *)(a1 + 588);
    }
    else
    {
      if ( v5 != "s hs traffic" )
      {
        if ( v5 == "c ap traffic" )
        {
          v24 = sub_86508(a1);
          if ( !sub_A5334((_DWORD *)a1, v24, v39, (int)"res master", 0xAu, (int)src, n, a1 + 396, n, 1) )
            goto LABEL_26;
        }
        v44 = 12;
        goto LABEL_23;
      }
      v34 = n;
      v35 = (void *)(a1 + 652);
    }
    v44 = 12;
    memcpy(v35, src, v34);
    goto LABEL_23;
  }
LABEL_5:
  if ( (a2 & 0x40) == 0 )
  {
    if ( a2 < 0 )
    {
      v39 = a1 + 268;
      v25 = sub_86508(a1);
      v42 = a1 + 460;
      v41 = (_BYTE *)(a1 + 652);
      v4 = sub_D8C78(v25);
      v5 = "c hs traffic";
      s = "CLIENT_HANDSHAKE_TRAFFIC_SECRET";
    }
    else
    {
      v4 = 0;
      v42 = 0;
      v39 = a1 + 332;
      v41 = (_BYTE *)(a1 + 588);
      v5 = "c ap traffic";
      s = "CLIENT_TRAFFIC_SECRET_0";
    }
    goto LABEL_8;
  }
  v16 = sub_8E1D8(*(_DWORD *)(a1 + 1140));
  v17 = sub_B6ECC(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 212), 3, 0, v52);
  v18 = v17;
  if ( v17 <= 0 )
  {
    sub_95494((_DWORD *)a1, 80, 440, 332, (int)"ssl/tls13_enc.c", 525);
    goto LABEL_26;
  }
  if ( *(_DWORD *)(a1 + 104) == 2 )
  {
    v31 = *(_DWORD *)(a1 + 3920);
    if ( v31 )
    {
      if ( !*(_DWORD *)(*(_DWORD *)(a1 + 1140) + 480) )
      {
        v32 = *(_DWORD *)(a1 + 1144);
        if ( !v32 || v31 != *(_DWORD *)(v32 + 480) )
        {
          v33 = 542;
LABEL_78:
          sub_95494((_DWORD *)a1, 80, 440, 68, (int)"ssl/tls13_enc.c", v33);
          goto LABEL_26;
        }
        v17 = sub_8E1D8(v32);
        v16 = v17;
      }
    }
  }
  if ( !v16 )
  {
    sub_95494((_DWORD *)a1, 80, 440, 219, (int)"ssl/tls13_enc.c", 549);
    goto LABEL_26;
  }
  v19 = sub_D14F4(v17);
  if ( !v19 )
  {
    sub_95494((_DWORD *)a1, 80, 440, 65, (int)"ssl/tls13_enc.c", 561);
    goto LABEL_26;
  }
  v20 = sub_87390(v16);
  v21 = sub_EAAB4(v20);
  v7 = sub_D99BC(v21);
  v22 = sub_864EC(*(_DWORD *)(v16 + 52));
  v6 = v22;
  if ( !v22 || !sub_D1520(v19, v22, 0) || !sub_D16D8(v19, *(_DWORD *)v52, v18) || (v41 = src, !sub_D16E4(v19, src, v54)) )
  {
    sub_95494((_DWORD *)a1, 80, 440, 68, (int)"ssl/tls13_enc.c", 570);
    sub_D1504(v19);
    goto LABEL_26;
  }
  v39 = a1 + 204;
  n = v54[0];
  sub_D1504(v19);
  if ( !sub_A5334((_DWORD *)a1, v6, a1 + 204, (int)"e exp master", 0xCu, (int)src, n, a1 + 908, n, 1) )
  {
    v33 = 584;
    goto LABEL_78;
  }
  if ( !sub_8C788(a1, "EARLY_EXPORTER_SECRET", (unsigned __int8 *)(a1 + 908), n) )
    goto LABEL_26;
  v44 = 11;
  v4 = 0;
  v5 = "c e traffic";
  v42 = 0;
  s = "CLIENT_EARLY_TRAFFIC_SECRET";
LABEL_23:
  v9 = sub_D8C78(v6);
  if ( v9 < 0 )
  {
    v14 = 377;
LABEL_35:
    sub_95494((_DWORD *)a1, 80, 514, 6, (int)"ssl/tls13_enc.c", v14);
    goto LABEL_25;
  }
  if ( !sub_A5334((_DWORD *)a1, v6, v39, (int)v5, v44, (int)v41, v9, (int)v52, v9, 1) )
  {
LABEL_25:
    sub_E07F8((int)v54, 0x40u);
    goto LABEL_26;
  }
  v45 = sub_D8AD0(v7);
  if ( (sub_D8928(v7) & 0xF0007) == 7 )
  {
    v23 = *(_DWORD *)(*(_DWORD *)(a1 + 124) + 528);
    if ( !v23 )
    {
      v23 = *(_DWORD *)(*(_DWORD *)(a1 + 1140) + 440);
      if ( !v23 )
      {
        v37 = *(_DWORD *)(a1 + 1144);
        if ( !v37 || (v23 = *(_DWORD *)(v37 + 440)) == 0 )
        {
          v14 = 404;
          goto LABEL_35;
        }
      }
    }
    if ( (*(_DWORD *)(v23 + 24) & 0x30000) != 0 )
    {
      v48 = 8;
      v49 = 12;
      v50 = 8;
    }
    else
    {
      v48 = 16;
      v49 = 12;
      v50 = 16;
    }
  }
  else
  {
    v48 = 0;
    v49 = sub_D8940(v7);
    v50 = 0;
  }
  if ( !sub_A5578((_DWORD *)a1, v6, (int)v52, (int)v54, v45) || !sub_A55A4((_DWORD *)a1, v6, (int)v52, v46, v49) )
    goto LABEL_25;
  if ( sub_D8440(v47, v7, 0, 0, 0, a2 & 2) <= 0
    || !sub_D83D4(v47, 9, v49, 0)
    || v50 && !sub_D83D4(v47, 17, v48, 0)
    || sub_D8440(v47, 0, 0, (int)v54, 0, -1) <= 0 )
  {
    v14 = 428;
    goto LABEL_35;
  }
  if ( v5 == "s ap traffic" )
  {
    memcpy((void *)(a1 + 780), v52, n);
    v36 = sub_86508(a1);
    if ( !sub_A5334((_DWORD *)a1, v36, v39, (int)"exp master", 0xAu, (int)v41, n, a1 + 844, n, 1)
      || !sub_8C788(a1, "EXPORTER_SECRET", (unsigned __int8 *)(a1 + 844), n) )
    {
      goto LABEL_26;
    }
    v26 = n;
  }
  else
  {
    v26 = n;
    if ( v5 == "c ap traffic" )
    {
      v40 = n;
      memcpy((void *)(a1 + 716), v52, n);
      v26 = v40;
    }
  }
  if ( !sub_8C788(a1, s, v52, v26) || v42 && (v27 = sub_86508(a1), !sub_A55D0((_DWORD *)a1, v27, (int)v52, v42, v4)) )
  {
LABEL_26:
    v10 = 0;
    goto LABEL_27;
  }
  v28 = *(_DWORD *)(a1 + 28);
  v29 = v28 == 0;
  if ( !v28 )
    v29 = v5 == "c e traffic";
  v30 = v29;
  v10 = 1;
  if ( v29 )
    *(_DWORD *)(a1 + 96) = 2;
  else
    *(_DWORD *)(a1 + 96) = v30;
LABEL_27:
  sub_E07F8((int)v52, 0x40u);
  return v10;
}
