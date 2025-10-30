int __fastcall sub_134AAC(int a1, int a2, int *a3, _DWORD *a4)
{
  bool v4; // zf
  int v8; // r4
  unsigned int v10; // r3
  char v11; // r2
  bool v12; // cc
  int v13; // r12
  int v14; // r0
  int v15; // r1
  _DWORD *v16; // r3
  _DWORD *v17; // r1
  int v18; // r12
  bool v19; // zf
  int v20; // r1
  int v21; // r5
  int *v22; // r2
  int result; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r0
  int v27; // r0
  const char *v28; // r4
  char *v29; // r0
  int v30; // r9
  unsigned __int16 *v31; // r7
  int v32; // r3
  int v33; // r1
  int v34; // r3
  char v35; // r2
  int v36; // r5
  int v37; // r3
  int v38; // r0
  bool v39; // zf
  int v40; // r3
  unsigned __int16 *v41; // r0
  int v42; // r0
  __int64 v43; // r2
  int *v44; // r1
  unsigned int v45; // r3
  bool v46; // cc
  int v47; // r1
  int v48; // r3
  char v49; // r2
  int *v50; // r8
  int *v51; // r3
  int v52; // r0
  bool v53; // zf
  int v54; // r3
  int *v55; // r1
  bool v56; // cc
  int v57; // r2
  int v58; // r3
  int v59; // r1
  int v60; // r3
  char v61; // r2
  int *v62; // r8
  int *v63; // r3
  int v64; // r0
  bool v65; // zf
  int v66; // r3
  int v67; // r0
  int *v68; // r3
  int v69; // r12
  int v70; // r1
  int v71; // r3
  int *v72; // [sp+4h] [bp-2Ch] BYREF
  __int64 v73; // [sp+8h] [bp-28h] BYREF

  v4 = a4 == 0;
  if ( a4 )
    v4 = a1 == 0;
  if ( v4 )
    return 0;
  v8 = *a3;
  v10 = *(_WORD *)(a1 + 2) & 0x7FFF;
  v11 = *(_WORD *)(a1 + 2) - 9;
  v12 = v10 - 9 > 1;
  if ( v10 - 9 > 1 )
    v12 = v10 - 3 > 1;
  v13 = !v12;
  if ( v10 == 24 )
    v13 |= 1u;
  if ( v13 )
  {
    v14 = *(_DWORD *)(v8 + 64);
    v15 = *(_DWORD *)(v8 + 60);
    if ( (unsigned int)(v14 - v15) <= 0x1F )
    {
      obstack_newchunk((struct obstack *)(v8 + 48), 32);
      v15 = *(_DWORD *)(v8 + 60);
      v14 = *(_DWORD *)(v8 + 64);
    }
    v16 = *(_DWORD **)(v8 + 56);
    v17 = (_DWORD *)(v15 + 32);
    v18 = *(_DWORD *)(v8 + 72);
    *(_DWORD *)(v8 + 60) = v17;
    v19 = v17 == v16;
    if ( v17 == v16 )
      v11 = *(_BYTE *)(v8 + 88);
    v20 = ((unsigned int)v17 + v18) & ~v18;
    *(_DWORD *)(v8 + 60) = v20;
    if ( v19 )
      *(_BYTE *)(v8 + 88) = v11 | 2;
    v21 = a3[34];
    v22 = *(int **)(a1 + 8);
    if ( v20 - *(_DWORD *)(v8 + 52) > (unsigned int)(v14 - *(_DWORD *)(v8 + 52)) )
    {
      v20 = v14;
      *(_DWORD *)(v8 + 60) = v14;
    }
    *(_DWORD *)(v8 + 56) = v20;
    result = 1;
    v24 = *v22;
    v25 = v22[1];
    v16[4] = v21;
    *v16 = 0;
    v16[3] = v24;
    v16[2] = v25;
    a4[2] = v16;
    *a4 = 3;
    return result;
  }
  v26 = *(_WORD *)(a1 + 2) & 0x7FFF;
  if ( v10 >= 0x10 && (v10 <= 0x15 || v26 == 7968) )
  {
    v72 = a3;
    v30 = sub_12E620((int *)(a2 + 8), a1, &v72);
    v31 = (unsigned __int16 *)sub_12E694(v30, 2, (int)v72);
    if ( v31 || (v31 = (unsigned __int16 *)sub_12E694(v30, 56, (int)v72)) != 0 )
    {
      v32 = *v31;
      if ( v32 == 2 )
      {
        v45 = v31[1] & 0x7FFF;
        v46 = v45 > 0x17;
        if ( v45 != 23 )
          v46 = v45 - 6 > 1;
        if ( !v46 )
        {
          v47 = *(_DWORD *)(v8 + 64);
          v48 = *(_DWORD *)(v8 + 60);
          v49 = v47 - v48;
          if ( (unsigned int)(v47 - v48) <= 0x1F )
          {
            obstack_newchunk((struct obstack *)(v8 + 48), 32);
            v47 = *(_DWORD *)(v8 + 64);
            v48 = *(_DWORD *)(v8 + 60);
          }
          v50 = *(int **)(v8 + 56);
          v51 = (int *)(v48 + 32);
          v52 = *(_DWORD *)(v8 + 72);
          *(_DWORD *)(v8 + 60) = v51;
          v53 = v51 == v50;
          if ( v51 == v50 )
            v49 = *(_BYTE *)(v8 + 88);
          v54 = ((unsigned int)v51 + v52) & ~v52;
          *(_DWORD *)(v8 + 60) = v54;
          if ( v53 )
            *(_BYTE *)(v8 + 88) = v49 | 2;
          if ( v54 - *(_DWORD *)(v8 + 52) > (unsigned int)(v47 - *(_DWORD *)(v8 + 52)) )
            *(_DWORD *)(v8 + 60) = v47;
          v55 = v72;
          *(_DWORD *)(v8 + 56) = *(_DWORD *)(v8 + 60);
          *v50 = sub_1345C4(v30, v55);
          ((void (__fastcall *)(int *, int *, unsigned __int16 *))loc_124684)(a3, v50 + 2, v31 + 4);
          a4[2] = v50;
          *a4 = 4;
          return 1;
        }
        v56 = v45 - 9 > 1;
        if ( v45 - 9 > 1 )
          v56 = v45 - 3 > 1;
        v57 = !v56;
        if ( v45 == 24 )
          v58 = v57 | 1;
        else
          v58 = v57;
        if ( v58 )
        {
          v59 = *(_DWORD *)(v8 + 64);
          v60 = *(_DWORD *)(v8 + 60);
          v61 = v59 - v60;
          if ( (unsigned int)(v59 - v60) <= 0x1F )
          {
            obstack_newchunk((struct obstack *)(v8 + 48), 32);
            v60 = *(_DWORD *)(v8 + 60);
            v59 = *(_DWORD *)(v8 + 64);
          }
          v62 = *(int **)(v8 + 56);
          v63 = (int *)(v60 + 32);
          v64 = *(_DWORD *)(v8 + 72);
          *(_DWORD *)(v8 + 60) = v63;
          v65 = v63 == v62;
          if ( v63 == v62 )
            v61 = *(_BYTE *)(v8 + 88);
          v66 = ((unsigned int)v63 + v64) & ~v64;
          *(_DWORD *)(v8 + 60) = v66;
          if ( v65 )
            *(_BYTE *)(v8 + 88) = v61 | 2;
          if ( v66 - *(_DWORD *)(v8 + 52) > (unsigned int)(v59 - *(_DWORD *)(v8 + 52)) )
          {
            v66 = v59;
            *(_DWORD *)(v8 + 60) = v59;
          }
          *(_DWORD *)(v8 + 56) = v66;
          v67 = sub_1345C4(v30, v72);
          v68 = (int *)*((_DWORD *)v31 + 2);
          v69 = a3[34];
          *v62 = v67;
          v70 = *v68;
          v71 = v68[1];
          v62[4] = v69;
          v62[3] = v70;
          v62[2] = v71;
          a4[2] = v62;
          *a4 = 3;
          return 1;
        }
        if ( dword_47AC88 > 0 )
          sub_121FC8("DW_AT_location", "dynamic property");
      }
      else
      {
        if ( v32 != 56 )
          return 1;
        if ( sub_12FF98(v30, (int)v72, (int)&v73) )
        {
          v33 = *(_DWORD *)(v8 + 64);
          v34 = *(_DWORD *)(v8 + 60);
          v35 = v33 - v34;
          if ( (unsigned int)(v33 - v34) <= 0x1F )
          {
            obstack_newchunk((struct obstack *)(v8 + 48), 32);
            v34 = *(_DWORD *)(v8 + 60);
            v33 = *(_DWORD *)(v8 + 64);
          }
          v36 = *(_DWORD *)(v8 + 56);
          v37 = v34 + 32;
          v38 = *(_DWORD *)(v8 + 72);
          *(_DWORD *)(v8 + 60) = v37;
          v39 = v37 == v36;
          if ( v37 == v36 )
            v35 = *(_BYTE *)(v8 + 88);
          v40 = (v37 + v38) & ~v38;
          *(_DWORD *)(v8 + 60) = v40;
          if ( v39 )
            *(_BYTE *)(v8 + 88) = v35 | 2;
          v41 = *(unsigned __int16 **)(v30 + 20);
          if ( v40 - *(_DWORD *)(v8 + 52) > (unsigned int)(v33 - *(_DWORD *)(v8 + 52)) )
          {
            v40 = v33;
            *(_DWORD *)(v8 + 60) = v33;
          }
          *(_DWORD *)(v8 + 56) = v40;
          v42 = sub_132D94(v41, v72);
          v43 = v73;
          v44 = v72;
          *(_DWORD *)v36 = v42;
          *(_QWORD *)(v36 + 8) = v43;
          *(_DWORD *)(v36 + 16) = sub_1345C4(v30, v44);
          a4[2] = v36;
          *a4 = 2;
          return 1;
        }
      }
    }
    return 0;
  }
  switch ( v26 )
  {
    case 5:
    case 6:
    case 7:
    case 11:
    case 13:
    case 15:
    case 33:
      *((_QWORD *)a4 + 1) = sub_12459C(a1);
      *a4 = 1;
      result = 1;
      break;
    default:
      v27 = sub_321640(v26);
      if ( v27 )
        v28 = (const char *)v27;
      else
        v28 = "DW_FORM_<unknown>";
      v29 = sub_12FAF0((_WORD *)a2, a3);
      if ( dword_47AC88 > 0 )
        sub_121FC8(v28, v29);
      return 0;
  }
  return result;
}
