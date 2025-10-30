int __fastcall sub_ACA10(_DWORD *a1, int a2)
{
  unsigned int *v2; // r3
  int v3; // r10
  int v6; // r6
  unsigned int v7; // r11
  int v8; // r2
  unsigned int v9; // r2
  unsigned int v10; // r1
  int v11; // r9
  int v12; // r7
  int v13; // r3
  unsigned int v14; // r3
  size_t *v15; // r3
  size_t v16; // r8
  char *v17; // r11
  int v18; // r10
  int v19; // r0
  bool v20; // zf
  int v21; // r9
  int v22; // r10
  int v23; // r11
  unsigned int v25; // r2
  unsigned int v26; // r1
  int v27; // r3
  unsigned int v28; // r3
  int v29; // r9
  int v30; // r0
  bool v31; // zf
  size_t v32; // r3
  int v33; // r10
  int v34; // r3
  int v35; // r0
  int v36; // r0
  int v37; // r8
  int v38; // r0
  int v39; // r3
  int v40; // r3
  size_t *v41; // [sp+Ch] [bp-20h]
  int v42; // [sp+10h] [bp-1Ch]
  void *dest; // [sp+14h] [bp-18h]
  unsigned int v44; // [sp+18h] [bp-14h]
  unsigned int v45; // [sp+1Ch] [bp-10h]
  int v46; // [sp+20h] [bp-Ch]
  char *src; // [sp+24h] [bp-8h]

  v2 = (unsigned int *)a1[31];
  v3 = a2 & 1;
  v6 = v2[140];
  v7 = v2[144];
  v45 = v2[141];
  v44 = v2[142];
  v8 = a1[362];
  if ( (a2 & 1) != 0 )
  {
    if ( v8 )
      v9 = *v2 | 0x100;
    else
      v9 = *v2 & 0xFFFFFEFF;
    v10 = v2[132];
    v11 = 1;
    *v2 = v9;
    v12 = a1[243];
    v13 = a1[50];
    if ( (*(_DWORD *)(v10 + 52) & 0x10000) != 0 )
      v14 = v13 | 1;
    else
      v14 = v13 & 0xFFFFFFFE;
    a1[50] = v14;
    if ( v12 )
      goto LABEL_8;
    v38 = sub_D7A5C();
    v3 = v38;
    a1[243] = v38;
    if ( v38 )
    {
      sub_D7A10(v38);
      v11 = 0;
      v12 = a1[243];
LABEL_8:
      v42 = sub_8B19C(a1 + 248, 0);
      v3 = v42;
      if ( !v42 )
        return v3;
      sub_BB754(a1[250]);
      a1[250] = 0;
      if ( !v7 || (v3 = sub_BB6F8(*(_DWORD *)(v7 + 8)), (a1[250] = v3) != 0) )
      {
        if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) == 0 )
          sub_7D420((int)(a1 + 404));
        v15 = (size_t *)a1[31];
        dest = v15 + 2;
        v41 = v15 + 1;
        if ( !v11 )
          goto LABEL_14;
LABEL_46:
        sub_D7A10(v12);
        v15 = (size_t *)a1[31];
        goto LABEL_14;
      }
      v39 = 140;
LABEL_79:
      sub_95494(a1, 80, 209, 142, (int)"ssl/t1_enc.c", v39);
      return v3;
    }
    v40 = 120;
LABEL_82:
    sub_95494(a1, 80, 209, 65, (int)"ssl/t1_enc.c", v40);
    return v3;
  }
  a1[24] = 1;
  if ( v8 )
    v25 = *v2 | 0x400;
  else
    v25 = *v2 & 0xFFFFFBFF;
  v26 = v2[132];
  *v2 = v25;
  v12 = a1[251];
  v27 = a1[50];
  if ( (*(_DWORD *)(v26 + 52) & 0x10000) != 0 )
    v28 = v27 | 2;
  else
    v28 = v27 & 0xFFFFFFFD;
  a1[50] = v28;
  if ( !v12 || (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 )
  {
    v35 = sub_D7A5C();
    v12 = v35;
    a1[251] = v35;
    if ( !v35 )
    {
      v40 = 167;
      goto LABEL_82;
    }
    if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 )
    {
      v36 = sub_D14F4(v35);
      v42 = v36;
      if ( !v36 )
      {
        v40 = 176;
        goto LABEL_82;
      }
      a1[256] = v36;
      v29 = 0;
      goto LABEL_41;
    }
    v29 = 0;
  }
  else
  {
    v29 = 1;
  }
  v42 = sub_8B19C(a1 + 256, 0);
  if ( !v42 )
  {
    v40 = 185;
    goto LABEL_82;
  }
