int __fastcall sub_12EF34(_WORD *a1, unsigned int *a2, unsigned int *a3, _DWORD *a4, int a5)
{
  int v5; // r7
  int v8; // r6
  int v9; // r0
  unsigned int v10; // r8
  unsigned int v11; // r11
  int result; // r0
  unsigned int v13; // r10
  int v14; // r5
  int v15; // r0
  int v16; // r3
  _DWORD *v17; // r1
  int v18; // r6
  int v19; // r2
  int v20; // r7
  __int64 v21; // r0
  unsigned int v22; // r5
  __int64 v23; // r0
  unsigned int v24; // r0
  unsigned int v25; // r5
  unsigned int v26; // r3
  int v27; // r5
  int v28; // r2
  char *v29; // r9
  unsigned int v30; // r5
  _BYTE *v31; // r6
  int v32; // r0
  __int64 v33; // r0
  unsigned int v34; // r4
  __int64 v35; // r0
  int v36; // r6
  unsigned int v37; // r0
  unsigned int v38; // r4
  unsigned int v39; // r10
  int v40; // r3
  unsigned int v41; // r3
  __int64 v42; // r0
  char v43; // r2
  int v44; // r3
  char *v45; // r9
  int v46; // r2
  int v47; // lr
  int v48; // r12
  char v49; // t1
  unsigned int v50; // r4
  _BYTE *v51; // r4
  char v52; // r1
  bool v53; // zf
  int v54; // r1
  int v55; // lr
  char v56; // t1
  int v57; // r0
  int v58; // r11
  __int64 v59; // r0
  int v60; // r0
  char v61; // r3
  _BYTE *v62; // r6
  char *v63; // r12
  int v64; // r10
  int v65; // r1
  int v66; // r2
  char v67; // t1
  unsigned int v68; // r8
  __int64 v69; // r0
  _DWORD *v70; // [sp+8h] [bp-64h]
  int v73; // [sp+14h] [bp-58h]
  unsigned int v74; // [sp+18h] [bp-54h]
  unsigned int v75; // [sp+18h] [bp-54h]
  int v76; // [sp+1Ch] [bp-50h]
  unsigned int v77; // [sp+20h] [bp-4Ch]
  unsigned int v78; // [sp+20h] [bp-4Ch]
  int v79; // [sp+28h] [bp-44h]
  int v80; // [sp+30h] [bp-3Ch]
  int v81; // [sp+34h] [bp-38h]
  int v82; // [sp+38h] [bp-34h]
  int v83; // [sp+3Ch] [bp-30h]
  int v84; // [sp+40h] [bp-2Ch]
  int v85; // [sp+40h] [bp-2Ch]
  int v86; // [sp+44h] [bp-28h]
  int v87; // [sp+48h] [bp-24h]
  _DWORD v88[2]; // [sp+64h] [bp-8h] BYREF

  v8 = sub_12E694((int)a1, 18, (int)a4);
  if ( v8 )
  {
    v9 = sub_12E694((int)a1, 17, (int)a4);
    if ( !v9 )
      return 1;
    v10 = *(_DWORD *)(v9 + 8);
    v11 = *(_DWORD *)(v8 + 8);
    if ( *((__int16 *)a4 + 6) > 3 )
    {
      switch ( *(_WORD *)(v8 + 2) & 0x7FFF )
      {
        case 5:
        case 6:
        case 7:
        case 0xB:
        case 0xD:
        case 0xF:
        case 0x21:
          v11 += v10;
          result = 3;
          break;
        default:
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      result = 3;
    }
    goto LABEL_5;
  }
  result = sub_12E694((int)a1, 85, (int)a4);
  if ( !result )
    return result;
  v13 = *(_DWORD *)(result + 8);
  if ( *a1 != 17 )
    v13 += a4[46];
  v14 = *a4;
  v80 = *a4;
  v15 = sub_1B7250(*a4);
  v16 = *(_DWORD *)(v14 + 152);
  v82 = v15;
  if ( v16 == -1 )
  {
    sub_94700((int)"dwarf2read.c", 14580, "sect_index_text not initialized");
    goto LABEL_111;
  }
  v81 = *a4;
  v17 = (_DWORD *)dword_4872D8;
  v83 = *(_DWORD *)(*(_DWORD *)(v80 + 144) + 4 * v16);
  v70 = *(_DWORD **)(*a4 + 36);
  v73 = a4[15];
  v76 = a4[14];
  if ( *((__int16 *)a4 + 6) <= 4 )
  {
    v18 = *((unsigned __int8 *)a4 + 14);
    if ( !*(_BYTE *)(dword_4872D8 + 196) )
    {
      ((void (__fastcall *)(int, int))loc_11FFD0)(v81, dword_4872D8 + 180);
      v17 = (_DWORD *)dword_4872D8;
    }
    if ( v17[47] > v13 )
    {
      v19 = *(_DWORD *)(v81 + 152);
      v20 = v17[46] + v13;
      if ( v19 != -1 )
      {
        v11 = 0;
        v79 = 0;
        v10 = 0;
        v84 = *(_DWORD *)(*(_DWORD *)(v81 + 144) + 4 * v19);
        while ( 1 )
        {
          HIDWORD(v21) = v70 + 1;
          LODWORD(v21) = *v70;
          v22 = sub_11E3C0(v21, v20, (int)a4, v88);
          HIDWORD(v23) = v70 + 1;
          LODWORD(v23) = *v70;
          v24 = sub_11E3C0(v23, v20 + v18, (int)a4, v88);
          v20 += 2 * (__int16)v18;
          if ( !(v22 | v24) )
            break;
          if ( (~(-2 << (8 * v18 - 1)) & ~v22) != 0 )
          {
            if ( !v73 )
            {
              if ( dword_47AC88 > 0 )
                sub_F43B4(&off_46D334, "Invalid .debug_ranges data (no base address)");
              return 1;
            }
            if ( v22 > v24 )
            {
              if ( dword_47AC88 > 0 )
                sub_F43B4(&off_46D334, "Invalid .debug_ranges data (inverted range)");
              return 1;
            }
            if ( v22 != v24 )
            {
              v25 = v22 + v76;
              v74 = v24 + v76;
              if ( v84 + v25 || *(_BYTE *)(dword_4872D8 + 416) )
              {
                if ( a5 )
                {
                  ((void (__fastcall *)(int, unsigned int))loc_16A938)(v82, v83 + v25);
                  ((void (__fastcall *)(int, unsigned int))loc_16A938)(v82, v83 + v74);
                  sub_B71D8(*(int (__fastcall ****)(_DWORD))(v80 + 28));
                }
                if ( v79 )
                {
                  if ( v10 >= v25 )
                    v10 = v25;
                  if ( v11 < v74 )
                    v11 = v74;
                }
                else
                {
                  v11 = v74;
                  v10 = v25;
                  v79 = 1;
                }
              }
              else if ( dword_47AC88 > 0 )
              {
                v32 = sub_1B87A8(v81);
                sub_F43B4(&off_46D334, ".debug_ranges entry has start address of zero [in module %s]", v32);
              }
            }
          }
          else
          {
            v76 = v24;
            v73 = 1;
          }
        }
LABEL_55:
        if ( !v79 )
          return 1;
        result = 2;
LABEL_5:
        if ( v10 >= v11 || !v10 && !*(_BYTE *)(dword_4872D8 + 416) )
          return 1;
        *a2 = v10;
        if ( a3 )
          *a3 = v11;
        return result;
      }
LABEL_112:
      v69 = sub_94700((int)"dwarf2read.c", 14498, "sect_index_text not initialized");
      return sub_12F8FC(v69, HIDWORD(v69));
    }
LABEL_50:
    if ( dword_47AC88 > 0 )
      sub_F43B4(&off_46D334, "Offset %d out of bounds for DW_AT_ranges attribute", v13);
    return 1;
  }
  if ( !*(_BYTE *)(dword_4872D8 + 216) )
  {
    ((void (__fastcall *)(_DWORD, int))loc_11FFD0)(*a4, dword_4872D8 + 200);
    v17 = (_DWORD *)dword_4872D8;
  }
  v26 = v17[52];
  if ( v26 <= v13 )
    goto LABEL_50;
  v27 = v17[51];
  v28 = *(_DWORD *)(v81 + 152);
  v29 = (char *)(v27 + v13);
  if ( v28 == -1 )
  {
LABEL_111:
    sub_94700((int)"dwarf2read.c", 14326, "sect_index_text not initialized");
    goto LABEL_112;
  }
  v10 = 0;
  v79 = 0;
  v87 = *(_DWORD *)(*(_DWORD *)(v81 + 144) + 4 * v28);
  v86 = v13;
  v75 = 0;
  v85 = (int)a4;
  while ( 1 )
  {
    v30 = v27 + v26;
    if ( (char *)v30 == v29 )
      break;
    v31 = v29 + 1;
    switch ( *v29 )
    {
      case 0:
        v11 = v75;
        goto LABEL_55;
      case 4:
        v43 = v29[1];
        v44 = 0;
        v45 = v29 + 2;
        v53 = (v43 & 0x80) == 0;
        v46 = v43 & 0x7F;
        if ( v53 )
        {
          v47 = 1;
        }
        else
        {
          v48 = 0;
          v47 = 1;
          v5 = v30;
          do
          {
            v49 = *v45++;
            v48 += 7;
            ++v47;
            v50 = v49 & 0x7F;
            v46 |= v50 << v48;
            v44 |= (v50 << (v48 - 32)) | (v50 >> (32 - v48));
          }
          while ( v49 < 0 );
        }
        v51 = &v31[v47];
        v88[0] = v47;
        if ( v30 < (unsigned int)&v31[v47] )
          goto LABEL_12;
        v52 = v31[v47];
        v29 = v51 + 1;
        v53 = (v52 & 0x80) == 0;
        v37 = v52 & 0x7F;
        if ( (v52 & 0x80) == 0 )
          v5 = 1;
        v54 = 0;
        if ( !v53 )
        {
          v55 = 0;
          do
          {
            v56 = *v29++;
            v55 += 7;
            v5 = v29 - v51;
            v77 = v56 & 0x7F;
            v37 |= v77 << v55;
            v54 |= (v77 << (v55 - 32)) | (v77 >> (32 - v55));
          }
          while ( v56 < 0 );
        }
        v88[0] = v5;
        if ( v30 < (unsigned int)v29 )
          goto LABEL_12;
        v34 = v46;
        goto LABEL_62;
      case 5:
        if ( v30 < (unsigned int)&v31[*(unsigned __int8 *)(v85 + 14)] )
          goto LABEL_12;
        v73 = 1;
        LODWORD(v42) = *v70;
        HIDWORD(v42) = v70 + 1;
        v76 = sub_11E3C0(v42, (int)(v29 + 1), v85, v88);
        v29 = &v31[v88[0]];
        v40 = dword_4872D8;
        goto LABEL_77;
      case 6:
        if ( v30 < (unsigned int)&v31[2 * *(unsigned __int8 *)(v85 + 14)] )
          goto LABEL_12;
        v5 = (int)v88;
        LODWORD(v33) = *v70;
        HIDWORD(v33) = v70 + 1;
        v34 = sub_11E3C0(v33, (int)(v29 + 1), v85, v88);
        HIDWORD(v35) = v70 + 1;
        LODWORD(v35) = *v70;
        v36 = (int)&v31[v88[0]];
        v37 = sub_11E3C0(v35, v36, v85, v88);
        v29 = (char *)(v36 + v88[0]);
        goto LABEL_62;
      case 7:
        if ( v30 < (unsigned int)&v31[*(unsigned __int8 *)(v85 + 14)] )
          goto LABEL_12;
        v58 = 0;
        LODWORD(v59) = *v70;
        HIDWORD(v59) = v70 + 1;
        v60 = sub_11E3C0(v59, (int)(v29 + 1), v85, v88);
        v34 = v60;
        v61 = v31[v88[0]];
        v62 = &v31[v88[0]];
        v63 = v62 + 1;
        v64 = v61 & 0x7F;
        if ( v61 < 0 )
        {
          v66 = 0;
          v78 = v10;
          do
          {
            v67 = *v63++;
            v66 += 7;
            v5 = 32 - v66;
            v68 = v67 & 0x7F;
            v65 = v63 - v62;
            v64 |= v68 << v66;
            v58 |= (v68 << (v66 - 32)) | (v68 >> (32 - v66));
          }
          while ( v67 < 0 );
          v10 = v78;
        }
        else
        {
          v65 = 1;
        }
        v29 = &v62[v65];
        v88[0] = v65;
        if ( v30 < (unsigned int)&v62[v65] )
          goto LABEL_12;
        v37 = v60 + v64;
LABEL_62:
        if ( !v73 )
          goto LABEL_92;
        if ( v37 < v34 )
        {
          if ( dword_47AC88 > 0 )
            sub_F43B4(&off_46D334, "Invalid .debug_rnglists data (inverted range)");
          return 1;
        }
        if ( v37 == v34 )
        {
          v40 = dword_4872D8;
        }
        else
        {
          v38 = v76 + v34;
          v39 = v76 + v37;
          if ( v87 + v38 || (v40 = dword_4872D8, *(_BYTE *)(dword_4872D8 + 416)) )
          {
            if ( a5 )
            {
              v5 = v82;
              ((void (__fastcall *)(int, unsigned int))loc_16A938)(v82, v83 + v38);
              ((void (__fastcall *)(int, unsigned int))loc_16A938)(v82, v83 + v39);
              sub_B71D8(*(int (__fastcall ****)(_DWORD))(v80 + 28));
            }
            if ( v79 )
            {
              v41 = v75;
              if ( v10 >= v38 )
                v10 = v38;
              if ( v75 < v39 )
                v41 = v39;
              v75 = v41;
            }
            else
            {
              v75 = v39;
              v10 = v38;
            }
            v79 = 1;
            v40 = dword_4872D8;
          }
          else if ( dword_47AC88 > 0 )
          {
            v57 = sub_1B87A8(v81);
            sub_F43B4(&off_46D334, ".debug_rnglists entry has start address of zero [in module %s]", v57);
            v40 = dword_4872D8;
          }
        }
LABEL_77:
        v27 = *(_DWORD *)(v40 + 204);
        v26 = *(_DWORD *)(v40 + 208);
        break;
      default:
LABEL_92:
        if ( dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "Invalid .debug_rnglists data (no base address)");
        return 1;
    }
  }
LABEL_12:
  if ( dword_47AC88 > 0 )
    sub_F43B4(&off_46D334, "Offset %d is not terminated for DW_AT_ranges attribute", v86);
  return 1;
}
