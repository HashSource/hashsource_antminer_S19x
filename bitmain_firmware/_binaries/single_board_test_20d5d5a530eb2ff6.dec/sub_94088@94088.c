int __fastcall sub_94088(int a1, unsigned __int8 **a2)
{
  int v2; // r3
  unsigned int v4; // r3
  unsigned __int8 *v7; // r1
  unsigned int v8; // r3
  unsigned __int8 *v9; // r6
  unsigned int v10; // r4
  unsigned int v11; // r11
  int v12; // r3
  unsigned int v13; // r4
  int v14; // r5
  char *v15; // r6
  unsigned int v16; // r5
  unsigned int v17; // r4
  unsigned __int8 *v18; // r3
  unsigned __int8 *v19; // r8
  int (__fastcall *v20)(int, char *, unsigned int, _DWORD **); // r7
  _DWORD *v21; // r0
  _DWORD *v22; // r5
  size_t v23; // r2
  int v24; // r0
  int v25; // r3
  unsigned __int8 **v26; // r7
  int v27; // r5
  int v28; // r6
  int v29; // r4
  int v30; // r0
  unsigned int v31; // r1
  unsigned int v32; // r1
  unsigned __int8 *v33; // lr
  unsigned int v34; // r2
  int v35; // r3
  int v36; // r3
  _BOOL4 v37; // r3
  int v38; // r3
  unsigned int v39; // r0
  time_t v40; // r0
  int v41; // r0
  unsigned int v42; // r1
  unsigned int v43; // r3
  _DWORD *v44; // r0
  int v45; // r3
  unsigned int v46; // r1
  unsigned int v47; // r12
  unsigned int v48; // r2
  int v49; // r7
  int v50; // r0
  int v51; // r3
  int v52; // r7
  _BOOL4 v53; // r0
  int v54; // r3
  int v55; // [sp+18h] [bp-13Ch]
  int v56; // [sp+1Ch] [bp-138h]
  int v57; // [sp+20h] [bp-134h]
  int v58; // [sp+24h] [bp-130h]
  int v59; // [sp+28h] [bp-12Ch]
  int v60; // [sp+2Ch] [bp-128h]
  unsigned __int8 **v61; // [sp+30h] [bp-124h]
  int v62; // [sp+38h] [bp-11Ch]
  unsigned int n; // [sp+3Ch] [bp-118h]
  __int16 v64; // [sp+48h] [bp-10Ch] BYREF
  _DWORD *v65; // [sp+4Ch] [bp-108h] BYREF
  _BYTE v66[260]; // [sp+50h] [bp-104h] BYREF

  v2 = *(_DWORD *)(a1 + 1444);
  v65 = 0;
  if ( !(v2 << 30) )
    return 1;
  v4 = (unsigned int)a2[1];
  if ( v4 <= 1 || (v7 = *a2, v8 = v4 - 2, v9 = v7 + 2, v10 = v7[1] | (*v7 << 8), v10 > v8) )
  {
    v25 = 1068;
    goto LABEL_22;
  }
  *a2 = &v9[v10];
  a2[1] = (unsigned __int8 *)(v8 - v10);
  *(_DWORD *)(a1 + 1372) = 0;
  if ( !v10 )
    return 1;
  if ( v10 == 1 )
  {
LABEL_21:
    v25 = 1081;
LABEL_22:
    sub_95494(a1, 50, 505, 110, "ssl/statem/extensions_srvr.c", v25);
    return 0;
  }
  v11 = 0;
  v55 = 0;
  v60 = 0;
  v61 = a2;
  while ( 1 )
  {
    v12 = *v9;
    v13 = v10 - 2;
    v14 = v9[1];
    v15 = (char *)(v9 + 2);
    v16 = v14 | (v12 << 8);
    if ( v16 > v13 )
      goto LABEL_21;
    v17 = v13 - v16;
    v18 = (unsigned __int8 *)&v15[v16];
    if ( v17 <= 3 )
      goto LABEL_21;
    v19 = v18 + 4;
    v20 = *(int (__fastcall **)(int, char *, unsigned int, _DWORD **))(a1 + 1224);
    v56 = (unsigned __int8)v15[v16];
    v57 = v18[1];
    v58 = v18[2];
    v59 = v18[3];
    if ( v20 && !v20(a1, v15, v16, &v65) )
    {
      sub_95494(a1, 80, 505, 110, "ssl/statem/extensions_srvr.c", 1090);
      return 0;
    }
    v21 = v65;
    if ( v65 )
    {
LABEL_13:
      v22 = sub_8D794(v21, 0);
      if ( !v22 )
      {
        v51 = 1153;
        goto LABEL_74;
      }
      sub_8D6A4((int)v65);
      v23 = *(_DWORD *)(a1 + 1104);
      v65 = v22;
      memcpy(v22 + 92, (const void *)(a1 + 1108), v23);
      v22[91] = *(_DWORD *)(a1 + 1104);
      if ( !v11 )
        *(_DWORD *)(a1 + 1456) = 1;
      *(_DWORD *)(a1 + 1372) = 1;
      v60 = 1;
      goto LABEL_17;
    }
    v36 = *(_DWORD *)(a1 + 1220);
    v37 = v36 != 0;
    if ( v16 > 0x80 )
      v37 = 0;
    if ( v37 )
      break;
LABEL_35:
    v38 = *(_DWORD *)(a1 + 1260);
    if ( (v38 & 0x4000) == 0 && (!*(_DWORD *)(a1 + 3920) || (v38 & 0x1000000) != 0) )
    {
      v39 = sub_A376C(a1, (int)v15, v16, 0, 0, (int)&v65);
      if ( v39 == 3 )
        goto LABEL_81;
      if ( v39 <= 1 )
      {
        v54 = 1196;
        goto LABEL_83;
      }
      goto LABEL_40;
    }
    *(_DWORD *)(a1 + 1372) = 1;
    if ( !v16 )
    {
LABEL_81:
      v25 = 1189;
      goto LABEL_22;
    }
    if ( v16 == 32 && (v44 = (_DWORD *)sub_8DE24((_DWORD *)a1, v15, 0x20u)) != 0 )
    {
      v65 = v44;
      v39 = 5;
    }
    else
    {
      v39 = 4;
    }
LABEL_40:
    if ( ((v39 - 2) & 0xFFFFFFFD) == 0 )
      goto LABEL_19;
    if ( *(_DWORD *)(a1 + 3920)
      && (*(_DWORD *)(a1 + 1260) & 0x1000000) == 0
      && !sub_8DB08(*(_DWORD **)(a1 + 1504), (int)v65) )
    {
      sub_8D6A4((int)v65);
      v65 = 0;
      goto LABEL_19;
    }
    v40 = time(0);
    v22 = v65;
    if ( !v11 )
    {
      v41 = v40 - v65[108];
      if ( v41 <= v65[107] && v41 == 1000 * v41 / 0x3E8u )
      {
        v42 = 1000 * v41 + 1000;
        v43 = ((v57 << 16) | (v56 << 24) | v59 | (v58 << 8)) - v65[119];
        if ( v43 <= v42 && v42 <= v43 + 10000 )
          *(_DWORD *)(a1 + 1456) = 1;
      }
    }
LABEL_17:
    v55 = sub_864EC(*(_DWORD *)(v22[110] + 52));
    v24 = sub_864EC(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 124) + 528) + 52));
    if ( v55 == v24 )
    {
      v26 = v61;
      v27 = v24;
      goto LABEL_26;
    }
    sub_8D6A4((int)v65);
    v65 = 0;
    *(_DWORD *)(a1 + 1456) = 0;
    *(_DWORD *)(a1 + 1372) = 0;
