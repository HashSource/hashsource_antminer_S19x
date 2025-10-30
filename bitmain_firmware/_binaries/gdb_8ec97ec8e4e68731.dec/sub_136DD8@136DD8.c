char *__fastcall sub_136DD8(int *a1, _WORD *a2, int *a3)
{
  int v6; // r9
  _DWORD *v7; // r4
  int v8; // r3
  bool v9; // zf
  int v10; // r3
  int v11; // r0
  int v12; // r0
  char *result; // r0
  int v14; // r3
  int v15; // r7
  bool v16; // zf
  char v17; // r9
  char *v18; // r7
  int v19; // r0
  int v20; // r0
  char *v21; // r3
  char v22; // r2
  int v23; // r0
  char v24; // r3
  int v25; // r0
  int v26; // r0
  int v27; // r3
  int v28; // r7
  int v29; // r1
  int v30; // r3
  int v31; // r0
  int v32; // r2
  bool v33; // cf
  int v34; // r3
  int v35; // r0
  unsigned int v36; // r7
  unsigned int v37; // r9
  char *v38; // r0
  char *v39; // r3
  char v40; // r3
  int v41; // r0
  int v42; // r3
  int v43; // r0
  int v44; // r3
  int v45; // r7
  int v46; // r0
  int v47; // r1
  int v48; // r3
  __int64 v49; // r2
  __int64 v50; // [sp+0h] [bp-Ch] BYREF

  v6 = sub_1B7250(*a3);
  v7 = sub_93028(0x28u);
  sub_9253C(1165368, (int)v7);
  memset(v7, 0, 0x28u);
  v8 = (unsigned __int16)*a2;
  v9 = v8 == 28;
  if ( v8 == 28 )
    v10 = a1[1];
  else
    v10 = *a1;
  if ( v9 )
    a1[1] = (int)v7;
  else
    *a1 = (int)v7;
  *v7 = v10;
  ++a1[2];
  v11 = sub_12E694((int)a2, 50, (int)a3);
  if ( v11 )
    v12 = *(_DWORD *)(v11 + 8);
  else
    v12 = sub_122128((int)a2, (int)a3);
  v7[1] = v12;
  if ( v12 != 1 )
    a1[4] = 1;
  result = (char *)sub_12E694((int)a2, 76, (int)a3);
  v15 = (unsigned __int16)*a2;
  if ( result )
    v14 = *((_DWORD *)result + 2);
  else
    v7[2] = 0;
  if ( result )
    v7[2] = v14;
  if ( v15 != 13 )
    goto LABEL_17;
  result = (char *)sub_12FF48((int)a2, (int)a3);
  if ( result )
  {
    v15 = (unsigned __int16)*a2;
LABEL_17:
    v16 = v15 == 52;
    if ( v15 != 52 )
      v16 = v15 == 13;
    v17 = v16;
    if ( v16 )
    {
      result = sub_12FAF0(a2, a3);
      v18 = result;
      if ( result )
      {
        if ( sub_12E694((int)a2, 28, (int)a3) )
        {
          v19 = sub_12E694((int)a2, 63, (int)a3);
          if ( v19 )
          {
            if ( *(_QWORD *)(v19 + 8) )
              ((void (__fastcall *)(_WORD *, _DWORD, int *))loc_1363E4)(a2, 0, a3);
          }
        }
        v20 = sub_135FD8(v18, (int)a2, a3);
        v21 = "";
        if ( v20 )
          v21 = (char *)v20;
        v22 = v7[6] & 0xF1 | 6;
        v7[4] = v21;
        *((_BYTE *)v7 + 24) = v22;
        result = (char *)sub_1345C4((int)a2, a3);
        v7[8] = v18;
        v7[7] = result;
      }
    }
    else if ( v15 == 28 )
    {
      if ( sub_12FF98((int)a2, (int)a3, (int)&v50) )
      {
        v41 = 8 * v50;
        v42 = v50 >> 29;
        *((_BYTE *)v7 + 24) = v7[6] & 0xF1 | (2 * (v17 & 7));
        v7[4] = v41;
        v7[5] = v42;
      }
      v7[6] &= 0xFu;
      v43 = sub_1345C4((int)a2, a3);
      v7[7] = v43;
      result = (char *)sub_170CC4(v43);
      v44 = a1[3];
      v7[8] = result;
      a1[3] = v44 + 1;
    }
    return result;
  }
  v23 = sub_1345C4((int)a2, a3);
  v24 = *((_BYTE *)v7 + 24);
  v7[7] = v23;
  *((_BYTE *)v7 + 24) = v24 & 0xF1;
  *((_QWORD *)v7 + 2) = 0;
  v25 = sub_12E694((int)a2, 13, (int)a3);
  if ( v25 )
    v7[6] = v7[6] & 0xF | (16 * *(_DWORD *)(v25 + 8));
  else
    v7[6] &= 0xFu;
  if ( sub_12FF98((int)a2, (int)a3, (int)&v50) )
  {
    v26 = 8 * v50;
    v27 = v50 >> 29;
    *((_BYTE *)v7 + 24) &= 0xF1u;
    v7[4] = v26;
    v7[5] = v27;
  }
  v28 = sub_12E694((int)a2, 12, (int)a3);
  if ( v28 )
  {
    if ( ((int (__fastcall *)(int))loc_165D78)(v6) )
    {
      v29 = *(_DWORD *)(v28 + 8);
      v30 = v7[4];
      v31 = *(_DWORD *)(v28 + 12);
      v32 = v7[5];
      v33 = __CFADD__(v30, v29);
      v34 = v30 + v29;
      LOBYTE(v29) = *((_BYTE *)v7 + 24);
      v7[4] = v34;
      v7[5] = v31 + v33 + v32;
      *((_BYTE *)v7 + 24) = v29 & 0xF1;
    }
    else
    {
      v45 = *(_DWORD *)(v28 + 8);
      v46 = sub_12E694((int)a2, 11, (int)a3);
      if ( v46 )
        v47 = *(_DWORD *)(v46 + 8);
      else
        v48 = v7[7];
      if ( !v46 )
        v47 = *(_DWORD *)(v48 + 20);
      v49 = *((_QWORD *)v7 + 2);
      *((_BYTE *)v7 + 24) &= 0xF1u;
      *((_QWORD *)v7 + 2) = v49 + 8 * v47 - v45 - (v7[6] >> 4);
    }
  }
  v35 = sub_12E694((int)a2, 107, (int)a3);
  if ( v35 )
  {
    v36 = v7[4];
    v37 = v7[5];
    *((_BYTE *)v7 + 24) &= 0xF1u;
    *((_QWORD *)v7 + 2) = __PAIR64__(v37, v36) + sub_12459C(v35);
  }
  v38 = sub_12FAF0(a2, a3);
  v39 = "";
  if ( v38 )
    v39 = v38;
  v7[8] = v39;
  result = (char *)sub_12E694((int)a2, 52, (int)a3);
  if ( result )
  {
    v40 = *((_BYTE *)v7 + 24);
    a1[4] = 1;
    v7[1] = 3;
    *((_BYTE *)v7 + 24) = v40 | 1;
  }
  return result;
}
