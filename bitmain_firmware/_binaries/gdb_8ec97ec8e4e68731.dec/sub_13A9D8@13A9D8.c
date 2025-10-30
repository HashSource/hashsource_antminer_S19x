int __fastcall sub_13A9D8(int a1, const char *a2, int *a3, int a4)
{
  __int64 v8; // r0
  int v9; // r5
  int *v10; // r3
  int v11; // r6
  __int64 v12; // r0
  unsigned int v13; // r3
  _BYTE *v14; // r5
  char v15; // r2
  bool v16; // r12
  int v17; // r2
  __int64 v18; // r10
  int v19; // r3
  int v20; // r4
  int v21; // r0
  int v22; // r3
  int v23; // r0
  int v24; // r3
  int v25; // r7
  int v26; // r0
  int v27; // r3
  int v28; // r0
  int v29; // r3
  int v30; // r0
  bool v31; // r1
  int v32; // r3
  int v33; // r12
  int v34; // lr
  __int64 v35; // r0
  int v36; // r2
  int v37; // r12
  int v38; // r3
  int v39; // r2
  char *v40; // r9
  char *v41; // r9
  char v42; // t1
  __int64 v43; // r4
  int v44; // r2
  char v45; // t1
  unsigned int v46; // r6
  _DWORD *v47; // r6
  int v48; // r1
  int v49; // r8
  _DWORD *v50; // r0
  char *v51; // r0
  int v52; // r0
  char v53; // t1
  int v54; // r6
  __int64 v55; // r2
  int v56; // r12
  char v57; // t1
  unsigned int v58; // r4
  char *v59; // r9
  char v60; // t1
  __int64 v61; // r0
  int v62; // r2
  char v63; // t1
  unsigned int v64; // r4
  char v65; // t1
  __int64 v66; // r2
  int v67; // lr
  char v68; // t1
  unsigned int v69; // r4
  bool v70; // zf
  int v71; // r12
  int v72; // r1
  __int64 v73; // r2
  int v74; // r1
  int v75; // lr
  char *v76; // r7
  int v77; // r2
  int v78; // r5
  int v79; // r4
  char v80; // r12
  char v81; // t1
  unsigned int v82; // r0
  int v83; // r3
  int v84; // r3
  bool v85; // r1
  char *v86; // r5
  char *v87; // r0
  __int64 v88; // r0
  _DWORD *v90; // [sp+1Ch] [bp-30h]
  char *v91; // [sp+20h] [bp-2Ch]
  int v92; // [sp+24h] [bp-28h]
  unsigned int v93; // [sp+2Ch] [bp-20h] BYREF
  __int64 v94; // [sp+30h] [bp-1Ch] BYREF
  __int64 v95; // [sp+38h] [bp-14h]
  int v96; // [sp+40h] [bp-Ch]
  int v97; // [sp+44h] [bp-8h]

  if ( *((_BYTE *)a3 + 17) )
  {
    if ( !a3[2] )
      return 0;
  }
  else if ( sub_11DFFC(a3) )
  {
    return 0;
  }
  if ( (((int (__fastcall *)(int *))loc_11E7A8)(a3) & 0x100) == 0 )
    return 0;
  if ( !*((_BYTE *)a3 + 16) )
    ((void (__fastcall *)(int, int *))loc_11FFD0)(a1, a3);
  v8 = sub_1B7250(a1);
  *(_DWORD *)(a4 + 20) = ((int (__fastcall *)(_DWORD, _DWORD))loc_165BB8)(v8, HIDWORD(v8));
  v9 = a3[1];
  if ( *((_BYTE *)a3 + 17) )
  {
    v10 = (int *)*a3;
    if ( *(_BYTE *)(*a3 + 17) )
    {
      v88 = ((__int64 (*)(void))loc_11E090)();
      return sub_13B0A8(v88, HIDWORD(v88));
    }
  }
  else
  {
    v10 = a3;
  }
  v11 = *(_DWORD *)(*v10 + 148);
  LODWORD(v12) = sub_11E018(v11 + 4, a3[1], &v93);
  v13 = v93;
  v14 = (_BYTE *)(v9 + v93);
  if ( v93 == 4 )
    v15 = 4;
  else
    v15 = 8;
  v16 = v93 != 4;
  *(_BYTE *)(a4 + 26) = v15;
  v17 = a3[2];
  v18 = v12 + v13;
  *(_BYTE *)(a4 + 24) = v16;
  if ( v18 != v17 )
  {
    v86 = sub_988AC(v18);
    v87 = sub_98880(a3[2], 0);
    sub_946B0(
      "Section .debug_names in %s length %s does not match section length %s, ignoring .debug_names.",
      a2,
      v86,
      v87);
    return 0;
  }
  v19 = (*(unsigned __int16 (__fastcall **)(_BYTE *))(*(_DWORD *)(v11 + 4) + 52))(v14);
  if ( v19 == 5 )
  {
    v20 = (*(unsigned __int16 (__fastcall **)(_BYTE *))(*(_DWORD *)(v11 + 4) + 52))(v14 + 2);
    if ( v20 )
    {
      sub_946B0("Section .debug_names in %s has unsupported padding %d, ignoring .debug_names.", a2, v20);
      return 0;
    }
    else
    {
      v21 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)(v11 + 4) + 40))(v14 + 4);
      v22 = *(_DWORD *)(v11 + 4);
      *(_DWORD *)(a4 + 28) = v21;
      v23 = (*(int (__fastcall **)(_BYTE *))(v22 + 40))(v14 + 8);
      v24 = *(_DWORD *)(v11 + 4);
      *(_DWORD *)(a4 + 32) = v23;
      v25 = (*(int (__fastcall **)(_BYTE *))(v24 + 40))(v14 + 12);
      if ( v25 )
      {
        sub_946B0("Section .debug_names in %s has unsupported %lu foreign TUs, ignoring .debug_names.", a2, v25);
        return 0;
      }
      v26 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)(v11 + 4) + 40))(v14 + 16);
      v27 = *(_DWORD *)(v11 + 4);
      *(_DWORD *)(a4 + 36) = v26;
      v28 = (*(int (__fastcall **)(_BYTE *))(v27 + 40))(v14 + 20);
      v29 = *(_DWORD *)(v11 + 4);
      *(_DWORD *)(a4 + 40) = v28;
      v92 = (*(int (__fastcall **)(_BYTE *))(v29 + 40))(v14 + 24);
      v30 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)(v11 + 4) + 40))(v14 + 28);
      if ( v30 == 4 )
      {
        v85 = v14[32] != 71 || v14[33] != 68 || v14[34] != 66 || v14[35];
        v31 = !v85;
      }
      else
      {
        v31 = 0;
      }
      v32 = *(unsigned __int8 *)(a4 + 26);
      v33 = *(_DWORD *)(a4 + 28);
      *(_BYTE *)(a4 + 25) = v31;
      v34 = (int)&v14[(-v30 & 3) + 32 + v30];
      v35 = *(_QWORD *)(a4 + 32);
      v36 = *(_DWORD *)(a4 + 40);
      v37 = v34 + v33 * v32;
      *(_DWORD *)(a4 + 44) = v34;
      v90 = (_DWORD *)a4;
      LODWORD(v35) = v37 + v35 * v32;
      *(_DWORD *)(a4 + 48) = v37;
      v38 = v36 * v32;
      HIDWORD(v35) = v35 + 4 * HIDWORD(v35);
      *(_QWORD *)(a4 + 52) = v35;
      v39 = HIDWORD(v35) + 4 * v36;
      *(_DWORD *)(a4 + 60) = v39;
      *(_DWORD *)(a4 + 64) = v39 + v38;
      v40 = (char *)(v39 + v38 + v38);
      v91 = v40;