LABEL_19:
    v10 = v17 - 4;
    ++v11;
    if ( !v10 )
    {
      v26 = v61;
      v27 = v55;
LABEL_26:
      if ( !v65 )
        return 1;
      v28 = (int)*v26;
      v29 = *(_DWORD *)(*(_DWORD *)(a1 + 108) + 4);
      v30 = sub_D8C78(v27);
      v31 = (unsigned int)v26[1];
      if ( v31 > 1 && (v32 = v31 - 2, v33 = *v26 + 2, v34 = (*v26)[1] | (**v26 << 8), v34 <= v32) )
      {
        v45 = (*v26)[1] | (**v26 << 8);
        v26[1] = (unsigned __int8 *)(v32 - v34);
        v46 = 0;
        *v26 = &v33[v34];
        do
        {
          v47 = v45 - 1;
          if ( v45 )
          {
            v49 = (int)(v33 + 1);
            v48 = *v33;
            ++v46;
            v33 += v48 + 1;
            v45 = v47 - v48;
            if ( v48 <= v47 )
              continue;
          }
          v35 = 1264;
          goto LABEL_30;
        }
        while ( v46 <= v11 );
        if ( v30 == v48 )
        {
          if ( sub_8F8E0((_DWORD *)a1, v27, *(_DWORD *)(*(_DWORD *)(a1 + 108) + 4), v28 - v29, v49, 0, v65, 0, v60) != 1 )
            goto LABEL_31;
          *(_DWORD *)(a1 + 1476) = v11;
          sub_8D6A4(*(_DWORD *)(a1 + 1140));
          *(_DWORD *)(a1 + 1140) = v65;
          return 1;
        }
        v35 = 1271;
      }
      else
      {
        v35 = 1257;
      }
LABEL_30:
      sub_95494(a1, 50, 505, 110, "ssl/statem/extensions_srvr.c", v35);
      goto LABEL_31;
    }
    v9 = v19;
    if ( v10 == 1 )
      goto LABEL_21;
  }
  CRYPTO_free(0, "ssl/statem/../packet_local.h", 482);
  v50 = sub_E9EF4(v15, v16, "ssl/statem/../packet_local.h", 485);
  v62 = v50;
  if ( !v50 )
  {
    v54 = 1104;
    goto LABEL_83;
  }
  n = (*(int (__fastcall **)(int, int))(a1 + 1220))(a1, v50);
  CRYPTO_free(v62, "ssl/statem/extensions_srvr.c", 1109);
  if ( n > 0x100 )
  {
    v54 = 1112;
    goto LABEL_83;
  }
  if ( !n )
  {
LABEL_67:
    v21 = v65;
    if ( v65 )
      goto LABEL_13;
    goto LABEL_35;
  }
  v64 = 275;
  v52 = sub_87388(a1, (int)&v64);
  if ( v52 )
  {
    v53 = sub_8D45C();
    v65 = (_DWORD *)v53;
    if ( !v53 || !sub_8AC6C(v53, v66, n) || !sub_8E1E0((int)v65, v52) || !sub_8E1D0(v65, 772) )
    {
      sub_E07F8((int)v66, n);
      v51 = 1139;
LABEL_74:
      sub_95494(a1, 80, 505, 68, "ssl/statem/extensions_srvr.c", v51);
LABEL_31:
      sub_8D6A4((int)v65);
      return 0;
    }
    sub_E07F8((int)v66, n);
    goto LABEL_67;
  }
  sub_E07F8((int)v66, n);
  v54 = 1126;
LABEL_83:
  sub_95494(a1, 80, 505, 68, "ssl/statem/extensions_srvr.c", v54);
  return 0;
}
