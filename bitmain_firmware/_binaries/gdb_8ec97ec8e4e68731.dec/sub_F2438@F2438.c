_DWORD *__fastcall sub_F2438(char **a1, _DWORD *a2, _DWORD *a3)
{
  int v6; // r0
  _DWORD *v7; // r4
  char *v8; // r9
  size_t v9; // r0
  char v10; // r3
  unsigned __int8 *v11; // r2
  __int16 v12; // r0
  unsigned int v13; // r1
  int v14; // r3
  char v15; // r2
  int v16; // r0
  int v17; // lr
  unsigned int v18; // r12
  unsigned int v19; // r1
  int v20; // r0
  int v21; // r0
  unsigned __int8 *v22; // r3
  char v23; // r2
  unsigned int v24; // r1
  bool v25; // zf
  bool v27; // zf
  int v28; // r0
  int v29; // r2
  int v30; // r3
  unsigned __int8 *v31; // r3
  char *v32; // r5
  int v33; // r3
  int v34; // r3
  int *v35; // r0
  int v36; // r3
  unsigned __int8 *v37; // r1
  int v38; // r3
  unsigned __int8 *v39; // r2
  int v40; // r5
  unsigned __int8 *v41; // r0
  int v42; // r3
  bool v43; // zf
  char v44; // r3
  char v45; // r3
  unsigned __int8 *v46; // r3
  bool v47; // zf
  int v48; // r0
  int v49; // r3
  __int64 v50; // r0
  int v51; // r2
  int v52; // r3
  int v53; // lr
  int v54; // r5
  int v55; // r4
  int v56; // r7
  int v57; // r6
  size_t v58; // r0
  int v59; // r3
  int v60; // r1
  int v61; // r2
  int v62; // t1
  int v63; // r12
  unsigned int v64; // r0
  int v65; // [sp+24h] [bp-10h]
  int v66; // [sp+28h] [bp-Ch]

  v6 = sub_220854(a3);
  v7 = (_DWORD *)v6;
  v8 = *a1;
  if ( **a1 == *(_BYTE *)(*(_DWORD *)(a3[9] + 4) + 24) )
    ++v8;
  ((void (__fastcall *)(int, _DWORD, _DWORD *))loc_21AEC4)(v6, *(_DWORD *)(dword_4788E0 + 20), a3 + 12);
  v9 = strlen(v8);
  sub_21AF48((int)v7, v8, v9, 1, (int)a3);
  v10 = *((_BYTE *)v7 + 32);
  v11 = (unsigned __int8 *)a1[3];
  v7[3] = 0;
  *((_BYTE *)v7 + 32) = v10 & 0xF8 | 1;
  v7[2] = v11;
  v12 = sub_F1548((int)a1, (int)a3);
  v13 = (unsigned int)a1[6];
  v14 = dword_4789F8;
  v15 = dword_478A08;
  *((_WORD *)v7 + 11) = v12;
  if ( (v14 & v13) != 2 << v15 )
  {
    v28 = sub_F1C48((const char **)a1, v13, (int)a2, (int)a3);
    v30 = (int)a1[4];
    v7[6] = v28;
    if ( v30 != 12 )
    {
      if ( v30 <= 12 )
      {
        if ( v30 != 3 )
        {
          if ( v30 > 3 )
          {
            if ( v30 == 9 )
            {
              v44 = *((_BYTE *)v7 + 33) | 2;
              *((_BYTE *)v7 + 32) = v7[8] & 7 | 0x20;
              *((_BYTE *)v7 + 33) = v44;
              sub_E5AA8(v7, (_DWORD **)&dword_4788E8);
              return v7;
            }
            if ( v30 != 10 )
            {
              if ( v30 == 4 )
              {
                *((_BYTE *)v7 + 32) = v7[8] & 7 | (8 * (dword_478A0C & 0x1F));
                v31 = (unsigned __int8 *)a1[3];
                v7[3] = 0;
                v7[2] = v31;
                sub_E5AA8(v7, (_DWORD **)&dword_4788E8);
              }
              return v7;
            }
            goto LABEL_47;
          }
          if ( v30 == 1 )
          {
            *((_BYTE *)v7 + 32) = v7[8] & 7 | 0x38;
            sub_E5AA8(v7, (_DWORD **)&dword_4788E8);
            return v7;
          }
          if ( v30 != 2 )
            return v7;
LABEL_45:
          v38 = a3[38];
          *((_BYTE *)v7 + 32) = v7[8] & 7 | 0x10;
          v39 = (unsigned __int8 *)a1[3];
          v7[2] = v39;
          if ( v38 != -1 )
          {
            v7[2] = &v39[*(_DWORD *)(a3[36] + 4 * v38)];
            sub_E5AA8(v7, (_DWORD **)&dword_4788F4);
            return v7;
          }
LABEL_61:
          v50 = sub_94700((int)"coffread.c", 1681, "sect_index_text not initialized");
          v65 = v53;
          v54 = *(_DWORD *)HIDWORD(v50);
          if ( **(_BYTE **)HIDWORD(v50) != 64 )
          {
            v55 = v52;
            v56 = v51;
            v57 = v50;
            if ( v52 != 1
              || (*(_DWORD *)(HIDWORD(v50) + 24) & dword_4789F8) == 2 << dword_478A08
              || strncmp((const char *)v54, "__fu", 4u)
              || (unsigned int)*(unsigned __int8 *)(v54 + 4) - 48 > 9
              || (v59 = *(unsigned __int8 *)(v54 + 5), !*(_BYTE *)(v54 + 5)) )
            {
LABEL_63:
              v58 = strlen((const char *)v54);
              sub_1B25B4(v57, (char *)v54, v58, 1, v56, v55, v66);
              goto LABEL_64;
            }
            if ( (unsigned int)(v59 - 48) <= 9 )
            {
              v60 = v54 + 5;
              v61 = 5;
              while ( 1 )
              {
                v62 = *(unsigned __int8 *)++v60;
                v59 = v62;
                v63 = ++v61;
                v64 = v62 - 48;
                if ( !v62 )
                  goto LABEL_63;
                if ( v64 > 9 )
                  goto LABEL_73;
              }
            }
            v63 = 5;
LABEL_73:
            if ( v59 != 95 || *(_BYTE *)(v54 + v63 + 1) != 95 )
              goto LABEL_63;
          }
LABEL_64:
          __asm { POP             {R4-R7,PC} }
        }
LABEL_41:
        v36 = a3[38];
        *((_BYTE *)v7 + 32) = v7[8] & 7 | 0x10;
        v37 = (unsigned __int8 *)a1[3];
        v7[2] = v37;
        if ( v36 != -1 )
        {
          v25 = dword_478980 == 0;
          v7[2] = &v37[*(_DWORD *)(a3[36] + 4 * v36)];
          if ( !v25 )
          {
            sub_E5AA8(v7, (_DWORD **)&dword_4788E8);
            return v7;
          }
          goto LABEL_11;
        }
        goto LABEL_60;
      }
      if ( v30 == 130 )
        goto LABEL_45;
      if ( v30 > 130 )
      {
        if ( v30 == 150 )
          goto LABEL_45;
        if ( v30 != 151 && v30 != 131 )
          return v7;
        goto LABEL_41;
      }
      if ( v30 != 15 )
      {
        if ( v30 == 17 )
        {
          v45 = *((_BYTE *)v7 + 33) | 2;
          *((_BYTE *)v7 + 32) = v7[8] & 7 | (8 * (dword_478A0C & 0x1F));
          *((_BYTE *)v7 + 33) = v45;
          v46 = (unsigned __int8 *)a1[3];
          v7[3] = 0;
          v7[2] = v46;
          sub_E5AA8(v7, (_DWORD **)&dword_4788E8);
          return v7;
        }
        if ( v30 != 13 )
          return v7;
        v32 = *(char **)(v28 + 24);
        *((_BYTE *)v7 + 32) = 65;
        v33 = *v32;
        if ( !*((_DWORD *)v32 + 2) )
        {
          v47 = v33 == 7;
          if ( v33 != 7 )
            v47 = v33 == 1;
          if ( !v47 )
          {
            v48 = sub_327254(*v7);
            v49 = v7[6];
            *((_DWORD *)v32 + 2) = v48;
            v32 = *(char **)(v49 + 24);
            v33 = *v32;
          }
        }
        if ( v33 == 1 )
        {
          v34 = *((_DWORD *)v32 + 5);
          if ( !*(_DWORD *)(v34 + 20) )
          {
            if ( **(_BYTE **)(v34 + 24) )
            {
              v35 = &dword_4789AC[sub_E645C((char *)*v7)];
              v7[2] = v35[25];
              v35[25] = (int)v7;
            }
          }
        }
LABEL_11:
        sub_E5AA8(v7, (_DWORD **)&dword_4788F0);
        return v7;
      }
    }
LABEL_47:
    v40 = *(_DWORD *)(v28 + 24);
    *((_BYTE *)v7 + 32) = 66;
    if ( !*(_DWORD *)(v40 + 12) )
    {
      v41 = (unsigned __int8 *)*v7;
      if ( *v7 )
      {
        v42 = *v41;
        v43 = v42 == 126;
        if ( v42 != 126 )
          v43 = v42 == 46;
        if ( !v43 )
          *(_DWORD *)(v40 + 12) = sub_31E27C(v41, 0, v29);
      }
    }
    goto LABEL_11;
  }
  v16 = a3[38];
  if ( v16 == -1 )
  {
    sub_94700((int)"coffread.c", 1649, "sect_index_text not initialized");
LABEL_60:
    sub_94700((int)"coffread.c", 1691, "sect_index_text not initialized");
    goto LABEL_61;
  }
  v17 = dword_4789F4;
  v18 = v13 >> dword_478A04;
  *((_QWORD *)v7 + 1) += *(unsigned int *)(a3[36] + 4 * v16);
  v19 = (v13 ^ v18) & v17 ^ v18;
  if ( !*a2 )
    a1[2] = 0;
  v20 = sub_F1C48((const char **)a1, v19, (int)a2, (int)a3);
  v21 = sub_170358(v20);
  v22 = (unsigned __int8 *)a1[4];
  v23 = *((_BYTE *)v7 + 32);
  v7[6] = v21;
  v24 = (unsigned int)v22 & 0xFFFFFF7F;
  v25 = ((unsigned int)v22 & 0xFFFFFF7F) == 3;
  if ( ((unsigned int)v22 & 0xFFFFFF7F) != 3 )
    v25 = v22 == (unsigned __int8 *)151;
  *((_BYTE *)v7 + 32) = v23 & 7 | 0x50;
  if ( v25 )
    goto LABEL_11;
  v27 = v24 == 2;
  if ( v24 != 2 )
    v27 = v22 == (unsigned __int8 *)150;
  if ( !v27 )
    return v7;
  sub_E5AA8(v7, (_DWORD **)&dword_4788F4);
  return v7;
}
