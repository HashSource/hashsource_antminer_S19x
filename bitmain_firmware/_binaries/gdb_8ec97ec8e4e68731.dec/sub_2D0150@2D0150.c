int __fastcall sub_2D0150(int a1, int *a2, int a3, const char *a4)
{
  unsigned int v5; // r1
  unsigned int v9; // r3
  bool v10; // cc
  const char *v11; // r3
  size_t v12; // r5
  char *v13; // r0
  char *v14; // r7
  _DWORD *v15; // r5
  int v16; // r3
  int v17; // r0
  int v18; // r12
  unsigned int v19; // r2
  int v20; // r7
  unsigned int v21; // r0
  int v22; // r0
  int v23; // r3
  int v24; // r3
  const char *v26; // r3
  int v27; // r5
  size_t v28; // r10
  char *v29; // r0
  char *v30; // r11
  int v31; // r0
  _DWORD *v32; // r10
  int v33; // r3
  int v34; // r0
  int v35; // r12
  int v36; // r1
  int v37; // r0
  int v38; // r3
  bool v39; // zf
  int v40; // r3
  int v41; // r2
  int v42; // r1
  unsigned int v43; // r2
  int v44; // r2
  char s[68]; // [sp+8h] [bp-44h] BYREF

  v5 = a2[6];
  v9 = a2[5];
  if ( v5 )
  {
    v10 = v9 != 0;
    if ( v9 )
      v10 = v5 > v9;
    v5 = v10;
    if ( v10 )
    {
      v26 = "a";
      v27 = 1;
      goto LABEL_21;
    }
    if ( !v9 )
      goto LABEL_9;
  }
  else if ( !v9 )
  {
    return 1;
  }
  v26 = "";
  v27 = v5;
LABEL_21:
  sprintf(s, "%s%d%s", a4, a3, v26);
  v28 = strlen(s) + 1;
  v29 = (char *)sub_2ACBF4(a1, v28);
  v30 = v29;
  if ( !v29 )
    return 0;
  memcpy(v29, s, v28);
  v31 = sub_2ADCC0(a1, v30);
  v32 = (_DWORD *)v31;
  if ( !v31 )
    return 0;
  v33 = *(_DWORD *)(v31 + 20);
  v34 = a2[5];
  v35 = a2[3];
  v32[8] = a2[4];
  v36 = a2[2];
  v32[7] = v35;
  v32[9] = v34;
  v32[5] = v33 | 0x100;
  v32[20] = v36;
  v32[21] = 0;
  v37 = sub_2ABAF4(a2[7]);
  v38 = *a2;
  v32[16] = v37;
  v39 = v38 == 1;
  v40 = a2[1];
  if ( v39 )
  {
    v41 = v32[5];
    v42 = v41 | 3;
    if ( (v40 & 1) != 0 )
      v41 |= 0x13u;
    v32[5] = v42;
    if ( (v40 & 1) != 0 )
      v32[5] = v41;
  }
  v43 = a2[6];
  if ( (v40 & 2) == 0 )
    v32[5] |= 8u;
  if ( v43 <= a2[5] )
    return 1;
  if ( v27 )
  {
    v11 = "b";
    goto LABEL_10;
  }
LABEL_9:
  v11 = "";
LABEL_10:
  sprintf(s, "%s%d%s", a4, a3, v11);
  v12 = strlen(s) + 1;
  v13 = (char *)sub_2ACBF4(a1, v12);
  v14 = v13;
  if ( v13 )
  {
    memcpy(v13, s, v12);
    v15 = (_DWORD *)sub_2ADCC0(a1, v14);
    if ( v15 )
    {
      v16 = a2[5];
      v17 = a2[6];
      v18 = a2[4];
      v19 = v16 + a2[3];
      v20 = a2[2];
      v15[7] = v19;
      v15[8] = v18 + v16;
      v15[9] = v17 - v16;
      v15[21] = 0;
      v15[20] = v16 + v20;
      v21 = a2[7];
      if ( (-v19 & v19) != 0 && v21 >= (-v19 & v19) )
        v21 = -v19 & v19;
      v22 = sub_2ABAF4(v21);
      v23 = *a2;
      v15[16] = v22;
      if ( v23 == 1 )
      {
        v44 = v15[5];
        if ( (*(_BYTE *)(a1 + 40) & 7) == 3 )
          v15[9] = 0;
        v24 = a2[1];
        v15[5] = v44 | 1;
        if ( (v24 & 1) != 0 )
          v15[5] = v44 | 0x11;
      }
      else
      {
        v24 = a2[1];
      }
      if ( (v24 & 2) == 0 )
      {
        v15[5] |= 8u;
        return 1;
      }
      return 1;
    }
  }
  return 0;
}
