bool __fastcall tls_construct_client_hello(_DWORD *a1, int a2)
{
  _DWORD *v4; // r6
  int v5; // r0
  int v6; // r1
  _BYTE *v7; // r2
  _BYTE *v8; // r3
  int v9; // t1
  int v10; // r1
  unsigned int v11; // r2
  int v12; // r3
  int v13; // r6
  int v15; // r3
  _DWORD *v16; // r3
  size_t v17; // r6
  int v18; // r8
  int v19; // r1
  int v20; // r2
  unsigned int v21; // r10
  int v22; // r3
  unsigned int v23; // r9
  int v24; // r3
  int v25; // r6
  _BOOL4 v26; // r5
  int v27; // r11
  _BOOL4 v28; // r0
  _DWORD *v29; // r7
  int v30; // r3
  int v31; // r3
  int v32; // r3
  int v33; // r3
  _BOOL4 v34; // r11
  int v35; // r5
  int v36; // r3
  int v37; // r2
  int v38; // r5
  int v39; // r1
  int v40; // r0
  int v41; // r3
  int v42; // r9
  int v43; // r7
  int v44; // r1
  __int64 v45; // r0
  int v46; // r3
  int v47; // [sp+Ch] [bp-10h]
  _DWORD v48[2]; // [sp+14h] [bp-8h] BYREF

  v4 = (_DWORD *)a1[285];
  v5 = sub_9D5AC();
  if ( v5 )
  {
    sub_95494(a1, 80, 487, v5, (int)"ssl/statem/statem_clnt.c", 1114);
    return 0;
  }
  if ( !v4 || !sub_9C7FC(a1, *v4, 0) || !sub_8E320(v4) )
  {
    v6 = a1[275];
    if ( v6 )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) == 0 )
        goto LABEL_10;
      v7 = (_BYTE *)(a1[31] + 172);
      goto LABEL_7;
    }
    v13 = sub_8D964((int)a1, 0);
    if ( !v13 )
      return v13;
  }
  v7 = (_BYTE *)(a1[31] + 172);
  if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) == 0 )
  {
    if ( !a1[275] )
    {
LABEL_27:
      v13 = 0;
      if ( sub_82D4C((int)a1, 0, v7, 0x20u, 0) <= 0 )
      {
        v15 = 1151;
        goto LABEL_29;
      }
    }
    goto LABEL_10;
  }
LABEL_7:
  v8 = v7 - 1;
  while ( 1 )
  {
    v9 = (unsigned __int8)*++v8;
    v6 = v9;
    if ( v9 )
      break;
    if ( v7 + 31 == v8 )
      goto LABEL_27;
  }
LABEL_10:
  if ( !sub_A8450(a2, v6, a1[321], (int)a1[321] >> 31, 2) || !sub_A851C(a2) )
  {
    v12 = 1191;
    goto LABEL_21;
  }
  if ( !a1[8] )
  {
    v16 = (_DWORD *)a1[285];
    if ( *v16 != 772 )
    {
      v17 = v16[82];
      if ( *a1 == 772 )
      {
        a1[298] = v17;
        memcpy(a1 + 290, v16 + 83, v17);
      }
      if ( !sub_A8398(a2, 1) )
        goto LABEL_39;
      if ( !v17 )
        goto LABEL_15;
      goto LABEL_38;
    }
  }
  if ( *a1 == 772 && (a1[315] & 0x100000) != 0 )
  {
    v13 = a1[275];
    a1[298] = 32;
    if ( !v13 && sub_F497C(a1 + 290, 32) <= 0 )
    {
      v15 = 1207;
      goto LABEL_29;
    }
    if ( !sub_A8398(a2, 1) )
      goto LABEL_39;
LABEL_38:
    if ( !sub_A851C(a2) )
      goto LABEL_39;
    goto LABEL_15;
  }
  if ( !sub_A8398(a2, 1) )
  {
LABEL_39:
    v12 = 1226;
    goto LABEL_21;
  }
