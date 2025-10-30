_DWORD *__fastcall sub_1B0D68(_DWORD *a1, unsigned int a2, int a3, int a4)
{
  _DWORD *v4; // r4
  unsigned int v5; // r6
  unsigned int v6; // r7
  int v7; // r9
  bool v8; // zf
  int v9; // r3
  int v10; // r3
  int v12; // r3
  int v13; // r8
  int *v14; // r5
  unsigned int v15; // r2
  int v16; // r9
  int v17; // r2
  int v18; // r7
  int v19; // r11
  int v20; // r2
  int v21; // r11
  int v22; // r7
  int v23; // r1
  int v24; // r3
  int v25; // r5
  int v26; // r5
  unsigned int v27; // r1
  unsigned int v28; // r0
  unsigned int v29; // r3
  unsigned int v30; // r2
  bool v31; // cf
  int v32; // r12
  int v33; // r2
  int v34; // r3
  int v35; // r3
  int v36; // r0
  unsigned int v37; // r2
  int v38; // r8
  int v39; // r6
  int v40; // r3
  int v41; // r1
  int v42; // r0
  int v43; // r0
  int v44; // r12
  int v45; // r11
  int v46; // r3
  int v47; // r2
  int v48; // r2
  int v50; // r0
  int v51; // r1
  __int64 v52; // r0
  unsigned int v53; // r3
  unsigned int v54; // r1
  bool v55; // cf
  int v56; // r3
  _DWORD *v57; // r3
  unsigned int v58; // r1
  int v59; // r1
  int v60; // lr
  int v61; // r0
  int v63; // [sp+10h] [bp-1Ch]
  _DWORD *v64; // [sp+14h] [bp-18h]
  int v65; // [sp+18h] [bp-14h]
  int v66; // [sp+1Ch] [bp-10h]
  int v67; // [sp+20h] [bp-Ch]
  unsigned int v68; // [sp+24h] [bp-8h]

  v8 = a4 == 0;
  if ( a4 )
    v9 = 7;
  else
    v9 = 1;
  v66 = v9;
  if ( v8 )
    v10 = 7;
  else
    v10 = 1;
  v65 = v10;
  if ( a3 )
  {
    v4 = *(_DWORD **)(a3 + 4);
    if ( v4 )
    {
      v5 = a2;
      v63 = 0;
      v64 = 0;
LABEL_11:
      v12 = v4[10];
      v13 = *(_DWORD *)(v12 + 84);
      if ( v13 <= 0 )
        goto LABEL_10;
      v14 = (int *)v4[42];
      v15 = v4[43];
      v16 = *(_DWORD *)(v12 + 80);
      if ( v15 <= (unsigned int)v14 )
        goto LABEL_10;
      while ( 1 )
      {
        if ( *v14 )
        {
          v17 = v14[1];
          v18 = *(_DWORD *)(*v14 + 28);
          v19 = *(_DWORD *)(v17 + 144);
          if ( v5 >= v18 + *(_DWORD *)(v19 + 4 * sub_162FDC(*(_DWORD *)(v17 + 36), *v14)) )
          {
            v20 = v14[1];
            v21 = *(_DWORD *)(v20 + 144);
            v22 = *(_DWORD *)(*v14 + 28) + *(_DWORD *)(*v14 + 36);
            if ( v5 < v22 + *(_DWORD *)(v21 + 4 * sub_162FDC(*(_DWORD *)(v20 + 36), *v14)) )
            {
              v23 = *v14;
              v24 = v14[1];
              v25 = *(_DWORD *)(v24 + 144);
              v6 = v5 - *(_DWORD *)(v25 + 4 * sub_162FDC(*(_DWORD *)(v24 + 36), v23));
              if ( *(_DWORD *)(v16 + 8) > v6 )
                goto LABEL_10;
              v26 = v13 - 1;
              v27 = 0;
              v28 = *(_DWORD *)(v16 + 48 * (v13 - 1) + 8);
              while ( v6 < v28 )
              {
                while ( 1 )
                {
                  v29 = (int)(v27 + v26) / 2;
                  v30 = *(_DWORD *)(v16 + 48 * v29 + 8);
                  v31 = v27 >= v29;
                  if ( v27 != v29 )
                    v31 = v30 >= v6;
                  if ( !v31 )
                    break;
                  v28 = *(_DWORD *)(v16 + 48 * v29 + 8);
                  v26 = (int)(v27 + v26) / 2;
                  if ( v6 >= v30 )
                    goto LABEL_27;
                }
                v27 = (int)(v27 + v26) / 2;
              }
LABEL_27:
              v32 = *(_DWORD *)(v4[10] + 84) - 1;
              if ( v32 > v26 )
              {
                v33 = v26 + 1;
                if ( *(_DWORD *)(v16 + 48 * (v26 + 1) + 8) == v28 )
                {
                  v34 = 3 * v26;
                  v26 = *(_DWORD *)(v4[10] + 84) - 1;
                  v35 = v16 + 16 * v34;
                  while ( 1 )
                  {
                    if ( v33 == v32 )
                      goto LABEL_33;
                    v36 = *(_DWORD *)(v35 + 56);
                    v35 += 48;
                    if ( v36 != *(_DWORD *)(v35 + 56) )
                      break;
                    ++v33;
                  }
                  v26 = v33;
                }
              }
LABEL_33:
              if ( v26 < 0 )
                goto LABEL_10;
              v37 = v5;
              v38 = v16 + 48 * v26;
              v39 = -1;
              v40 = v16;
              while ( 2 )
              {
                if ( (*(_BYTE *)(v38 + 32) & 0xF) == 6 )
                  goto LABEL_51;
                v41 = *(__int16 *)(v38 + 22);
                if ( v41 >= 0 )
                {
                  v42 = v4[42] + 12 * v41;
                  if ( v42 )
                  {
                    v68 = v37;
                    v67 = v40;
                    v43 = ((int (__fastcall *)(int, int))loc_21BE10)(v42, a3);
                    v40 = v67;
                    v37 = v68;
                    if ( !v43 )
                      goto LABEL_51;
                  }
                }
                v44 = *(_DWORD *)(v38 + 24);
                if ( !v26 )
                {
                  if ( v44 )
                  {
                    v45 = 0;
                    v7 = v40;
                    v46 = v39;
                    v8 = v39 == -1;
                    v5 = v37;
                    v44 = *(_DWORD *)(v7 + 24);
                    if ( !v8 )
                    {
                      if ( v44 )
                      {
                        v47 = v7;
                        goto LABEL_45;
                      }
                      goto LABEL_54;
                    }
LABEL_77:
                    LODWORD(v52) = v46;
                    v46 = v26;
LABEL_55:
                    v48 = v7 + 48 * v46;
                    HIDWORD(v52) = *(_DWORD *)(v48 + 24);
                    if ( HIDWORD(v52) )
                      goto LABEL_87;
LABEL_56:
                    if ( v63 )
                    {
                      v53 = *(_DWORD *)(v48 + 8);
                      v54 = *(_DWORD *)(v63 + 8);
                      v55 = v54 >= v53;
                      if ( v54 >= v53 )
                        v56 = v63;
                      else
                        v56 = v48;
                      v63 = v56;
                      v57 = v64;
                      if ( !v55 )
                        v57 = v4;
                      v64 = v57;
                    }
                    else
                    {
                      v63 = v48;
                      v64 = v4;
                    }
                    goto LABEL_10;
                  }
LABEL_63:
                  if ( v39 == -1 )
                    v39 = v26;
                  --v26;
LABEL_52:
                  v38 -= 48;
                  if ( v26 < 0 )
                  {
                    v7 = v40;
                    v46 = v39;
                    v5 = v37;
                    if ( v46 == -1 )
                      goto LABEL_10;
LABEL_54:
                    LODWORD(v52) = v46;
                    goto LABEL_55;
                  }
                  continue;
                }
                break;
              }
              if ( (*(_BYTE *)(v38 + 32) & 0xF) == v65
                && (*(_BYTE *)(v38 - 16) & 0xF) == v66
                && *(_DWORD *)(v38 - 24) == v44
                && *(_DWORD *)(v38 + 8) == *(_DWORD *)(v38 - 40) )
              {
                v59 = *(__int16 *)(v38 + 22);
                v60 = *(__int16 *)(v38 - 26);
                if ( v59 < 0 )
                {
                  if ( v60 >= 0 )
                  {
                    v50 = v4[42];
                    v51 = 0;
                    goto LABEL_83;
                  }
LABEL_51:
                  --v26;
                  goto LABEL_52;
                }
                v50 = v4[42];
                v51 = v50 + 12 * v59;
                if ( v60 < 0 )
                  v61 = 0;
                else
LABEL_83:
                  v61 = v50 + 12 * v60;
                if ( v61 == v51 )
                  goto LABEL_51;
              }
              if ( !v44 )
                goto LABEL_63;
              if ( v44 + *(_DWORD *)(v38 + 8) > v6 || *(_DWORD *)(v38 - 40) + *(_DWORD *)(v38 - 24) <= v6 )
              {
                v58 = v37;
                v47 = v38;
                v45 = v26;
                v7 = v40;
                v46 = v39;
                v8 = v39 == -1;
                v5 = v58;
                if ( !v8 )
                {
LABEL_45:
                  if ( v6 >= v44 + *(_DWORD *)(v47 + 8) )
                    goto LABEL_70;
                  goto LABEL_46;
                }
                goto LABEL_77;
              }
              goto LABEL_51;
            }
          }
          v15 = v4[43];
        }
        v14 += 3;
        if ( v15 <= (unsigned int)v14 )
          goto LABEL_10;
      }
    }
    v64 = 0;
    v63 = 0;
  }
  else
  {
    v52 = sub_94700(
            (int)"minsyms.c",
            700,
            "%s: Assertion `%s' failed.",
            "bound_minimal_symbol lookup_minimal_symbol_by_pc_section_1(CORE_ADDR, obj_section*, int)",
            "section != NULL");
LABEL_87:
    if ( HIDWORD(v52) + *(_DWORD *)(v48 + 8) > v6 )
    {
      v45 = v46;
LABEL_46:
      v48 = v7 + 48 * v45;
      goto LABEL_56;
    }
    if ( (_DWORD)v52 != -1 )
    {
      v46 = v52;
LABEL_70:
      v48 = v7 + 48 * v46;
      goto LABEL_56;
    }
LABEL_10:
    v4 = (_DWORD *)((int (__fastcall *)(_DWORD, _DWORD *))loc_1B7308)(*(_DWORD *)(a3 + 4), v4);
    if ( v4 )
      goto LABEL_11;
  }
  *a1 = v63;
  a1[1] = v64;
  return a1;
}
