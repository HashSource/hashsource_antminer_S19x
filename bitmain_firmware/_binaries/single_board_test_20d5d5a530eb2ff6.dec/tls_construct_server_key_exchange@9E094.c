int __fastcall tls_construct_server_key_exchange(_DWORD *a1, int a2)
{
  int v2; // r3
  int v5; // r10
  int v6; // r9
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r7
  const char *v11; // r6
  size_t v12; // r0
  int v13; // r3
  int v14; // r11
  _DWORD *v15; // r3
  int v16; // r8
  int v17; // r3
  int *v19; // r6
  int v20; // r8
  int v21; // r0
  int v22; // r0
  int v23; // r1
  int v24; // r6
  int v25; // r1
  int v26; // r0
  int v27; // lr
  int v28; // r6
  int v29; // r0
  int v30; // r3
  bool v31; // zf
  size_t v32; // r6
  int v33; // r6
  int (__fastcall *v34)(_DWORD *, _DWORD, int); // r6
  int v35; // r0
  int v36; // r0
  int v37; // r2
  int v38; // r0
  int v39; // r8
  int v40; // r0
  int v41; // r8
  int v42; // r0
  int v43; // r3
  int v44; // r0
  int v45; // r3
  int v46; // r0
  int v47; // r3
  int v48; // r2
  int v49; // r3
  size_t v50; // r3
  int v51; // [sp+0h] [bp-5Ch]
  int v52; // [sp+8h] [bp-54h]
  int v53; // [sp+Ch] [bp-50h]
  int v54; // [sp+10h] [bp-4Ch]
  size_t n; // [sp+1Ch] [bp-40h]
  size_t na; // [sp+1Ch] [bp-40h]
  int v57; // [sp+24h] [bp-38h] BYREF
  int v58; // [sp+28h] [bp-34h] BYREF
  size_t v59; // [sp+2Ch] [bp-30h] BYREF
  int v60; // [sp+30h] [bp-2Ch] BYREF
  int v61; // [sp+34h] [bp-28h] BYREF
  int v62; // [sp+38h] [bp-24h] BYREF
  int v63; // [sp+3Ch] [bp-20h] BYREF
  int v64; // [sp+40h] [bp-1Ch] BYREF
  void *s; // [sp+44h] [bp-18h] BYREF
  int v66; // [sp+48h] [bp-14h] BYREF
  int v67; // [sp+4Ch] [bp-10h] BYREF
  int v68; // [sp+50h] [bp-Ch] BYREF
  int v69; // [sp+54h] [bp-8h]

  v2 = a1[31];
  v57 = 0;
  v5 = *(_DWORD *)(v2 + 608);
  v6 = sub_D14F4(a1);
  v58 = 0;
  if ( !sub_A820C(a2, &v60) )
  {
    v14 = 0;
    sub_95494(a1, 80, 492, 68, (int)"ssl/statem/statem_srvr.c", 2508);
    goto LABEL_21;
  }
  if ( !v6 )
  {
    v14 = 0;
    sub_95494(a1, 80, 492, 65, (int)"ssl/statem/statem_srvr.c", 2514);
    goto LABEL_21;
  }
  v8 = a1[31];
  v66 = 0;
  v9 = *(_DWORD *)(v8 + 528);
  v10 = *(_DWORD *)(v9 + 16);
  v69 = 0;
  v68 = 0;
  v67 = 0;
  if ( (v10 & 0x48) == 0 )
  {
    v14 = v10 & 0x102;
    if ( (v10 & 0x102) != 0 )
    {
      v15 = (_DWORD *)a1[257];
      if ( v15[3] )
      {
        v28 = sub_A4C80(a1);
        v29 = EVP_PKEY_new();
        v31 = v28 == 0;
        if ( v28 )
          v31 = v29 == 0;
        v14 = v29;
        if ( v31 )
        {
          sub_BFB8C(v28);
          v17 = 2540;
          goto LABEL_19;
        }
        sub_D9F44(v29, 28, v28, v30);
        v16 = v14;
      }
      else
      {
        v16 = v15[1];
        v14 = 0;
        if ( !v16 )
        {
          v34 = (int (__fastcall *)(_DWORD *, _DWORD, int))v15[2];
          if ( !v34 )
          {
            v14 = 0;
            sub_95494(a1, 80, 492, 171, (int)"ssl/statem/statem_srvr.c", 2562);
            goto LABEL_21;
          }
          v35 = v34(a1, v15[1], 1024);
          v14 = sub_832EC(v35);
          v16 = v14;
          if ( !v14 )
          {
            v17 = 2554;
            goto LABEL_19;
          }
        }
      }
      sub_D9AE4(v16);
      v51 = v16;
      if ( !sub_854EC((int)a1, (int)&loc_40006 + 1) )
      {
        sub_95494(a1, 40, 492, 394, (int)"ssl/statem/statem_srvr.c", 2569);
        goto LABEL_21;
      }
      if ( *(_DWORD *)(a1[31] + 532) )
      {
        v17 = 2575;
      }
      else
      {
        v52 = a1[31];
        v36 = sub_82F68(v16);
        v37 = a1[31];
        *(_DWORD *)(v52 + 532) = v36;
        v38 = *(_DWORD *)(v37 + 532);
        if ( !v38 )
        {
          sub_95494(a1, 80, 0, 68, (int)"ssl/statem/statem_srvr.c", 2581);
          goto LABEL_21;
        }
        v39 = sub_DA134(v38);
        if ( v39 )
        {
          v53 = 0;
          sub_DA240(v14);
          sub_BFDA0(v39, &v66, 0, &v67, v51);
          sub_BFE28(v39, &v68, 0);
          v54 = 0;
          v9 = *(_DWORD *)(a1[31] + 528);
          goto LABEL_5;
        }
        v17 = 2589;
      }
    }
    else
    {
      if ( (v10 & 0x84) == 0 )
      {
        v14 = v10 & 0x20;
        if ( (v10 & 0x20) == 0 )
        {
          sub_95494(a1, 80, 492, 250, (int)"ssl/statem/statem_srvr.c", 2663);
          goto LABEL_21;
        }
        if ( !a1[392] || (v7 = a1[393]) == 0 || (v26 = a1[394]) == 0 || (v27 = a1[395]) == 0 )
        {
          sub_95494(a1, 80, 492, 358, (int)"ssl/statem/statem_srvr.c", 2651);
          goto LABEL_12;
        }
        v66 = a1[392];
        v53 = 0;
        v67 = v7;
        v54 = 0;
        v68 = v26;
        v69 = v27;
        goto LABEL_5;
      }
      if ( !*(_DWORD *)(v8 + 532) )
      {
        v40 = sub_A2838(a1, -2);
        v53 = v40;
        if ( !v40 )
        {
          v14 = 0;
          sub_95494(a1, 40, 492, 315, (int)"ssl/statem/statem_srvr.c", 2615);
          goto LABEL_21;
        }
        v41 = a1[31];
        v42 = sub_82FA8((int)a1, v40);
        v43 = a1[31];
        *(_DWORD *)(v41 + 532) = v42;
        v44 = *(_DWORD *)(v43 + 532);
        if ( !v44 )
        {
          v14 = 0;
          goto LABEL_21;
        }
        v54 = sub_DA760(v44, &v57);
        if ( !v54 )
        {
          v14 = 0;
          sub_95494(a1, 80, 492, 16, (int)"ssl/statem/statem_srvr.c", 2630);
          goto LABEL_21;
        }
        v45 = a1[31];
        v66 = 0;
        v67 = 0;
        v68 = 0;
        v69 = 0;
        v9 = *(_DWORD *)(v45 + 528);
        goto LABEL_5;
      }
      v17 = 2606;
    }
LABEL_19:
    sub_95494(a1, 80, 492, 68, (int)"ssl/statem/statem_srvr.c", v17);
    goto LABEL_21;
  }
  v53 = 0;
  v54 = 0;
LABEL_5:
  if ( (*(_DWORD *)(v9 + 20) & 0x44) != 0 )
  {
    v5 = 0;
  }
  else if ( (*(_DWORD *)(v9 + 16) & 0x1C8) != 0 )
  {
    v5 = 0;
  }
  else if ( !v5 )
  {
    v14 = 0;
    sub_95494(a1, 50, 492, 68, (int)"ssl/statem/statem_srvr.c", 2672);
    goto LABEL_21;
  }
  if ( (v10 & 0x1C8) != 0 )
  {
    if ( (v11 = *(const char **)(a1[257] + 260), (v12 = (size_t)v11) != 0) && (v12 = strlen(v11), v12 > 0x80)
      || !sub_A8544(a2, v11, v12, 2) )
    {
      v13 = 2690;
      goto LABEL_11;
    }
  }
  v19 = &v66;
  v20 = 0;
  while ( 1 )
  {
    if ( !*v19 )
    {
LABEL_38:
      if ( (v10 & 0x84) != 0 )
      {
        if ( !sub_A8450(a2, v7, 3, 0, 1)
          || !sub_A8450(a2, v25, 0, 0, 1)
          || !sub_A8450(a2, v53, v53, v53 >> 31, 1)
          || !sub_A8544(a2, v57, v54, 1) )
        {
          v13 = 2759;
          goto LABEL_11;
        }
        CRYPTO_free(v57, "ssl/statem/statem_srvr.c", 2762);
        v57 = 0;
      }
      if ( v5 )
      {
        v24 = *(_DWORD *)(*(_DWORD *)(a1[31] + 612) + 4);
        if ( !v24 || !sub_A2D04(v5, &v61) )
        {
          v13 = 2779;
          goto LABEL_11;
        }
        if ( !sub_A821C(a2, &v59) )
        {
          v13 = 2786;
          goto LABEL_11;
        }
        if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 2) != 0
          && !sub_A8450(a2, 2, *(unsigned __int16 *)(v5 + 4), 0, 2) )
        {
          v13 = 2793;
          goto LABEL_11;
        }
        s = (void *)sub_D9AF8(v24);
        if ( !sub_A8628(a2, s, &v62, 2) || sub_D9454(v6, &v58, v61) <= 0 )
        {
          v13 = 2807;
          goto LABEL_11;
        }
        if ( *(_DWORD *)(v5 + 16) == 912
          && (sub_F89C8(v58, -1, 4097, 6, 0) <= 0 || sub_F89C8(v58, 24, 4098, -1, 0) <= 0) )
        {
          sub_95494(a1, 80, 492, 6, (int)"ssl/statem/statem_srvr.c", 2815);
          goto LABEL_12;
        }
        v32 = sub_9D99C(a1, &v64, (const void *)(v60 + *(_DWORD *)(a1[27] + 4)), v59);
        if ( !v32 )
          goto LABEL_12;
        v33 = sub_D97AC(v6, v62, &s, v64, v32);
        CRYPTO_free(v64, "ssl/statem/statem_srvr.c", 2827);
        if ( v33 <= 0 || !sub_A8420(a2, s, &v63, 2) || v62 != v63 )
        {
          v13 = 2832;
          goto LABEL_11;
        }
      }
      sub_D1504(v6);
      return 1;
    }
    if ( v20 != 2 )
    {
      if ( !sub_A8398(a2, 2) )
        goto LABEL_82;
      goto LABEL_33;
    }
    if ( (v10 & 0x20) != 0 )
    {
      if ( !sub_A8398(a2, 1) )
        goto LABEL_82;
    }
    else if ( !sub_A8398(a2, 2) )
    {
LABEL_82:
      v13 = 2710;
      goto LABEL_11;
    }
    if ( (v10 & 0x102) == 0 )
      goto LABEL_33;
    n = sub_B85BC(v66);
    v46 = sub_B85BC(v68);
    v47 = n + 7;
    if ( (int)(n + 7) < 0 )
      v47 = n + 14;
    v48 = v46 + 7;
    v49 = v47 >> 3;
    if ( v46 + 7 < 0 )
      v48 = v46 + 14;
    v50 = v49 - (v48 >> 3);
    if ( !v50 )
      goto LABEL_33;
    na = v50;
    if ( !sub_A82B8(a2, v50, &s) )
      break;
    memset(s, 0, na);
LABEL_33:
    v21 = *v19++;
    v22 = sub_B85BC(v21);
    v23 = v22 + 14;
    if ( v22 + 7 >= 0 )
      v23 = v22 + 7;
    if ( !sub_A82B8(a2, v23 >> 3, &s) || !sub_A7EDC(a2) )
    {
      v13 = 2738;
      goto LABEL_11;
    }
    ++v20;
    sub_B8648(*(v19 - 1), s);
    if ( v20 == 4 )
      goto LABEL_38;
  }
  v13 = 2727;
LABEL_11:
  sub_95494(a1, 80, 492, 68, (int)"ssl/statem/statem_srvr.c", v13);
LABEL_12:
  v14 = 0;
LABEL_21:
  sub_DA240(v14);
  CRYPTO_free(v57, "ssl/statem/statem_srvr.c", 2844);
  sub_D1504(v6);
  return 0;
}