LABEL_15:
  if ( !sub_A7EDC(a2) )
    goto LABEL_39;
  if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 )
  {
    v10 = a1[32];
    v11 = *(_DWORD *)(v10 + 256);
    if ( v11 > 0x100 || !sub_A8544(a2, v10, v11, 1) )
    {
      v12 = 1236;
LABEL_21:
      sub_95494(a1, 80, 487, 68, (int)"ssl/statem/statem_clnt.c", v12);
      return 0;
    }
  }
  v13 = sub_A8398(a2, 2);
  if ( !v13 )
  {
    v15 = 1244;
    goto LABEL_29;
  }
  v18 = sub_89910((int)a1);
  v47 = a1[379];
  if ( !sub_A3C0C(a1) )
  {
    sub_95494(a1, 80, 425, 191, (int)"ssl/statem/statem_clnt.c", 3745);
    return 0;
  }
  if ( !v18 )
  {
    v46 = 3751;
LABEL_106:
    sub_95494(a1, 80, 425, 68, (int)"ssl/statem/statem_clnt.c", v46);
    return 0;
  }
  v19 = 65534;
  v20 = a1[316];
  v21 = 65530;
  v22 = 65532;
  if ( v47 )
  {
    v21 = 65532;
    v22 = 65534;
  }
  v23 = 0;
  if ( (v20 & 0x80) == 0 )
    v21 = v22;
  v24 = a2;
  v25 = 0;
  v26 = 0;
  v27 = v24;
  while ( 1 )
  {
    v28 = v25 < sub_10C010(v18, v19, v20);
    if ( v23 >= v21 )
      v28 = 0;
    if ( !v28 )
      break;
    v29 = (_DWORD *)sub_10C01C(v18, v25);
    if ( sub_A33DC(a1, v29, 65537, 0) )
      goto LABEL_48;
    if ( !(*(int (__fastcall **)(_DWORD *, int, _DWORD *))(a1[1] + 80))(v29, v27, v48) )
    {
      v46 = 3786;
      goto LABEL_106;
    }
    if ( !v26 )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) == 0 )
      {
        v20 = v29[9];
        v32 = *(_DWORD *)(a1[31] + 684);
        if ( v20 >= v32 )
          v26 = v32 >= v29[8];
        goto LABEL_61;
      }
      v20 = v29[11];
      v30 = a1[31];
      if ( v20 == 256 )
      {
        v19 = *(_DWORD *)(v30 + 684);
        if ( v19 == 256 )
        {
          v38 = v29[10];
          if ( v38 == 256 )
            v38 = 65280;
          v31 = 65280;
          goto LABEL_78;
        }
        v31 = *(_DWORD *)(v30 + 684);
        v20 = 65280;
      }
      else
      {
        v31 = *(_DWORD *)(v30 + 684);
        if ( v31 == 256 )
          v19 = 65280;
        else
          v19 = v31;
      }
      if ( v19 >= v20 )
      {
        v38 = v29[10];
        if ( v38 == 256 )
          v38 = 65280;
        if ( v31 == 256 )
          v31 = 65280;
LABEL_78:
        v26 = v31 <= v38;
      }
    }
LABEL_61:
    v23 += v48[0];
LABEL_48:
    ++v25;
  }
  v33 = v27;
  v34 = v26;
  v35 = v33;
  v36 = !v34;
  if ( !v23 )
    v36 |= 1u;
  if ( v36 )
  {
    sub_95494(a1, 80, 425, 181, (int)"ssl/statem/statem_clnt.c", 3808);
    if ( !v34 )
      sub_D1240(1, "No ciphers enabled for max supported SSL/TLS version", v37);
    return 0;
  }
  if ( !v47 && !(*(int (__fastcall **)(void *, int, _DWORD *))(a1[1] + 80))(&unk_21F5E0, v35, v48) )
  {
    v46 = 3824;
    goto LABEL_106;
  }
  if ( (a1[316] & 0x80) != 0 && !(*(int (__fastcall **)(void *, int, _DWORD *))(a1[1] + 80))(&unk_21F620, v35, v48) )
  {
    v46 = 3834;
    goto LABEL_106;
  }
  v13 = sub_A7EDC(v35);
  if ( !v13 )
  {
    v15 = 1254;
    goto LABEL_29;
  }
  v13 = sub_A8398(v35, 1);
  if ( !v13 )
  {
    v15 = 1261;
    goto LABEL_29;
  }
  if ( sub_9C7D8(a1)
    && (v40 = *(_DWORD *)(a1[308] + 156)) != 0
    && ((v41 = *(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48), (v41 & 8) != 0) || *(int *)(a1[31] + 684) < 772)
    && (v42 = sub_10C010(v40, v39, v41 << 28), v42 > 0) )
  {
    v43 = 0;
    while ( 1 )
    {
      v44 = v43++;
      v45 = sub_10C01C(*(_DWORD *)(a1[308] + 156), v44);
      if ( !sub_A8450(v35, HIDWORD(v45), *(_DWORD *)v45, *(int *)v45 >> 31, 1) )
        break;
      if ( v43 == v42 )
        goto LABEL_101;
    }
    v13 = 0;
    v15 = 1274;
LABEL_29:
    sub_95494(a1, 80, 487, 68, (int)"ssl/statem/statem_clnt.c", v15);
  }
  else
  {
LABEL_101:
    if ( !sub_A8450(v35, 1, 0, 0, 1) || !sub_A7EDC(v35) )
    {
      v12 = 1283;
      goto LABEL_21;
    }
    return sub_8F72C(a1, v35, 128, 0, 0) != 0;
  }
  return v13;
}
