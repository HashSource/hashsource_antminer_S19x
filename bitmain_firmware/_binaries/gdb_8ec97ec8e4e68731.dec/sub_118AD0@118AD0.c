void __fastcall sub_118AD0(int a1, int a2)
{
  int v2; // r5
  int v3; // r4
  int v4; // r0
  int v5; // r0
  __int64 v6; // r6
  int v7; // r0
  __int64 v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r3
  int v12; // r2
  unsigned int v13; // lr
  unsigned __int64 v14; // r0
  unsigned __int64 v15; // r8
  int v16; // r12
  unsigned int v17; // r10
  int v19; // r4
  unsigned int v20; // r5
  __int64 v21; // r8
  _BOOL4 v22; // r1
  int v23; // r1
  int v24; // r0
  int v25; // r10
  int v26; // r8
  int v27; // r9
  int v28; // r8
  int v29; // r10
  int v30; // r0
  unsigned int v31; // r1
  unsigned int v32; // lr
  int v33; // r3
  unsigned int v34; // r4
  __int64 v35; // r2
  unsigned int v36; // r10
  void *v37; // r0
  unsigned int v38; // r9
  int v39; // r4
  int v40; // r9
  int v41; // r1
  void *v42; // r1
  unsigned int v43; // r8
  unsigned __int64 v44; // r0
  unsigned int v45; // lr
  bool v46; // cc
  int v47; // r0
  int v48; // r1
  int v49; // r4
  int v50; // r1
  int v51; // r0
  int v52; // r3
  __int64 v53; // r10
  int v54; // r1
  __int64 v55; // r2
  void *v56; // r1
  __int64 v57; // r4
  int v58; // r0
  unsigned int v59; // r4
  void *v60; // r0
  __int64 v61; // [sp+10h] [bp-A4h]
  int v62; // [sp+18h] [bp-9Ch]
  unsigned __int64 v63; // [sp+28h] [bp-8Ch]
  int v64; // [sp+28h] [bp-8Ch]
  unsigned int v65; // [sp+28h] [bp-8Ch]
  __int64 v66; // [sp+30h] [bp-84h]
  unsigned int v67; // [sp+38h] [bp-7Ch]
  _DWORD *v68; // [sp+3Ch] [bp-78h]
  int v69; // [sp+44h] [bp-70h]
  __int64 v70; // [sp+48h] [bp-6Ch]
  __int64 v71; // [sp+50h] [bp-64h]
  int v72; // [sp+58h] [bp-5Ch]
  int v73; // [sp+5Ch] [bp-58h]
  unsigned __int64 v74; // [sp+60h] [bp-54h]
  int v75; // [sp+78h] [bp-3Ch]
  int v76; // [sp+7Ch] [bp-38h]
  int v77; // [sp+94h] [bp-20h]
  int v78; // [sp+9Ch] [bp-18h] BYREF
  int v79; // [sp+A0h] [bp-14h] BYREF
  void *ptr; // [sp+A4h] [bp-10h] BYREF
  char *v81; // [sp+A8h] [bp-Ch]
  int v82; // [sp+ACh] [bp-8h]

  while ( 1 )
  {
    v2 = a1;
    v3 = a2;
    v72 = a1;
    v69 = a2;
    v68 = (_DWORD *)((int (*)(void))loc_26C048)();
    ptr = 0;
    v81 = 0;
    v82 = 0;
    v4 = sub_26BC70(v2);
    v5 = sub_170040(v4);
    v75 = ((int (__fastcall *)(int))loc_165D78)(v5);
    if ( v3 )
    {
      v76 = sub_26E978(v3);
      v77 = 0;
      goto LABEL_3;
    }
    v49 = sub_26BC70(v72);
    if ( v49 == sub_26BD30(v72) )
      break;
    sub_94700((int)"dwarf2loc.c", 1786, "Should not be able to create a lazy value with an enclosing type");
LABEL_110:
    sub_92F64(10, "Can't do read-modify-write to update bitfield; containing word has been optimized out");
LABEL_111:
    a1 = sub_92F64(9, "Can't do read-modify-write to update bitfield; containing word is unavailable");
  }
  v77 = sub_26BCB8(v72, v50);
  v76 = 0;
LABEL_3:
  v63 = 8 * sub_26BC80(v72);
  v6 = sub_26BCA0(v72);
  if ( v6 )
  {
    v7 = sub_26BCB0(v72);
    v8 = sub_26BC80(v7);
    v63 += 8 * v8 + sub_26BC90(v72);
    if ( v69 && (v9 = sub_26BC70(v69), v10 = sub_170040(v9), !((int (__fastcall *)(int))loc_165BB8)(v10)) )
    {
      v66 = (unsigned int)(8 * *(_DWORD *)(sub_26BC70(v69) + 20));
      v6 = v66 - sub_26BCA0(v72);
    }
    else
    {
      v66 = sub_26BCA0(v72);
      v6 = 0;
    }
  }
  else
  {
    v66 = (unsigned int)(8 * *(_DWORD *)(sub_26BC70(v72) + 20));
  }
  v11 = v68[2];
  v12 = v68[3];
  v13 = -858993459 * ((v12 - v11) >> 3);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v11 + 24);
    v15 = v63;
    if ( v63 >= v14 )
    {
      v16 = v68[2];
      v17 = 0;
      while ( 1 )
      {
        ++v17;
        v15 -= v14;
        v59 = v17;
        if ( v17 == v13 )
          break;
        v16 += 40;
        v14 = *(_QWORD *)(v16 + 24);
        if ( v14 > v15 )
        {
          v63 = v15;
          v67 = v17;
          goto LABEL_18;
        }
      }
    }
    else
    {
      v59 = 0;
      v67 = 0;
LABEL_18:
      if ( v13 > v59 && v6 < v66 )
      {
        while ( 1 )
        {
          v19 = v11 + 40 * v59;
          v20 = *(_DWORD *)(v19 + 24) - v63;
          if ( __SPAIR64__((int)v66 - (int)v6, (int)v66 - (int)v6) < v20 )
            v20 = v66 - v6;
          switch ( *(_DWORD *)v19 )
          {
            case 0:
              v71 = ((_BYTE)v63 + *(_BYTE *)(v19 + 32)) & 7;
              v40 = (__int64)(v63 + *(_QWORD *)(v19 + 32)) >> 3;
              v65 = v40 + *(_DWORD *)(v19 + 8);
              if ( !(_DWORD)v71 && (v20 & 7) == 0 && (v6 & 7) == 0 )
              {
                v41 = (__int64)(__PAIR64__(v20 & 7, (SHIDWORD(v6) >> 31) & 7) + v6) >> 3;
                if ( v69 )
                  sub_FAB00(v40 + *(_DWORD *)(v19 + 8), v76 + v41, v20 >> 3);
                else
                  sub_260F8C(
                    v72,
                    *(unsigned __int8 *)(v19 + 12),
                    v6,
                    HIDWORD(v6),
                    *(unsigned __int8 *)(v19 + 12),
                    v65,
                    v77 + v41,
                    v20 >> 3);
                v21 = v20;
                goto LABEL_26;
              }
              v36 = v20;
              v42 = ptr;
              v43 = (v71 + 7 + v20) >> 3;
              if ( v43 > v81 - (_BYTE *)ptr )
              {
                sub_AF660((char **)&ptr, v43 - (v81 - (_BYTE *)ptr));
                v42 = ptr;
                if ( v69 )
                  goto LABEL_66;
              }
              else
              {
                if ( v43 < v81 - (_BYTE *)ptr )
                  v81 = (char *)ptr + v43;
                if ( v69 )
                {
LABEL_66:
                  if ( v71 || (v20 & 7) != 0 )
                  {
                    if ( v43 > 8 )
                    {
                      sub_FA844(v65, (int)v42, 1);
                      sub_FA844(v65 - 1 + v43, (int)ptr + v43 - 1, 1);
                    }
                    else
                    {
                      sub_FA844(v65, (int)v42, v43);
                    }
                    v42 = ptr;
                  }
                  if ( v20 )
                  {
                    sub_1153D8((int)v42, v71, v76, v6, v20, v75);
                    v42 = ptr;
                  }
                  sub_FAB00(v65, (int)v42, v43);
                  goto LABEL_53;
                }
              }
              sub_260F8C(
                v72,
                *(unsigned __int8 *)(v19 + 12),
                v6,
                HIDWORD(v6),
                *(unsigned __int8 *)(v19 + 12),
                v40 + *(_DWORD *)(v19 + 8),
                v42,
                v43);
              v21 = v20;
              if ( !v20 )
                goto LABEL_86;
              v55 = v6;
              v56 = ptr;
              v61 = v20;
              v62 = v75;
              v57 = v71;
              v58 = v77;
              goto LABEL_100;
            case 1:
              v73 = sub_15FE8C(v68[5], v68[6], v68[7], v68[8], v68[9]);
              v27 = sub_15ECB4(v73);
              v28 = sub_117648(v27, *(int *)(v19 + 8));
              v29 = ((int (__fastcall *)(int, int))loc_1DD420)(v27, v28);
              v30 = ((int (__fastcall *)(int))loc_165BB8)(v27);
              v31 = *(_DWORD *)(v19 + 32);
              v32 = *(_DWORD *)(v19 + 36);
              if ( v30 || __PAIR64__(v32, v31) + *(_QWORD *)(v19 + 24) >= 8 * v29 )
              {
                v34 = v63 + v31;
                v64 = (v63 + __PAIR64__(v32, v31)) >> 32;
              }
              else
              {
                v33 = (8 * v29 + v63 - (__PAIR64__(v32, v31) + *(_QWORD *)(v19 + 24))) >> 32;
                v34 = 8 * v29 + v63 - (v31 + *(_DWORD *)(v19 + 24));
                v64 = v33;
              }
              v70 = v34 & 7;
              HIDWORD(v35) = ((unsigned __int64)v20 + 7) >> 32;
              v36 = v20;
              LODWORD(v35) = v34 & 7;
              v37 = ptr;
              v38 = (v20 + 7 + v35) >> 3;
              if ( v38 > v81 - (_BYTE *)ptr )
              {
                sub_AF660((char **)&ptr, v38 - (v81 - (_BYTE *)ptr));
                v37 = ptr;
              }
              else if ( v38 < v81 - (_BYTE *)ptr )
              {
                v81 = (char *)ptr + v38;
              }
              v39 = (v34 >> 3) | (v64 << 29);
              if ( v69 )
              {
                if ( v70 || (v20 & 7) != 0 )
                {
                  sub_15EE18(v73, v28, v39, v38, v37, &v78, &v79);
                  if ( v78 )
                    goto LABEL_110;
                  if ( v79 )
                    goto LABEL_111;
                  v37 = ptr;
                }
                if ( v20 )
                {
                  sub_1153D8((int)v37, v70, v76, v6, v20, v75);
                  v37 = ptr;
                }
                ((void (__fastcall *)(int, int, int, unsigned int, void *))loc_15F05C)(v73, v28, v39, v38, v37);
LABEL_53:
                v21 = v36;
                v11 = v68[2];
                v12 = v68[3];
              }
              else
              {
                v47 = sub_15EE18(v73, v28, v39, v38, v37, &v78, &v79);
                v21 = v20;
                if ( v47 )
                {
                  if ( v20 )
                  {
                    v55 = v6;
                    v56 = ptr;
                    v57 = v70;
                    v62 = v75;
                    v58 = v77;
                    v61 = v36;
LABEL_100:
                    sub_1153D8(v58, v55, (int)v56, v57, v61, v62);
                  }
                  else
                  {
LABEL_86:
                    v21 = 0;
                  }
                }
                else
                {
                  if ( v78 )
                    sub_26BFB0(v72, v48, v6, HIDWORD(v6), v20, 0);
                  if ( v79 )
                    sub_26B438(v72, v48, v6, HIDWORD(v6), v20, 0);
                }
LABEL_26:
                v11 = v68[2];
                v12 = v68[3];
              }
LABEL_27:
              v6 += v21;
              v63 = 0;
              v22 = ++v67 < -858993459 * ((v12 - v11) >> 3) && v6 < v66;
              v59 = v67;
              if ( !v22 )
                goto LABEL_14;
              break;
            case 2:
              if ( v69 )
                goto LABEL_25;
              v24 = sub_1322B4(v68[1]);
              v25 = sub_1B7250(v24);
              v26 = 8 * *(_DWORD *)(sub_26BC70(*(_DWORD *)(v19 + 8)) + 20);
              if ( *(_QWORD *)(v19 + 32) + *(_QWORD *)(v19 + 24) > (unsigned __int64)(unsigned int)v26 )
              {
                v21 = v20;
                v11 = v68[2];
                v12 = v68[3];
                goto LABEL_27;
              }
              v51 = ((int (__fastcall *)(int))loc_165BB8)(v25);
              v52 = *(_DWORD *)(v19 + 32);
              if ( v51 )
              {
                LODWORD(v53) = v63 + v52;
                HIDWORD(v53) = v63 + v52;
              }
              else
              {
                LODWORD(v53) = v26 + v63 - (v52 + *(_DWORD *)(v19 + 24));
                HIDWORD(v53) = v53;
              }
              v54 = sub_26E738(*(_DWORD *)(v19 + 8));
              v21 = v20;
              if ( !v20 )
              {
                v21 = 0;
                v11 = v68[2];
                v12 = v68[3];
                goto LABEL_27;
              }
              sub_1153D8(v77, v6, v54, v53, v20, v75);
              goto LABEL_26;
            case 3:
              v23 = v69;
              v21 = v20;
              if ( v69 )
                goto LABEL_33;
              v74 = v63 + *(_QWORD *)(v19 + 32);
              v44 = 8LL * *(_QWORD *)(v19 + 16);
              if ( v44 > v74 )
              {
                v45 = v20;
                v46 = 0;
                if ( (_DWORD)v44 == (_DWORD)v74 )
                  v46 = v20 != 0;
                if ( v46 )
                {
                  v20 = v44 - v74;
                  v45 = v44 - v74;
                }
                if ( v20 )
                {
                  sub_1153D8(v77, v6, *(_DWORD *)(v19 + 8), v74, v45, v75);
                  v11 = v68[2];
                  v12 = v68[3];
                }
              }
              goto LABEL_27;
            case 4:
LABEL_25:
              v21 = v20;
              sub_26BFB0(v72, *(_DWORD *)v19, v6, HIDWORD(v6), v20, 0);
              goto LABEL_26;
            case 5:
              v23 = v69;
              v21 = v20;
              if ( !v69 )
                goto LABEL_27;
LABEL_33:
              sub_26BFB0(v72, v23, v6, HIDWORD(v6), v21, 0);
              goto LABEL_26;
            default:
              sub_94700((int)"dwarf2loc.c", 2040, "invalid location type");
              v60 = ptr;
              if ( ptr )
                sub_339E64(ptr);
              sub_338FFC(v60);
          }
        }
      }
    }
  }
LABEL_14:
  if ( ptr )
    sub_339E64(ptr);
}
