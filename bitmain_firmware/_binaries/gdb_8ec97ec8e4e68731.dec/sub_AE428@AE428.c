int __fastcall sub_AE428(int a1, int a2, _DWORD *a3, int *a4, int a5)
{
  int v7; // r3
  int v8; // r2
  int v9; // r3
  int v10; // r10
  int v11; // r5
  int v12; // r6
  int v15; // r0
  int v16; // r9
  int v17; // r0
  __int64 v18; // r0
  int v19; // r4
  int v20; // r0
  int v21; // r3
  __int64 v22; // r0
  __int64 v23; // r2
  int v24; // r7
  int v25; // r3
  int v26; // r2
  int v27; // r6
  int v28; // r4
  int v29; // r6
  int v30; // r5
  _DWORD *v31; // r3
  bool v32; // zf
  bool v33; // cc
  int v34; // r3
  int v35; // r10
  int v36; // r9
  _DWORD *v37; // r2
  int v38; // r3
  int v39; // r4
  int v40; // r0
  int *v41; // r6
  int v42; // r3
  int i; // r5
  int v44; // r12
  _DWORD *v45; // r2
  int v46; // r3
  char *v47; // r4
  int v48; // r0
  __int64 v49; // r4
  __int64 v50; // r6
  _BOOL4 v51; // r3
  int v52; // r0
  int *v53; // r6
  int v54; // r0
  int v55; // r0
  __int64 v56; // r0
  unsigned __int64 *v57; // r7
  __int64 j; // r4
  int v59; // r0
  __int64 v60; // r4
  int v61; // [sp+4h] [bp-88h]
  unsigned __int64 v62; // [sp+10h] [bp-7Ch] BYREF
  int v63; // [sp+18h] [bp-74h]
  int v64; // [sp+1Ch] [bp-70h]
  __int64 v65; // [sp+20h] [bp-6Ch]
  __int64 v66; // [sp+28h] [bp-64h]
  __int64 v67; // [sp+30h] [bp-5Ch]
  __int64 v68; // [sp+38h] [bp-54h]
  _BOOL4 v69; // [sp+40h] [bp-4Ch]
  int v70; // [sp+44h] [bp-48h]
  int v71; // [sp+48h] [bp-44h]
  unsigned __int64 *v72; // [sp+4Ch] [bp-40h]
  unsigned __int64 *v73; // [sp+50h] [bp-3Ch]
  int v74; // [sp+54h] [bp-38h]
  int v75; // [sp+58h] [bp-34h] BYREF
  int v76; // [sp+5Ch] [bp-30h] BYREF
  int v77; // [sp+60h] [bp-2Ch] BYREF
  int v78; // [sp+64h] [bp-28h] BYREF

  HIDWORD(v66) = a4;
  v7 = *a4;
  v8 = v7 + 3;
  v9 = a3[4 * v7 + 8];
  *a4 = v8;
  HIDWORD(v65) = v9;
  if ( a5 )
  {
    v10 = a1;
    if ( v9 > 0 )
    {
      v11 = 0;
      v12 = v9;
      do
      {
        ++v11;
        sub_AB878(0, a3, a4, a5);
      }
      while ( v12 > v11 );
    }
    return v10;
  }
  v10 = sub_AB07C(a1);
  v15 = sub_26BC70(v10);
  if ( v15 && sub_A1D84(v15) )
    v10 = sub_A8AAC(v10);
  v16 = sub_AB07C(a2);
  if ( !sub_26C1D4(v16) )
    sub_946E0("Left operand of assignment is not a modifiable lvalue.");
  v17 = sub_26BC70(v16);
  v18 = sub_171258(v17);
  v19 = v18;
  if ( (_DWORD)v18 && sub_A1D84(v18) )
  {
    v16 = sub_A8AAC(v16);
    v20 = sub_26BC70(v16);
    v21 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(sub_171258(v20) + 24) + 24) + 12) + 24) + 24);
    v22 = *(_QWORD *)(v21 + 8);
    v23 = *(_QWORD *)(v21 + 24);
    v74 = (unsigned __int64)(v22 - 1) >> 32;
    v24 = v22 - 1;
    v67 = v22;
    v68 = v23;
  }
  else
  {
    if ( **(_BYTE **)(v19 + 24) != 3 )
      sub_946E0("Left-hand side must be array or record.", HIDWORD(v18));
    v78 = 0;
    v24 = -1;
    sub_A19AC(0, v19, 0, 0, 0, 0, 0, &v78);
    v74 = -1;
    v67 = 0;
    v68 = v78 - 1;
  }
  v25 = *(_DWORD *)HIDWORD(v66);
  v26 = *(_DWORD *)HIDWORD(v66) - 1;
  v76 = *(_DWORD *)HIDWORD(v66);
  v27 = a3[4 * v26];
  if ( v27 <= 0 )
  {
    v70 = 4;
  }
  else
  {
    v28 = 0;
    v29 = v27 - 1;
    v30 = 0;
    while ( 1 )
    {
      v31 = &a3[4 * v25];
      v32 = v31[4] == 115;
      if ( v31[4] == 115 )
        v31 = (_DWORD *)v31[8];
      else
        ++v30;
      if ( v32 )
        v30 += (int)v31;
      sub_AB878(0, a3, &v76, 1);
      if ( v29 == v28 )
        break;
      v25 = v76;
      ++v28;
    }
    v70 = 4 * (v30 + 1);
  }
  v63 = v24;
  v64 = v74;
  v72 = &v62;
  v33 = SHIDWORD(v65) <= 0;
  v62 = __PAIR64__(v74, v24);
  v66 = v68 + 1;
  v65 = v68 + 1;
  v75 = 4;
  if ( v33 )
    return v10;
  LODWORD(v66) = 0;
  LODWORD(v65) = "Extra components in aggregate ignored.";
  v34 = v10;
  v35 = v16;
  v36 = v34;
  do
  {
    v37 = &a3[4 * *(_DWORD *)HIDWORD(v66)];
    v38 = v37[4];
    if ( v38 == 115 )
    {
      v39 = sub_26725C(v37[8], v37[9]);
      v40 = sub_26BC70(v35);
      if ( v40 )
        v69 = sub_A1D84(v40);
      else
        v69 = 0;
      v41 = (int *)HIDWORD(v66);
      v42 = *(_DWORD *)HIDWORD(v66) + 3;
      *(_DWORD *)HIDWORD(v66) = v42;
      v77 = v42;
      if ( v39 <= 0 )
      {
LABEL_66:
        sub_AB878(0, a3, (int *)HIDWORD(v66), 1);
        goto LABEL_52;
      }
      for ( i = 0; i != v39; ++i )
        sub_AB878(0, a3, v41, 1);
      v71 = i;
      v44 = *(_DWORD *)HIDWORD(v66);
      v73 = 0;
      v74 = v44;
      sub_AB878(0, a3, (int *)HIDWORD(v66), 1);
      while ( 1 )
      {
        v45 = &a3[4 * v77];
        v46 = v45[4];
        if ( v46 != 117 )
          break;
        v53 = (int *)HIDWORD(v66);
        ++v77;
        v54 = sub_AB878(0, a3, (int *)HIDWORD(v66), 0);
        v49 = sub_26EB1C(v54);
        v55 = sub_AB878(0, a3, v53, 0);
        v56 = sub_26EB1C(v55);
        v50 = v56;
        if ( v56 >= v49 )
          goto LABEL_45;
        sub_9AB38(v49, v56, v72, &v75, v70);
LABEL_50:
        v32 = v71 == (_DWORD)v73 + 1;
        v73 = (unsigned __int64 *)((char *)v73 + 1);
        if ( v32 )
          goto LABEL_52;
      }
      if ( v69 )
      {
        v52 = sub_AB878(0, a3, &v77, 0);
        v49 = sub_26EB1C(v52);
        v50 = v49;
      }
      else
      {
        if ( v46 == 40 )
        {
          v47 = (char *)sub_21B3C4(v45[12]);
        }
        else
        {
          if ( v46 != 89 )
            sub_946E0("Invalid record component association.");
          v47 = (char *)&a3[4 * v77 + 12];
        }
        sub_AB878(0, a3, &v77, 1);
        v78 = 0;
        v48 = sub_26BC70(v35);
        if ( !sub_A19AC(v47, v48, 0, 0, 0, 0, 0, &v78) )
          sub_946E0("Unknown component name: %s.", v47);
        v49 = v78;
        v50 = v78;
      }
LABEL_45:
      v51 = v49 < v67;
      if ( v68 < v50 )
        v51 = 1;
      if ( v51 )
        sub_946E0(
          "Index in component association out of bounds.",
          HIDWORD(v68),
          (_DWORD)((unsigned __int64)(v68 - v50) >> 32));
      sub_9AB38(v49, v50, v72, &v75, v70);
      do
      {
        v78 = v74;
        sub_AEB78(v36, v35, v49, HIDWORD(v49), a3, &v78);
        ++v49;
      }
      while ( v50 >= v49 );
      goto LABEL_50;
    }
    if ( v38 != 116 )
    {
      if ( v38 != 114 )
        sub_946E0("Internal error: bad aggregate clause");
      if ( HIDWORD(v65) - 1 != (_DWORD)v66 )
        sub_946E0("Misplaced 'others' clause");
      if ( v75 > 2 )
      {
        v74 = *(_DWORD *)HIDWORD(v66) + 1;
        v73 = &v72[2 * ((unsigned int)(v75 - 3) >> 1) + 2];
        v57 = v72;
        do
        {
          for ( j = v57[1] + 1; j < (__int64)v57[2]; ++j )
          {
            v78 = v74;
            sub_AEB78(v36, v35, j, HIDWORD(j), a3, &v78);
          }
          v57 += 2;
        }
        while ( v57 != v73 );
        v62 = j;
      }
      goto LABEL_66;
    }
    v59 = sub_26725C(v37[8], v37[9]);
    v60 = v67 + v59;
    v63 = v60 - 1;
    v64 = v60 - 1;
    if ( v68 == __PAIR64__((int)v60 - 1, (int)v60 - 1) )
      sub_946B0((const char *)v65);
    if ( v68 < v60 )
      goto LABEL_66;
    sub_9AB38(v60, v60, v72, &v75, v70);
    v61 = HIDWORD(v66);
    *(_DWORD *)HIDWORD(v66) += 3;
    sub_AEB78(v36, v35, v60, HIDWORD(v60), a3, v61);
LABEL_52:
    v33 = SHIDWORD(v65) <= (int)v66 + 1;
    LODWORD(v66) = v66 + 1;
  }
  while ( !v33 );
  return v36;
}
