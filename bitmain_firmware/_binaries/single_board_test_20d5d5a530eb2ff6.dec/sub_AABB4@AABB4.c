int __fastcall sub_AABB4(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r5
  int v4; // r7
  int v5; // r7
  int v6; // r7
  int v7; // r7
  int v8; // r7
  int v9; // r7
  int v10; // r7
  int v11; // r7
  int v12; // r7
  int v13; // r1
  int v14; // r0
  int v16; // r0
  int v17; // r3
  int v18; // r0
  int v19; // r0
  int v20; // r3
  int v21; // r0
  int v22; // r3
  int v23; // r0
  int v24; // r0
  int v25; // r3
  int v26; // r0
  int v27; // r0
  int v28; // r3
  int v29; // r0
  int v30; // r0
  int v31; // r3
  int v32; // r0
  int v33; // r0
  int v34; // r3
  int v35; // r0
  int v36; // r0
  int v37; // r3
  int v38; // r0
  int v39; // r0
  int v40; // r3
  int v41; // r0
  int v42; // r0
  int v43; // r3

  v2 = a1[3];
  if ( v2 )
  {
    v3 = *(_DWORD **)(v2 + 192);
  }
  else
  {
    v17 = a1[4];
    if ( !v17 )
    {
      v13 = a1[21];
      if ( v13 )
        goto LABEL_39;
      return 1;
    }
    v3 = *(_DWORD **)(v17 + 1028);
  }
  if ( !v3 || (*a1 & 0x40) == 0 )
    goto LABEL_23;
  v4 = a1[6];
  if ( v4 && !v3[6] && (*a1 & 0x20) != 0 )
  {
    if ( v2 )
    {
      v21 = sub_ABF08(v2, a1[6], 1);
      v22 = a1[4];
      if ( !v22 )
        goto LABEL_44;
    }
    else
    {
      v22 = a1[4];
      if ( !v22 )
        goto LABEL_7;
    }
    v21 = sub_AB988(v22, v4, 1);
LABEL_44:
    if ( v21 <= 0 )
      return 0;
  }
LABEL_7:
  v5 = a1[7];
  if ( !v5 || v3[11] || (*a1 & 0x20) == 0 )
    goto LABEL_9;
  v26 = a1[3];
  if ( v26 )
  {
    v27 = sub_ABF08(v26, a1[7], 1);
    v28 = a1[4];
    if ( !v28 )
      goto LABEL_56;
  }
  else
  {
    v28 = a1[4];
    if ( !v28 )
      goto LABEL_9;
  }
  v27 = sub_AB988(v28, v5, 1);
LABEL_56:
  if ( v27 <= 0 )
    return 0;
LABEL_9:
  v6 = a1[8];
  if ( !v6 || v3[16] || (*a1 & 0x20) == 0 )
    goto LABEL_11;
  v29 = a1[3];
  if ( v29 )
  {
    v30 = sub_ABF08(v29, a1[8], 1);
    v31 = a1[4];
    if ( !v31 )
      goto LABEL_62;
  }
  else
  {
    v31 = a1[4];
    if ( !v31 )
      goto LABEL_11;
  }
  v30 = sub_AB988(v31, v6, 1);
LABEL_62:
  if ( v30 <= 0 )
    return 0;
LABEL_11:
  v7 = a1[9];
  if ( !v7 || v3[21] || (*a1 & 0x20) == 0 )
    goto LABEL_13;
  v32 = a1[3];
  if ( v32 )
  {
    v33 = sub_ABF08(v32, a1[9], 1);
    v34 = a1[4];
    if ( !v34 )
      goto LABEL_68;
  }
  else
  {
    v34 = a1[4];
    if ( !v34 )
      goto LABEL_13;
  }
  v33 = sub_AB988(v34, v7, 1);
LABEL_68:
  if ( v33 <= 0 )
    return 0;
LABEL_13:
  v8 = a1[10];
  if ( !v8 || v3[26] || (*a1 & 0x20) == 0 )
    goto LABEL_15;
  v35 = a1[3];
  if ( v35 )
  {
    v36 = sub_ABF08(v35, a1[10], 1);
    v37 = a1[4];
    if ( !v37 )
      goto LABEL_74;
  }
  else
  {
    v37 = a1[4];
    if ( !v37 )
      goto LABEL_15;
  }
  v36 = sub_AB988(v37, v8, 1);
LABEL_74:
  if ( v36 <= 0 )
    return 0;
LABEL_15:
  v9 = a1[11];
  if ( !v9 || v3[31] || (*a1 & 0x20) == 0 )
    goto LABEL_17;
  v38 = a1[3];
  if ( v38 )
  {
    v39 = sub_ABF08(v38, a1[11], 1);
    v40 = a1[4];
    if ( !v40 )
      goto LABEL_80;
  }
  else
  {
    v40 = a1[4];
    if ( !v40 )
      goto LABEL_17;
  }
  v39 = sub_AB988(v40, v9, 1);
LABEL_80:
  if ( v39 <= 0 )
    return 0;
LABEL_17:
  v10 = a1[12];
  if ( !v10 || v3[36] || (*a1 & 0x20) == 0 )
    goto LABEL_19;
  v41 = a1[3];
  if ( v41 )
  {
    v42 = sub_ABF08(v41, a1[12], 1);
    v43 = a1[4];
    if ( !v43 )
      goto LABEL_86;
  }
  else
  {
    v43 = a1[4];
    if ( !v43 )
      goto LABEL_19;
  }
  v42 = sub_AB988(v43, v10, 1);
LABEL_86:
  if ( v42 <= 0 )
    return 0;
LABEL_19:
  v11 = a1[13];
  if ( v11 && !v3[41] && (*a1 & 0x20) != 0 )
  {
    v23 = a1[3];
    if ( v23 )
    {
      v24 = sub_ABF08(v23, a1[13], 1);
      v25 = a1[4];
      if ( !v25 )
        goto LABEL_50;
      goto LABEL_49;
    }
    v25 = a1[4];
    if ( v25 )
    {
LABEL_49:
      v24 = sub_AB988(v25, v11, 1);
LABEL_50:
      if ( v24 <= 0 )
        return 0;
    }
  }
  v12 = a1[14];
  if ( !v12 || v3[46] || (*a1 & 0x20) == 0 )
    goto LABEL_23;
  v18 = a1[3];
  if ( v18 )
  {
    v19 = sub_ABF08(v18, a1[14], 1);
    v20 = a1[4];
    if ( !v20 )
      goto LABEL_37;
    goto LABEL_36;
  }
  v20 = a1[4];
  if ( !v20 )
  {
LABEL_23:
    v13 = a1[21];
    if ( v13 )
    {
      v14 = a1[4];
      if ( v14 )
      {
        sub_84BC4(v14, v13);
LABEL_26:
        a1[21] = 0;
        return 1;
      }
      v16 = a1[3];
      if ( v16 )
      {
        sub_84BE8(v16, v13);
        a1[21] = 0;
        return 1;
      }
LABEL_39:
      sub_10BFDC(v13, X509_NAME_free);
      goto LABEL_26;
    }
    return 1;
  }
LABEL_36:
  v19 = sub_AB988(v20, v12, 1);
LABEL_37:
  if ( v19 > 0 )
    goto LABEL_23;
  return 0;
}
