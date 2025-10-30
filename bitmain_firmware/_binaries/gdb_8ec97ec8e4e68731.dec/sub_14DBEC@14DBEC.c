int __fastcall sub_14DBEC(int a1, int *a2, int *a3, int a4)
{
  int v6; // r2
  int *v8; // r3
  int v9; // r9
  int v10; // r0
  int v11; // r8
  int v12; // r2
  int v13; // r3
  int v14; // r4
  int v15; // r0
  __int64 v16; // r0
  int v17; // r4
  char *v18; // r2
  int v19; // r3
  int v20; // r0
  int v21; // r0
  int v22; // r2
  int v23; // r10
  int v24; // r0
  int v25; // r4
  int v26; // r10
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r10
  char *v32; // r3
  int *v33; // r10
  _BOOL4 v34; // r3
  _BOOL4 v35; // r2
  int v36; // r2
  char *v37; // r6
  int v38; // r3
  char *v39; // r6
  const char *v40; // r3
  int v41; // r2
  int v42; // r0
  char *v43; // r10
  int v44; // r0
  __int64 v45; // r0
  int v46; // r4
  int v47; // r9
  __int64 v48; // r0
  int v49; // r0
  int v50; // r3
  char *v51; // r2
  int *v53; // r0
  int v54; // r0
  char *v55; // r6
  bool v56; // zf
  int v57; // r6
  char *v58; // r0
  int *v59; // r4
  __int64 v60; // r0
  int v61; // r10
  void *v62; // r4
  int v63; // r0
  int v64; // r2
  char *v65; // r9
  int v66; // r12
  int v67; // r0
  int *v68; // r0
  int v69; // r2
  int v70; // r2
  __int64 v71; // r0
  unsigned int v72; // r3
  int v73; // r2
  int v74; // r3
  char *v75; // r2
  int v76; // r3
  int v77; // r0
  int v78; // r0
  _DWORD *v79; // r0
  _DWORD *v80; // r0
  int v81; // r4
  int v82; // r0
  int v83; // r0
  char dest[4]; // [sp+20h] [bp-64h] BYREF
  int v85; // [sp+24h] [bp-60h] BYREF
  unsigned int v86; // [sp+28h] [bp-5Ch]
  char *s; // [sp+2Ch] [bp-58h]
  int v88; // [sp+30h] [bp-54h]
  int v89; // [sp+34h] [bp-50h]
  int v90; // [sp+38h] [bp-4Ch]
  unsigned int v91; // [sp+3Ch] [bp-48h]
  int v92; // [sp+40h] [bp-44h]
  char *v93; // [sp+44h] [bp-40h]
  int v94; // [sp+4Ch] [bp-38h] BYREF
  int v95; // [sp+50h] [bp-34h] BYREF
  int v96; // [sp+54h] [bp-30h] BYREF
  int v97[3]; // [sp+58h] [bp-2Ch] BYREF

  v6 = *a3;
  v90 = a1;
  v94 = 0;
  v8 = &a2[4 * v6];
  *a3 = v6 + 2;
  v9 = v8[12];
  v10 = sub_26725C(v8[4], v8[5]);
  v11 = v10;
  v86 = v9 - 27;
  v91 = ((unsigned int)&v85 + 3) >> 3;
  v93 = dest;
  if ( (unsigned int)(v9 - 27) <= 1 )
  {
    v92 = *a3;
    *a3 = v92 + 1;
    if ( v9 == 27 )
      v94 = sub_14D6D0(a2, a3, a4);
    else
      v94 = sub_14C9EC(0, a2, a3, a4);
    s = (char *)sub_14C9EC(0, a2, a3, a4);
    v15 = sub_26BC70(s);
    v16 = sub_171258(v15);
    v17 = v16;
    if ( a4 == 1 )
    {
      v13 = 4;
      v89 = 0;
      v14 = 1;
      v88 = 0;
      v85 = 0;
      goto LABEL_22;
    }
    v18 = *(char **)(v16 + 24);
    v19 = *v18;
    if ( v19 == 16 )
    {
      if ( a4 == 2 )
        s = (char *)sub_260DBC(*((_DWORD *)v18 + 5));
      else
        s = (char *)sub_FC824();
      ++v11;
      v89 = 0;
      v14 = 2;
      v88 = 0;
      v85 = 0;
      v13 = 8;
      *((_DWORD *)v93 + 1) = v94;
      goto LABEL_22;
    }
    if ( v19 == 17 )
    {
      v20 = ((int (*)(void))loc_1708E0)();
      v21 = sub_1700C0(v20);
      v22 = *(_DWORD *)(v17 + 24);
      v23 = v21;
      v89 = 0;
      v88 = 0;
      v24 = *(_DWORD *)(v22 + 20);
      v85 = 0;
      v25 = sub_1700C0(v24);
      v94 = sub_2647C8(v23, v94);
      v26 = sub_26EB1C(s);
      v27 = sub_26EB1C(v94);
      v28 = sub_26DC9C(v25, v27 + v26);
      v14 = 1;
      s = (char *)sub_26210C(v28);
      v13 = 4;
      goto LABEL_22;
    }
    goto LABEL_105;
  }
  v12 = *a3;
  v92 = *a3;
  if ( (unsigned int)(v9 - 81) <= 1 )
  {
    v11 = v10 + 1;
    *a3 = v12 + 1;
    v60 = *(_QWORD *)&a2[4 * v12 + 8];
    *a3 += 3 + (((unsigned int)sub_26725C(v60, HIDWORD(v60)) + 16) >> 4);
    if ( v9 == 81 )
    {
      v89 = 0;
      v67 = sub_14D6D0(a2, a3, a4);
      v88 = 0;
      v13 = 8;
      v85 = 0;
      s = 0;
      v14 = 2;
      v94 = v67;
    }
    else
    {
      v61 = sub_14C9EC(0, a2, a3, a4);
      while ( 1 )
      {
        v94 = v61;
        if ( !sub_25CFA0(82, v61) )
          break;
        v62 = sub_92E28();
        v61 = ((int (__fastcall *)(int, int, int))loc_25D588)(v94, 82, a4);
        sub_92E40((int)v62);
      }
      v89 = 0;
      v13 = 8;
      v88 = 0;
      v14 = 2;
      v85 = 0;
      s = 0;
    }
    goto LABEL_22;
  }
  if ( v9 == 86 )
  {
    if ( !dword_48A9F4 || *(_DWORD *)(*a2 + 8) != 4 )
    {
      v95 = v92;
      v89 = 0;
      goto LABEL_18;
    }
    v70 = (int)&a2[4 * v92];
    *a3 = v92 + 1;
    v71 = *(_QWORD *)(v70 + 48);
    v89 = v70;
    v72 = *a3 + 4 + (((unsigned int)sub_26725C(v71, HIDWORD(v71)) + 16) >> 4);
    v88 = (int)&a2[4 * v92 + 16];
    v73 = v89;
    *a3 = v72;
    v74 = *(_DWORD *)(v73 + 32);
    v75 = *(char **)(v74 + 24);
    v89 = v74;
    v76 = *v75;
    if ( v76 == 24 )
    {
      s = (char *)*((_DWORD *)v75 + 3);
      v79 = (_DWORD *)sub_20F388(0);
      sub_FDFD8(v97, s, (char *)v88, v79, 1);
      v85 = v97[0];
      if ( !v97[0] )
        sub_946E0(
          "No symbol \"%s\" in namespace \"%s\".",
          (const char *)v88,
          *(const char **)(*(_DWORD *)(v89 + 24) + 12));
      v89 = 0;
      v13 = 4;
      v14 = 1;
      v88 = 0;
      s = 0;
      goto LABEL_22;
    }
    if ( (unsigned __int8)(v76 - 3) <= 1u )
    {
      v77 = v89;
      v89 = 0;
      ++v11;
      v78 = sub_260DBC(v77);
      v85 = 0;
      v13 = 8;
      s = 0;
      v14 = 2;
      v94 = v78;
      goto LABEL_22;
    }
    v16 = sub_94700(
            (int)"eval.c",
            1009,
            "%s: Assertion `%s' failed.",
            "value* evaluate_funcall(type*, expression*, int*, noside)",
            "TYPE_CODE (type) == TYPE_CODE_STRUCT || TYPE_CODE (type) == TYPE_CODE_UNION");
LABEL_105:
    sub_946E0("Non-pointer-to-member value used in pointer-to-member construct", HIDWORD(v16));
  }
  if ( v9 == 92 )
  {
    v89 = 0;
    v88 = 0;
    v95 = v92;
    v63 = sub_26725C(a2[4 * v92 + 16], a2[4 * v92 + 17]);
    v64 = *a3;
    v13 = 4;
    v85 = 0;
    s = 0;
    v92 = 0;
    v14 = 1;
    *a3 = v64 + 6 + ((unsigned int)(v63 + 16) >> 4);
    goto LABEL_22;
  }
  v95 = v92;
  if ( v9 == 40 )
  {
    if ( dword_48A9F4 )
    {
      v13 = *(_DWORD *)(*a2 + 8);
      if ( v13 == 4 )
      {
        v89 = 0;
        v88 = 0;
        v85 = 0;
        *a3 = v92 + 4;
        s = 0;
        v92 = 0;
        *(_DWORD *)v93 = 0;
        v14 = 1;
        goto LABEL_22;
      }
    }
  }
  else if ( v9 != 42 )
  {
    v89 = 0;
    goto LABEL_18;
  }
  v53 = (int *)a2[4 * v92 + 12];
  if ( dword_46D448 )
    v89 = sub_21B3C4(v53);
  else
    v89 = *v53;
LABEL_18:
  v29 = sub_14DB3C(a2, a3, a4);
  *(_DWORD *)v93 = v29;
  v30 = sub_26BC70(v29);
  v31 = v30;
  if ( !v30 )
  {
LABEL_21:
    v13 = 4;
    v14 = 1;
    v88 = 0;
    v85 = 0;
    s = 0;
    v92 = 0;
    goto LABEL_22;
  }
  v32 = *(char **)(v30 + 24);
  v14 = *v32;
  if ( v14 == 1 )
  {
    v31 = *((_DWORD *)v32 + 5);
    if ( v31 )
    {
      v32 = *(char **)(v31 + 24);
      v14 = *v32;
      goto LABEL_20;
    }
    v88 = 0;
    v13 = 4;
    v85 = 0;
    s = 0;
    v92 = 0;
LABEL_22:
    if ( v14 > v11 )
      goto LABEL_26;
    goto LABEL_23;
  }
LABEL_20:
  if ( v14 != 7 )
    goto LABEL_21;
  if ( v11 <= 0 )
  {
    v13 = 4;
    v88 = 0;
    v85 = 0;
    s = 0;
    v92 = 0;
    goto LABEL_26;
  }
  if ( *((__int16 *)v32 + 2) <= 0 )
  {
    v14 = 1;
    v88 = 0;
    v85 = 0;
    s = 0;
    v92 = 0;
  }
  else
  {
    v14 = 1;
    v92 = v9;
    v65 = v93;
    do
    {
      v66 = 3 * v14++;
      *((_DWORD *)v65 + 1) = sub_14C9EC(*(_DWORD *)(*((_DWORD *)v32 + 6) + 8 * v66 - 12), a2, a3, a4);
      v65 += 4;
      if ( v11 < v14 )
      {
        v9 = v92;
        v88 = 0;
        v13 = 4 * v14;
        v85 = 0;
        s = 0;
        v92 = 0;
        goto LABEL_26;
      }
      v32 = *(char **)(v31 + 24);
    }
    while ( *((__int16 *)v32 + 2) >= v14 );
    v9 = v92;
    v88 = 0;
    v85 = 0;
    s = 0;
    v92 = 0;
  }
LABEL_23:
  v33 = (int *)&v93[4 * v14];
  do
  {
    ++v14;
    *v33++ = sub_14DB3C(a2, a3, a4);
  }
  while ( v14 <= v11 );
  v13 = 4 * v14;
LABEL_26:
  *(_DWORD *)(v13 + 8 * v91) = 0;
  if ( a4 != 1 )
  {
    if ( v9 != 92 )
    {
      if ( (unsigned int)(v9 - 81) <= 1 )
      {
        v54 = v94;
        v55 = v93;
        v41 = (int)&a2[4 * v92 + 12];
        v56 = dword_48A9F4 == 0;
        *((_DWORD *)v93 + 1) = v94;
        v39 = v55 + 4;
        if ( v56 || *(_DWORD *)(*a2 + 8) != 4 )
        {
          v40 = "structure pointer";
          v97[0] = v54;
          if ( v9 == 81 )
            v40 = "structure";
          goto LABEL_36;
        }
        v97[0] = 0;
        sub_262800(v39, v11, v41, 1, &v94, 0, v97, 0, &v96, 0, a4);
        if ( v9 != 86 )
        {
          v50 = v96;
LABEL_78:
          v68 = (int *)v93;
          v69 = v97[0];
          *((_DWORD *)v93 + 1) = v94;
          *v68 = v69;
LABEL_37:
          if ( v50 )
          {
            v51 = v93;
            --v11;
            v93 = v39;
            *((_DWORD *)v51 + 1) = *(_DWORD *)v51;
          }
          return sub_14C89C((int)a2, a2 + 1, a4, v11, v93, v89, v90);
        }
LABEL_82:
        v50 = v96;
        if ( !v96 )
          sub_946E0("Call to overloaded function %s requires `this' pointer", (const char *)v88);
        goto LABEL_78;
      }
      v34 = v9 == 86;
      if ( v88 )
        v35 = v9 == 86;
      else
        v35 = 0;
      if ( v35 )
      {
        v36 = v94;
        v37 = v93;
        v38 = dword_48A9F4;
        *((_DWORD *)v93 + 1) = v94;
        v39 = v37 + 4;
        if ( !v38 || *(_DWORD *)(*a2 + 8) != 4 )
        {
          v97[0] = v36;
          v40 = "structure pointer";
          v41 = v88;
LABEL_36:
          v42 = sub_2624C8(v97, v39, v41, &v96, v40);
          v43 = v93;
          *(_DWORD *)v93 = v42;
          v44 = sub_26BC70(v97[0]);
          v45 = sub_1700C0(v44);
          v46 = v45;
          v47 = ((int (__fastcall *)(int, _DWORD))loc_26C09C)(v97[0], HIDWORD(v45));
          v48 = sub_26BFE0(v97[0]);
          v49 = sub_26DAF4(v46, HIDWORD(v48), (int)v48 + v47, (v48 + (unsigned __int64)(unsigned int)v47) >> 32);
          v50 = v96;
          v94 = v49;
          *((_DWORD *)v43 + 1) = v49;
          goto LABEL_37;
        }
        v97[0] = 0;
        sub_262800(v39, v11, v88, 1, &v94, 0, v97, 0, &v96, 0, a4);
        goto LABEL_82;
      }
      if ( v86 <= 1 )
      {
        *(_DWORD *)v93 = s;
        return sub_14C89C((int)a2, a2 + 1, a4, v11, v93, v89, v90);
      }
      if ( v9 != 40 )
      {
        if ( !v85 )
          v34 = 0;
        if ( !v34 )
          return sub_14C89C((int)a2, a2 + 1, a4, v11, v93, v89, v90);
      }
      if ( !dword_48A9F4 || *(_DWORD *)(*a2 + 8) != 4 )
        return sub_14C89C((int)a2, a2 + 1, a4, v11, v93, v89, v90);
      v59 = (int *)v93;
      v80 = v93 + 4;
      if ( v34 )
      {
        v34 = 1;
      }
      else if ( v9 == 40 )
      {
        sub_262800(v80, v11, 0, 0, 0, a2[4 * v95 + 12], 0, v97, 0, 0, a4);
        goto LABEL_54;
      }
      sub_262800(v80, v11, 0, 0, 0, v85, 0, v97, 0, v34, a4);
      v81 = v97[0];
      v82 = sub_20F388(0);
      v83 = sub_26118C(v81, v82);
      *(_DWORD *)v93 = v83;
      return sub_14C89C((int)a2, a2 + 1, a4, v11, v93, v89, v90);
    }
    v57 = v95;
    sub_26725C(a2[4 * v95 + 16], a2[4 * v95 + 17]);
    v58 = strcpy(dest, (const char *)&a2[4 * v57 + 20]);
    v59 = (int *)v93;
    sub_262800(v93 + 4, v11, v58, 0, 0, 0, 0, v97, 0, 0, a4);
LABEL_54:
    a2[4 * v95 + 12] = v97[0];
    *v59 = sub_14DB3C(a2, &v95, a4);
    return sub_14C89C((int)a2, a2 + 1, a4, v11, v93, v89, v90);
  }
  return sub_14DA0C((int)a2);
}
