unsigned int __fastcall sub_1300F8(unsigned __int16 *a1, _DWORD *a2, int a3, int a4)
{
  int v4; // r7
  int v5; // r8
  int v8; // r6
  int v9; // r0
  __int16 v10; // r3
  int v11; // r1
  int v12; // r6
  int v13; // r0
  unsigned int result; // r0
  int v15; // r3
  unsigned int v16; // r10
  bool v17; // zf
  _DWORD *v18; // r1
  _DWORD *v19; // r11
  int v20; // r7
  int v21; // r2
  int v22; // r6
  __int64 v23; // r0
  unsigned int v24; // r5
  __int64 v25; // r0
  char *v26; // r5
  char *v27; // r0
  int v28; // r5
  int v29; // r0
  unsigned int v30; // r3
  int v31; // r0
  int v32; // r5
  int v33; // r2
  char *v34; // r9
  int v35; // r11
  unsigned int v36; // r5
  _BYTE *v37; // r6
  __int64 v38; // r0
  unsigned int v39; // r4
  __int64 v40; // r0
  int v41; // r6
  char *v42; // r2
  int v43; // r3
  char *v44; // r4
  int v45; // r5
  int v46; // r0
  __int64 v47; // r0
  char v48; // r2
  int v49; // r3
  char *v50; // r9
  int v51; // r2
  int v52; // lr
  int v53; // r12
  char v54; // t1
  unsigned int v55; // r4
  _BYTE *v56; // r4
  char v57; // r1
  bool v58; // zf
  int v59; // r1
  int v60; // lr
  char v61; // t1
  int v62; // r0
  __int64 v63; // r0
  char v64; // r3
  bool v65; // zf
  int v66; // r2
  int v67; // r3
  int v68; // lr
  int v69; // r12
  char v70; // t1
  unsigned int v71; // r6
  __int64 v72; // r0
  int v73; // [sp+Ch] [bp-50h]
  int v74; // [sp+10h] [bp-4Ch]
  int *v75; // [sp+14h] [bp-48h]
  unsigned int v78; // [sp+24h] [bp-38h]
  int v79; // [sp+28h] [bp-34h]
  unsigned int v80; // [sp+28h] [bp-34h]
  char *v81; // [sp+30h] [bp-2Ch]
  int v82; // [sp+30h] [bp-2Ch]
  _DWORD *v83; // [sp+34h] [bp-28h]
  int *v84; // [sp+4Ch] [bp-10h]
  _DWORD v85[2]; // [sp+54h] [bp-8h] BYREF

  v73 = sub_1B7250(*(_DWORD *)a4);
  v8 = sub_12E694((int)a1, 18, a4);
  if ( v8 )
  {
    v9 = sub_12E694((int)a1, 17, a4);
    if ( v9 )
    {
      v10 = *(_WORD *)(v8 + 2);
      v11 = *(_DWORD *)(v9 + 8);
      v12 = *(_DWORD *)(v8 + 8);
      if ( *(__int16 *)(a4 + 12) > 3 )
      {
        switch ( v10 & 0x7FFF )
        {
          case 5:
          case 6:
          case 7:
          case 0xB:
          case 0xD:
          case 0xF:
          case 0x21:
            v12 += v11;
            break;
          default:
            break;
        }
      }
      v5 = a3;
      v4 = ((int (__fastcall *)(int, int))loc_16A938)(v73, v11 + a3);
      v13 = ((int (__fastcall *)(int, int))loc_16A938)(v73, v12 + a3);
      sub_E5CE0(a2, v4, v13 - 1);
    }
  }
  result = sub_12E694((int)a1, 85, a4);
  if ( !result )
    return result;
  v15 = *a1;
  v16 = *(_DWORD *)(result + 8);
  result = *(_DWORD *)a4;
  v17 = v15 == 17;
  if ( v15 != 17 )
    v15 = *(_DWORD *)(a4 + 184);
  v78 = *(_DWORD *)a4;
  v18 = (_DWORD *)dword_4872D8;
  if ( !v17 )
    v16 += v15;
  v19 = *(_DWORD **)(result + 36);
  v74 = *(_DWORD *)(a4 + 60);
  v75 = *(int **)(a4 + 56);
  if ( *(__int16 *)(a4 + 12) <= 4 )
  {
    v20 = *(unsigned __int8 *)(a4 + 14);
    if ( *(_BYTE *)(dword_4872D8 + 196) )
    {
      if ( *(_DWORD *)(dword_4872D8 + 188) > v16 )
        goto LABEL_15;
    }
    else
    {
      result = ((int (__fastcall *)(unsigned int, int))loc_11FFD0)(result, dword_4872D8 + 180);
      v18 = (_DWORD *)dword_4872D8;
      if ( *(_DWORD *)(dword_4872D8 + 188) > v16 )
      {
LABEL_15:
        v21 = *(_DWORD *)(v78 + 152);
        v22 = v18[46] + v16;
        if ( v21 != -1 )
        {
          v79 = *(_DWORD *)(*(_DWORD *)(v78 + 144) + 4 * v21);
          while ( 1 )
          {
            LODWORD(v23) = *v19;
            HIDWORD(v23) = v19 + 1;
            v24 = sub_11E3C0(v23, v22, a4, v85);
            LODWORD(v25) = *v19;
            HIDWORD(v25) = v19 + 1;
            result = sub_11E3C0(v25, v22 + v20, a4, v85);
            v22 += 2 * (__int16)v20;
            if ( !(v24 | result) )
              break;
            if ( (~(-2 << (8 * v20 - 1)) & ~v24) != 0 )
            {
              if ( !v74 )
              {
                if ( dword_47AC88 > 0 )
                  return (unsigned int)sub_F43B4(&off_46D334, "Invalid .debug_ranges data (no base address)");
                return result;
              }
              if ( v24 > result )
              {
                if ( dword_47AC88 > 0 )
                  return (unsigned int)sub_F43B4(&off_46D334, "Invalid .debug_ranges data (inverted range)");
                return result;
              }
              if ( v24 != result )
              {
                v26 = (char *)v75 + v24;
                v27 = (char *)v75 + result;
                if ( &v26[v79] || *(_BYTE *)(dword_4872D8 + 416) )
                {
                  v81 = &v27[a3];
                  v28 = ((int (__fastcall *)(int, char *))loc_16A938)(v73, &v26[a3]);
                  v29 = ((int (__fastcall *)(int, char *))loc_16A938)(v73, v81);
                  sub_E5CE0(a2, v28, v29 - 1);
                }
                else if ( dword_47AC88 > 0 )
                {
                  v31 = sub_1B87A8(v78);
                  sub_F43B4(&off_46D334, ".debug_ranges entry has start address of zero [in module %s]", v31);
                }
              }
            }
            else
            {
              v75 = (int *)result;
              v74 = 1;
            }
          }
          return result;
        }
LABEL_86:
        v72 = sub_94700((int)"dwarf2read.c", 14498, "sect_index_text not initialized");
        return sub_1309AC(v72, HIDWORD(v72));
      }
    }
LABEL_32:
    if ( dword_47AC88 > 0 )
      return (unsigned int)sub_F43B4(&off_46D334, "Offset %d out of bounds for DW_AT_ranges attribute", v16);
    return result;
  }
  if ( !*(_BYTE *)(dword_4872D8 + 216) )
  {
    result = ((int (*)(void))loc_11FFD0)();
    v18 = (_DWORD *)dword_4872D8;
  }
  v30 = v18[52];
  if ( v16 >= v30 )
    goto LABEL_32;
  v32 = v18[51];
  v33 = *(_DWORD *)(v78 + 152);
  v34 = (char *)(v32 + v16);
  if ( v33 == -1 )
  {
    sub_94700((int)"dwarf2read.c", 14326, "sect_index_text not initialized");
    goto LABEL_86;
  }
  result = (unsigned int)&dword_47AC88;
  v83 = v19;
  v35 = a4;
  v82 = *(_DWORD *)(*(_DWORD *)(v78 + 144) + 4 * v33);
  while ( 1 )
  {
    v36 = v32 + v30;
    if ( (char *)v36 == v34 )
      break;
    v37 = v34 + 1;
    switch ( *v34 )
    {
      case 0:
        return result;
      case 4:
        v48 = v34[1];
        v49 = 0;
        v50 = v34 + 2;
        v17 = (v48 & 0x80) == 0;
        v51 = v48 & 0x7F;
        if ( v17 )
        {
          v52 = 1;
        }
        else
        {
          v53 = 0;
          v52 = 1;
          v4 = v36;
          do
          {
            v54 = *v50++;
            v53 += 7;
            v5 = 32 - v53;
            ++v52;
            v55 = v54 & 0x7F;
            result = v51 | (v55 << v53);
            v51 = result;
            v49 |= (v55 << (v53 - 32)) | (v55 >> (32 - v53));
          }
          while ( v54 < 0 );
        }
        v56 = &v37[v52];
        v85[0] = v52;
        if ( v36 < (unsigned int)&v37[v52] )
          goto LABEL_26;
        v57 = v37[v52];
        v34 = v56 + 1;
        v58 = (v57 & 0x80) == 0;
        result = v57 & 0x7F;
        if ( (v57 & 0x80) == 0 )
          v4 = 1;
        v59 = 0;
        if ( !v58 )
        {
          v60 = 0;
          do
          {
            v61 = *v34++;
            v60 += 7;
            v5 = 32 - v60;
            v4 = v34 - v56;
            v80 = v61 & 0x7F;
            result |= v80 << v60;
            v59 |= (v80 << (v60 - 32)) | (v80 >> (32 - v60));
          }
          while ( v61 < 0 );
        }
        v85[0] = v4;
        if ( v36 < (unsigned int)v34 )
          goto LABEL_26;
        v39 = v51;
        goto LABEL_45;
      case 5:
        if ( v36 < (unsigned int)&v37[*(unsigned __int8 *)(v35 + 14)] )
          goto LABEL_26;
        v74 = 1;
        LODWORD(v47) = *v83;
        HIDWORD(v47) = v83 + 1;
        result = sub_11E3C0(v47, (int)(v34 + 1), v35, v85);
        v75 = (int *)result;
        v43 = dword_4872D8;
        v34 = &v37[v85[0]];
        goto LABEL_53;
      case 6:
        if ( v36 < (unsigned int)&v37[2 * *(unsigned __int8 *)(v35 + 14)] )
          goto LABEL_26;
        v5 = (int)v83;
        v4 = (int)v85;
        LODWORD(v38) = *v83;
        HIDWORD(v38) = v83 + 1;
        v39 = sub_11E3C0(v38, (int)(v34 + 1), v35, v85);
        HIDWORD(v40) = v83 + 1;
        LODWORD(v40) = *v83;
        v41 = (int)&v37[v85[0]];
        result = sub_11E3C0(v40, v41, v35, v85);
        v34 = (char *)(v41 + v85[0]);
        goto LABEL_45;
      case 7:
        if ( v36 < (unsigned int)&v37[*(unsigned __int8 *)(v35 + 14)] )
          goto LABEL_26;
        LODWORD(v63) = *v83;
        HIDWORD(v63) = v83 + 1;
        result = sub_11E3C0(v63, (int)(v34 + 1), v35, v85);
        v39 = result;
        v64 = v37[v85[0]];
        v4 = (int)&v37[v85[0]];
        v34 = &v37[v85[0] + 1];
        v65 = (v64 & 0x80) == 0;
        v66 = v64 & 0x7F;
        if ( (v64 & 0x80) == 0 )
          v5 = 1;
        v67 = 0;
        if ( !v65 )
        {
          v68 = 0;
          v69 = (int)&v37[v85[0]];
          v84 = (int *)result;
          do
          {
            v70 = *v34++;
            v68 += 7;
            result = (unsigned int)&v34[-v69];
            v71 = v70 & 0x7F;
            v66 |= v71 << v68;
            v67 |= (v71 << (v68 - 32)) | (v71 >> (32 - v68));
          }
          while ( v70 < 0 );
          v4 = v69;
          v39 = (unsigned int)v84;
          v5 = (int)&v34[-v69];
        }
        v85[0] = v5;
        if ( v36 < (unsigned int)v34 )
          goto LABEL_26;
        result = v39 + v66;
LABEL_45:
        if ( !v74 )
          goto LABEL_66;
        if ( result < v39 )
        {
          if ( dword_47AC88 > 0 )
            return (unsigned int)sub_F43B4(&off_46D334, "Invalid .debug_rnglists data (inverted range)");
          return result;
        }
        if ( result == v39 )
        {
          v43 = dword_4872D8;
        }
        else
        {
          v42 = (char *)v75 + v39;
          if ( (int *)((char *)v75 + v39 + v82) || (v43 = dword_4872D8, *(_BYTE *)(dword_4872D8 + 416)) )
          {
            v44 = (char *)v75 + a3 + result;
            v45 = ((int (__fastcall *)(int, char *))loc_16A938)(v73, &v42[a3]);
            v46 = ((int (__fastcall *)(int, char *))loc_16A938)(v73, v44);
            result = sub_E5CE0(a2, v45, v46 - 1);
            v43 = dword_4872D8;
          }
          else if ( dword_47AC88 > 0 )
          {
            v62 = sub_1B87A8(v78);
            result = (unsigned int)sub_F43B4(
                                     &off_46D334,
                                     ".debug_rnglists entry has start address of zero [in module %s]",
                                     v62);
            v43 = dword_4872D8;
          }
        }
LABEL_53:
        v32 = *(_DWORD *)(v43 + 204);
        v30 = *(_DWORD *)(v43 + 208);
        break;
      default:
LABEL_66:
        if ( dword_47AC88 > 0 )
          return (unsigned int)sub_F43B4(&off_46D334, "Invalid .debug_rnglists data (no base address)");
        return result;
    }
  }
LABEL_26:
  if ( dword_47AC88 > 0 )
    return (unsigned int)sub_F43B4(&off_46D334, "Offset %d is not terminated for DW_AT_ranges attribute", v16);
  return result;
}
