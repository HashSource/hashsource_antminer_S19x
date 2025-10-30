int __fastcall sub_1D210(_DWORD *a1)
{
  _DWORD *v1; // r4
  unsigned int v2; // r7
  unsigned int v3; // r0
  unsigned int v4; // r8
  unsigned int v5; // r6
  int v6; // r9
  int v7; // r2
  int v8; // r8
  bool v9; // zf
  int v10; // r0
  void *v11; // r0
  int v12; // r2
  int v14; // r8
  unsigned int *v15; // r1
  int v16; // r7
  unsigned int v17; // r3
  void *v18; // r0
  int v19; // r2
  int v20; // r0
  int v21; // r5
  int v22; // r3
  int v23; // r1
  int v24; // r8
  _BOOL4 v25; // r3
  int *v26; // r2
  unsigned int i; // r3
  int v28; // r3
  char v29; // r0
  int v30; // lr
  unsigned int v31; // r7
  unsigned int v32; // r8
  bool v33; // zf
  int v34; // r0
  int v35; // r3
  int v36; // r9
  int v37; // r3
  int v38; // r11
  int *v39; // r8
  int v40; // r10
  int v41; // r3
  int *v42; // r3
  int v43; // r12
  unsigned int v44; // r1
  int v45; // r2
  int v46; // r6
  unsigned int v47; // r3
  int v48; // r2
  int v49; // r3
  int v50; // r10
  int v51; // r6
  _DWORD *v52; // r11
  int v53; // r3
  int v54; // r3
  unsigned int v55; // r3
  unsigned int v56; // r4
  int v57; // r6
  _DWORD *v58; // r12
  int v59; // r0
  unsigned int v60; // r2
  int v61; // r1
  int v62; // r8
  bool v63; // zf
  bool v64; // zf
  int v65; // r12
  int v66; // r0
  _DWORD *v67; // r3
  _DWORD *v68; // r1
  int v69; // r2
  bool v70; // zf
  int v71; // r8
  int v72; // r9
  int *v73; // r12
  unsigned int v74; // r0
  int v75; // r1
  int *v76; // r3
  int v77; // r2
  int v78; // [sp+0h] [bp-41Ch]
  unsigned int v79; // [sp+4h] [bp-418h]
  int v80; // [sp+8h] [bp-414h]
  int v81; // [sp+8h] [bp-414h]
  int v82; // [sp+Ch] [bp-410h]
  int v83; // [sp+Ch] [bp-410h]
  unsigned int v84; // [sp+10h] [bp-40Ch]
  int v85; // [sp+10h] [bp-40Ch]
  _DWORD *v86; // [sp+14h] [bp-408h]
  _DWORD v87[128]; // [sp+18h] [bp-404h] BYREF
  _DWORD src[126]; // [sp+218h] [bp-204h] BYREF

  v1 = a1;
  v2 = a1[3];
  v3 = (v2 >> 21) & 1;
  v4 = v2 >> 8;
  v5 = (v2 >> 23) & 1;
  v78 = HIWORD(v2) & 0xF;
  v6 = (v2 >> 8) & 0xF;
  if ( !v3 )
  {
    v20 = v1[1];
    v87[0] = 0;
    v87[1] = 0;
    ((void (__fastcall *)(int, unsigned int, _DWORD *))loc_1DF9FC)(v20, HIWORD(v2) & 0xF, v87);
    v21 = v87[0];
    if ( v5 )
    {
      v79 = v1[3];
      v22 = (v79 >> 10) & 3;
      if ( v22 )
      {
        if ( v22 == 1 )
        {
          v23 = 2;
        }
        else if ( v22 == 2 )
        {
          v23 = 4;
        }
        else
        {
          v23 = 0;
        }
      }
      else
      {
        v23 = 1;
      }
      v24 = BYTE1(v2) & 0xB;
      v25 = v24 == 0;
      if ( v6 == 8 )
        v25 = 1;
      if ( v25 )
      {
        v1[7] = 1;
        goto LABEL_35;
      }
      v63 = v6 == 9;
      if ( v6 != 9 )
        v63 = v24 == 1;
      if ( v63 )
      {
        v1[7] = 2;
        v5 = 2;
        goto LABEL_35;
      }
      v64 = v24 == 2;
      if ( v24 != 2 )
        v64 = v6 == 10;
      if ( v64 )
      {
        v1[7] = 3;
        v5 = 3;
        goto LABEL_35;
      }
      v70 = v24 == 3;
      if ( v24 != 3 )
        v70 = v6 == 11;
      if ( v70 )
      {
        v5 = 4;
        v1[7] = 4;
        goto LABEL_35;
      }
      v5 = v1[7];
      if ( v5 )
      {
LABEL_35:
        v26 = src;
        for ( i = 0; i < v5; ++i )
        {
          *v26++ = v21;
          v21 += v23;
        }
        v5 = 0;
      }
LABEL_38:
      v7 = v79 & 0xF;
      goto LABEL_39;
    }
    v28 = BYTE1(v2) & 7;
    v29 = (unsigned __int8)v2 >> 6;
    v30 = 1 << ((unsigned __int8)v2 >> 6);
    v31 = 8 >> ((unsigned __int8)v2 >> 6);
    v79 = v1[3];
    if ( v28 == 2 || (v32 = v4 & 0xE, v32 == 6) )
    {
      switch ( v6 )
      {
        case 7:
          v48 = 1;
          break;
        case 10:
          v48 = 2;
          break;
        case 6:
          v48 = 3;
          break;
        default:
          if ( v28 != 2 )
            goto LABEL_38;
          v48 = 4;
          break;
      }
      if ( v31 )
        v49 = 8 >> v29;
      else
        v49 = 1;
      v50 = 0;
      v51 = v1[7];
      v52 = src;
      v85 = v49 << v29;
      if ( v31 )
        v53 = 2 * v31;
      else
        v53 = 2;
      v83 = v53;
      if ( v31 )
        v54 = 8 * v31;
      else
        v54 = 8;
      v81 = v54;
      v55 = 0;
      v86 = v1;
      v56 = v48;
      do
      {
        v57 = v51 + 1;
        v58 = v52;
        v59 = v50;
        v60 = 0;
        v61 = v21;
        do
        {
          v62 = v57 + v60++;
          src[v59] = v30;
          v58 += 2;
          *(v58 - 1) = v61;
          v59 += 2;
          v61 += v30;
        }
        while ( v31 > v60 );
        ++v55;
        v51 = v62;
        v21 += v85;
        v50 += v83;
        v52 = (_DWORD *)((char *)v52 + v81);
      }
      while ( v56 > v55 );
      v1 = v86;
      v5 = v55;
      v86[7] = v62;
      goto LABEL_38;
    }
    v33 = v6 == 3;
    if ( v6 != 3 )
      v33 = v32 == 8;
    if ( !v33 )
    {
      if ( v32 == 4 )
      {
        v71 = v1[7];
        v72 = 3 << v29;
        v73 = src;
        v74 = 0;
        do
        {
          v75 = v21;
          v76 = v73;
          v77 = 3;
          do
          {
            --v77;
            v76[1] = v75;
            *v76 = v30;
            v75 += v30;
            v76 += 2;
          }
          while ( v77 );
          ++v74;
          v71 += 3;
          v21 += v72;
          v73 += 6;
        }
        while ( v31 > v74 );
        v1[7] = v71;
      }
      else if ( !v32 )
      {
        v65 = v1[7];
        v66 = 4 << v29;
        v67 = src;
        do
        {
          v68 = v67 + 8;
          v69 = v21;
          do
          {
            v67[1] = v69;
            v67 += 2;
            *(v67 - 2) = v30;
            v69 += v30;
          }
          while ( v68 != v67 );
          ++v32;
          v65 += 4;
          v21 += v66;
        }
        while ( v31 > v32 );
        v1[7] = v65;
        v5 = 0;
      }
      goto LABEL_38;
    }
    if ( (unsigned int)(v6 - 8) <= 1 )
    {
      v84 = 1;
    }
    else
    {
      if ( v6 != 3 )
        goto LABEL_38;
      v84 = 2;
    }
    v34 = 2 << v29;
    if ( v31 )
      v35 = v31;
    else
      v35 = 1;
    v36 = v1[7];
    v37 = v34 * v35;
    if ( v31 )
      v38 = 2 * v31;
    else
      v38 = 2;
    v39 = src;
    v40 = 0;
    v82 = v37;
    if ( v31 )
      v41 = 16 * v31;
    else
      v41 = 16;
    v80 = v41;
    do
    {
      v42 = v39;
      v43 = v36;
      v44 = 0;
      v45 = v21;
      do
      {
        ++v44;
        v46 = v45 + v30;
        v42[1] = v45;
        *v42 = v30;
        v43 += 2;
        v42[2] = v30;
        v45 += v34;
        v42[3] = v46;
        v42 += 4;
      }
      while ( v31 > v44 );
      v47 = v40 + 1;
      v36 += v38;
      v40 = 1;
      v21 += v82;
      v39 = (int *)((char *)v39 + v80);
    }
    while ( v84 > v47 );
    v1[7] = v43;
    v5 = v47;
    goto LABEL_38;
  }
  v7 = v2 & 0xF;
  if ( v5 )
  {
    v14 = BYTE1(v2) & 3;
    if ( (v2 & 0x300) != 0 )
    {
      if ( v14 == 1 )
      {
        v3 = 2;
        v1[8] = 2;
      }
      else if ( v14 == 2 )
      {
        v3 = 3;
        v1[8] = 3;
      }
      else
      {
        v3 = 4;
        v1[8] = 4;
      }
    }
    else
    {
      v3 = (v2 >> 23) & 1;
      v1[8] = 1;
    }
    v15 = v87;
    v5 = 0;
    v16 = ((v2 >> 18) & 0x10 | ((unsigned __int16)v2 >> 12)) + 58;
    do
    {
      v17 = v5 + v16;
      ++v5;
      *v15++ = v17;
    }
    while ( v5 < v3 );
    if ( v7 != 15 )
      goto LABEL_11;
    goto LABEL_21;
  }
  if ( (BYTE1(v2) & 7) == 2 || (v8 = BYTE1(v2) & 0xE, v8 == 6) )
  {
    v1[8] = 1;
    goto LABEL_10;
  }
  v9 = v6 == 3;
  if ( v6 != 3 )
    v9 = v8 == 8;
  if ( v9 )
  {
    v3 = 2;
    v1[8] = 2;
    goto LABEL_10;
  }
  if ( v8 == 4 )
  {
    v3 = 3;
    v1[8] = 3;
    goto LABEL_10;
  }
  if ( (v2 & 0xE00) != 0 )
  {
LABEL_39:
    v3 = v1[8];
    if ( v7 == 15 )
    {
LABEL_12:
      if ( !v3 )
        goto LABEL_13;
      goto LABEL_21;
    }
LABEL_11:
    v1[8] = ++v3;
    v87[v5] = v78;
    goto LABEL_12;
  }
  v3 = 4;
  v1[8] = 4;
LABEL_10:
  if ( v7 != 15 )
    goto LABEL_11;
LABEL_21:
  v18 = (void *)sub_93028(4 * v3);
  v19 = v1[8];
  v1[9] = v18;
  memcpy(v18, v87, 4 * v19);
LABEL_13:
  v10 = v1[7];
  if ( v10 )
  {
    v11 = (void *)sub_93028(8 * v10);
    v12 = v1[7];
    v1[10] = v11;
    memcpy(v11, src, 8 * v12);
  }
  return 0;
}