LABEL_41:
  sub_BB754(a1[249]);
  a1[249] = 0;
  if ( v7 )
  {
    v30 = sub_BB6F8(*(_DWORD *)(v7 + 8));
    a1[249] = v30;
    if ( !v30 )
    {
      v39 = 197;
      goto LABEL_79;
    }
  }
  if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) == 0 )
    sub_7D42C((int)(a1 + 404));
  v15 = (size_t *)a1[31];
  dest = v15 + 19;
  v41 = v15 + 18;
  if ( v29 )
    goto LABEL_46;
LABEL_14:
  v16 = v15[143];
  v17 = (char *)v15[139];
  *v41 = v16;
  v18 = sub_D8AD0(v6);
  if ( (sub_D8928(v6) & ((unsigned int)&loc_F0004 + 3)) == 6 || (sub_D8928(v6) & ((unsigned int)&loc_F0004 + 3)) == 7 )
  {
    v31 = a2 == 33;
    if ( a2 != 33 )
      v31 = a2 == 18;
    v21 = 4;
    if ( !v31 )
    {
LABEL_52:
      v32 = v18 + 2 * v16;
      v33 = v18 + v32 + v21;
      v46 = (int)&v17[v32];
      src = &v17[v33];
      v17 += v16;
      if ( (unsigned int)(v33 + v21) > *(_DWORD *)(a1[31] + 552) )
        goto LABEL_53;
      goto LABEL_21;
    }
  }
  else
  {
    v19 = sub_D8940(v6);
    v20 = a2 == 33;
    if ( a2 != 33 )
      v20 = a2 == 18;
    v21 = v19;
    if ( !v20 )
      goto LABEL_52;
  }
  v22 = 2 * v16 + 2 * v18;
  v46 = (int)&v17[2 * v16];
  src = &v17[v22];
  if ( (unsigned int)(v22 + 2 * v21) <= *(_DWORD *)(a1[31] + 552) )
  {
LABEL_21:
    memcpy(dest, v17, v16);
    if ( (sub_D8928(v6) & 0x200000) == 0 )
    {
      v23 = sub_DB104(v44, 0, dest, *v41);
      if ( !v23 || sub_D9454(v42, 0, v45) <= 0 )
      {
        sub_DA240(v23);
        v34 = 262;
        goto LABEL_54;
      }
      sub_DA240(v23);
    }
    if ( (sub_D8928(v6) & ((unsigned int)&loc_F0004 + 3)) == 6 )
    {
      if ( !sub_D8440(v12, v6, 0, v46, 0, a2 & 2) || !sub_D83D4(v12, 18, v21, src) )
      {
        v34 = 281;
        goto LABEL_54;
      }
    }
    else if ( (sub_D8928(v6) & ((unsigned int)&loc_F0004 + 3)) == 7 )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(a1[31] + 528) + 24) & 0x30000) != 0 )
        v37 = 8;
      else
        v37 = 16;
      if ( !sub_D8440(v12, v6, 0, 0, 0, a2 & 2)
        || !sub_D83D4(v12, 9, 12, 0)
        || !sub_D83D4(v12, 17, v37, 0)
        || !sub_D83D4(v12, 18, v21, src)
        || !sub_D8440(v12, 0, 0, v46, 0, -1) )
      {
        v34 = 297;
        goto LABEL_54;
      }
    }
    else if ( !sub_D8440(v12, v6, 0, v46, src, a2 & 2) )
    {
      v34 = 303;
      goto LABEL_54;
    }
    if ( (sub_D8928(v6) & 0x200000) != 0 && *v41 && !sub_D83D4(v12, 23, *v41, dest) )
    {
      v34 = 312;
      goto LABEL_54;
    }
    v3 = 1;
    a1[24] = 0;
    return v3;
  }
LABEL_53:
  v34 = 248;
LABEL_54:
  sub_95494(a1, 80, 209, 68, (int)"ssl/t1_enc.c", v34);
  return 0;
}