LABEL_23:
      v42 = *v40;
      v41 = v40 + 1;
      v43 = v42 & 0x7F;
      if ( v42 < 0 )
      {
        v44 = 0;
        do
        {
          v45 = *v41++;
          v44 += 7;
          v46 = v45 & 0x7F;
          LODWORD(v43) = v43 | (v46 << v44);
          HIDWORD(v43) |= (v46 << (v44 - 32)) | (v46 >> (32 - v44));
        }
        while ( v45 < 0 );
      }
      if ( v43 )
      {
        v47 = sub_9836C(0x28u);
        *v47 = 0;
        v47[6] = 0;
        v48 = v90[19];
        v47[7] = 0;
        *((_QWORD *)v47 + 2) = 0;
        v47[8] = 0;
        *((_QWORD *)v47 + 1) = v43;
        v49 = (unsigned __int64)sub_347674(v43, v48) >> 32;
        v50 = sub_124354(v90 + 18, v49, (__int64 *)v47 + 1);
        if ( v50 && *v50 )
        {
          sub_12430C(v47);
          v51 = sub_98880(v43, SHIDWORD(v43));
          sub_946B0("Section .debug_names in %s has duplicate index %s, ignoring .debug_names.", a2, v51);
          return 0;
        }
        v52 = sub_14A0EC(v90 + 18, v49, v43, v47);
        v53 = *v41;
        v40 = v41 + 1;
        v54 = v52;
        v55 = v53 & 0x7F;
        if ( v53 < 0 )
        {
          v56 = 0;
          do
          {
            v57 = *v40++;
            v56 += 7;
            v58 = v57 & 0x7F;
            LODWORD(v55) = v55 | (v58 << v56);
            HIDWORD(v55) |= (v58 << (v56 - 32)) | (v58 >> (32 - v56));
          }
          while ( v57 < 0 );
        }
        *(_QWORD *)(v52 + 16) = v55;
        while ( 1 )
        {
          while ( 1 )
          {
            v60 = *v40;
            v59 = v40 + 1;
            v61 = v60 & 0x7F;
            if ( v60 < 0 )
            {
              v62 = 0;
              do
              {
                v63 = *v59++;
                v62 += 7;
                v64 = v63 & 0x7F;
                LODWORD(v61) = v61 | (v64 << v62);
                HIDWORD(v61) |= (v64 << (v62 - 32)) | (v64 >> (32 - v62));
              }
              while ( v63 < 0 );
            }
            v94 = v61;
            HIDWORD(v66) = 0;
            v65 = *v59;
            v40 = v59 + 1;
            LODWORD(v66) = v65 & 0x7F;
            if ( v65 < 0 )
            {
              v67 = 0;
              do
              {
                v68 = *v40++;
                v67 += 7;
                v69 = v68 & 0x7F;
                LODWORD(v66) = v66 | (v69 << v67);
                HIDWORD(v66) |= (v69 << (v67 - 32)) | (v69 >> (32 - v67));
              }
              while ( v68 < 0 );
            }
            v70 = HIDWORD(v66) == 0;
            v95 = v66;
            if ( !HIDWORD(v66) )
              v70 = (_DWORD)v66 == 33;
            if ( !v70 )
              break;
            v75 = 0;
            v76 = v40;
            v77 = 0;
            v78 = 0;
            v79 = 0;
            do
            {
              v81 = *v76++;
              v80 = v81;
              ++v75;
              v82 = v81 & 0x7F;
              v78 |= v82 << v77;
              v83 = (v82 << (v77 - 32)) | (v82 >> (32 - v77));
              v77 += 7;
              v79 |= v83;
            }
            while ( v81 < 0 );
            if ( v77 <= 63 && (v80 & 0x40) != 0 )
            {
              v78 |= -(1 << v77);
              v79 |= (unsigned __int64)-__SPAIR64__((1 << (v77 - 32)) | (1u >> (32 - v77)), 1 << v77) >> 32;
            }
            v71 = *(_DWORD *)(v54 + 28);
            v40 += v75;
            v84 = *(_DWORD *)(v54 + 32);
            v96 = v78;
            v97 = v79;
            if ( v71 != v84 )
              goto LABEL_46;
LABEL_55:
            sub_149818(v54 + 24, v71, &v94);
          }
          if ( !(v66 | v61) )
            goto LABEL_23;
          v71 = *(_DWORD *)(v54 + 28);
          if ( v71 == *(_DWORD *)(v54 + 32) )
            goto LABEL_55;
LABEL_46:
          if ( v71 )
          {
            v72 = HIDWORD(v94);
            v73 = v95;
            *(_DWORD *)v71 = v94;
            *(_DWORD *)(v71 + 4) = v72;
            *(_QWORD *)(v71 + 8) = v73;
            v74 = v97;
            *(_DWORD *)(v71 + 16) = v96;
            *(_DWORD *)(v71 + 20) = v74;
          }
          *(_DWORD *)(v54 + 28) = v71 + 24;
        }
      }
      if ( v41 == &v91[v92] )
      {
        v90[17] = v41;
        return 1;
      }
      else
      {
        sub_946B0(
          "Section .debug_names in %s has abbreviation_table of size %zu vs. written as %u, ignoring .debug_names.",
          a2,
          v41 - v91,
          v92);
        return 0;
      }
    }
  }
  else
  {
    sub_946B0("Section .debug_names in %s has unsupported version %d, ignoring .debug_names.", a2, v19);
    return 0;
  }
}
