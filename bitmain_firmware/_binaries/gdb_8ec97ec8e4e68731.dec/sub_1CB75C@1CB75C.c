void __fastcall sub_1CB75C(int a1, int a2, int (***a3)())
{
  int v5; // r9
  int v6; // r0
  int v7; // r7
  void *v8; // r5
  int v9; // r4
  char *v10; // r6
  char *v11; // r5
  int v12; // r4
  char *v13; // r4
  size_t v14; // r0
  char *v15; // r11
  int v16; // r3
  unsigned int v17; // r5
  char *v18; // r4
  unsigned int v19; // r6
  unsigned int v20; // r10
  unsigned int v21; // r7
  size_t v22; // r0
  int v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r3
  const char *v26; // r0
  int (*v27)(void); // r3
  const char *v28; // r0
  int v29; // r4
  void *v30; // r0
  int v31; // r4
  void *v32; // r0
  int v33; // r4
  void *v34; // r0
  int v35; // r4
  const char *v36; // r0
  int v37; // r4
  void *v38; // r0
  _DWORD *v39; // r0
  char *v40; // r5
  int v41; // r0
  int v42; // r4
  int v43; // r0
  int v44; // r0
  _DWORD *v45; // r0
  int v46; // r2
  int v47; // r3
  bool v48; // zf
  int v49; // r0
  int (*v50)(void); // r3
  int v51; // r4
  int v52; // r9
  int v53; // r0
  _DWORD *v54; // r0
  int v55; // r0
  _DWORD *v56; // r0
  int v57; // r0
  _DWORD *v58; // r0
  int v59; // r0
  int *v60; // r0
  _DWORD *v61; // r3
  int v62; // r4
  int v63; // r6
  int v64; // r0
  int *v65; // r8
  int v66; // r11
  int v67; // r6
  int v68; // t1
  char *v69; // r7
  char *v70; // r4
  int (__fastcall *v71)(void **, int); // r3
  _DWORD *v72; // r4
  _DWORD *v73; // r6
  _DWORD *v74; // r0
  char *v75; // r5
  char *v76; // r4
  int v77; // r0
  __int64 v78; // r10
  char *v79; // r5
  const char *v80; // r6
  const char *v81; // t1
  char *v82; // r4
  int v83; // r2
  int v84; // r3
  int *v85; // r8
  int v86; // r10
  char *v87; // r5
  int v88; // r6
  int v89; // t1
  char *v90; // r4
  _DWORD *v91; // r0
  int v92; // [sp+0h] [bp-ACh]
  int v93; // [sp+4h] [bp-A8h]
  const char *v94; // [sp+8h] [bp-A4h]
  int v95; // [sp+Ch] [bp-A0h]
  int v96; // [sp+Ch] [bp-A0h]
  int v97; // [sp+10h] [bp-9Ch]
  int v98; // [sp+14h] [bp-98h]
  int v99; // [sp+18h] [bp-94h]
  void *v100; // [sp+1Ch] [bp-90h]
  void *v101; // [sp+24h] [bp-88h] BYREF
  char *v102; // [sp+28h] [bp-84h]
  void *v103[2]; // [sp+30h] [bp-7Ch] BYREF
  _BYTE v104[16]; // [sp+38h] [bp-74h] BYREF
  void *v105[2]; // [sp+48h] [bp-64h] BYREF
  _BYTE v106[16]; // [sp+50h] [bp-5Ch] BYREF
  void *v107[2]; // [sp+60h] [bp-4Ch] BYREF
  _BYTE v108[16]; // [sp+68h] [bp-44h] BYREF
  void *v109[2]; // [sp+78h] [bp-34h] BYREF
  _BYTE v110[16]; // [sp+80h] [bp-2Ch] BYREF
  void *ptr; // [sp+90h] [bp-1Ch] BYREF
  void *v112; // [sp+94h] [bp-18h]
  _BYTE v113[20]; // [sp+98h] [bp-14h] BYREF

  v94 = (const char *)a3;
  v103[0] = v104;
  v103[1] = 0;
  v104[0] = 0;
  v105[1] = 0;
  v106[0] = 0;
  v107[1] = 0;
  v108[0] = 0;
  v105[0] = v106;
  v107[0] = v108;
  v5 = sub_B894C(a1);
  sub_1CA1C0(a1, v103, v105, v107);
  v6 = (int)sub_1CAE50(&v101, (int)v107, (int)v103, (int)v105, a3);
  if ( a3 == &off_3CD45C )
  {
    v7 = 0;
    v85 = (int *)dword_487D10;
    v86 = dword_487D14;
LABEL_91:
    while ( (int *)v86 != v85 )
    {
      v87 = v102;
      v89 = *v85++;
      v88 = v89;
      if ( v102 != v101 )
      {
        v90 = (char *)v101 + 8;
        while ( 1 )
        {
          v6 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)v90 - 2) + 36))(*((_DWORD *)v90 - 2));
          if ( v88 == v6 )
            break;
          v48 = v87 == v90;
          v90 += 8;
          if ( v48 )
            goto LABEL_91;
        }
        v6 = sub_1C9BF8(v6);
        v7 += v6;
      }
    }
  }
  else
  {
    v6 = sub_1C9BF8((int)v94);
    v7 = v6;
  }
  v8 = *(void **)sub_242FDC(v6);
  ptr = v113;
  v9 = (v102 - (_BYTE *)v101) >> 3;
  v100 = v8;
  sub_1C9B48(&ptr, "StaticProbes", (int)"");
  sub_25704C(v8, v7 + 5, v9, &ptr);
  if ( ptr != v113 )
    sub_339E64(ptr);
  v10 = (char *)v101;
  v11 = v102;
  if ( v101 != v102 )
  {
    v12 = v102 - (_BYTE *)v101;
    sub_1CC790(v101, v102, 2 * (31 - __clz((v102 - (_BYTE *)v101) >> 3)), sub_1C9E10);
    if ( v12 <= 128 )
    {
      sub_1CC580(v10, v11, sub_1C9E10);
    }
    else
    {
      v13 = v10 + 128;
      sub_1CC580(v10, v10 + 128, sub_1C9E10);
      if ( v11 != v10 + 128 )
      {
        do
        {
          sub_1CC524(v13, 1875472);
          v13 += 8;
        }
        while ( v11 != v13 );
      }
    }
  }
  v14 = ((int (__fastcall *)(int))loc_16666C)(v5);
  v15 = v102;
  if ( v14 == 64 )
    v16 = 18;
  else
    v16 = 10;
  v95 = v16;
  if ( v101 == v102 )
  {
    v17 = 4;
    v20 = 8;
    v19 = 4;
    v21 = 6;
  }
  else
  {
    v17 = 4;
    v18 = (char *)v101 + 8;
    v19 = 4;
    v20 = 8;
    v21 = 6;
    while ( 1 )
    {
      v27 = *(int (**)(void))(*(_DWORD *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)v18 - 2) + 36))(*((_DWORD *)v18 - 2))
                            + 8);
      if ( v27 == sub_1C9AD4 )
        v28 = 0;
      else
        v28 = (const char *)v27();
      v22 = strlen(v28);
      v23 = *((_DWORD *)v18 - 2);
      if ( v17 < v22 )
        v17 = v22;
      v24 = *(_DWORD *)(v23 + 8);
      v25 = *(_DWORD *)(v23 + 32);
      if ( v19 < v24 )
        v19 = v24;
      if ( v20 < v25 )
        v20 = v25;
      v26 = (const char *)sub_1B87A8(*((_DWORD *)v18 - 1));
      v14 = strlen(v26);
      if ( v21 < v14 )
        v21 = v14;
      if ( v15 == v18 )
        break;
      v18 += 8;
    }
  }
  v29 = *(_DWORD *)sub_242FDC(v14);
  v109[0] = v110;
  sub_1C9B48(v109, "type", (int)"");
  ptr = v113;
  sub_1C9B48(&ptr, "Type", (int)"");
  sub_2571B8(v29, v17, -1, v109, &ptr);
  if ( ptr != v113 )
    sub_339E64(ptr);
  v30 = v109[0];
  if ( v109[0] != v110 )
    sub_339E64(v109[0]);
  v31 = *(_DWORD *)sub_242FDC(v30);
  v109[0] = v110;
  sub_1C9B48(v109, "provider", (int)"");
  ptr = v113;
  sub_1C9B48(&ptr, "Provider", (int)"");
  sub_2571B8(v31, v20, -1, v109, &ptr);
  if ( ptr != v113 )
    sub_339E64(ptr);
  v32 = v109[0];
  if ( v109[0] != v110 )
    sub_339E64(v109[0]);
  v33 = *(_DWORD *)sub_242FDC(v32);
  v109[0] = v110;
  sub_1C9B48(v109, "name", (int)"");
  ptr = v113;
  sub_1C9B48(&ptr, "Name", (int)"");
  sub_2571B8(v33, v19, -1, v109, &ptr);
  if ( ptr != v113 )
    sub_339E64(ptr);
  v34 = v109[0];
  if ( v109[0] != v110 )
    sub_339E64(v109[0]);
  v35 = *(_DWORD *)sub_242FDC(v34);
  v109[0] = v110;
  sub_1C9B48(v109, "addr", (int)"");
  ptr = v113;
  sub_1C9B48(&ptr, "Where", (int)"");
  sub_2571B8(v35, v95, -1, v109, &ptr);
  if ( ptr != v113 )
    sub_339E64(ptr);
  v36 = (const char *)v109[0];
  if ( v109[0] != v110 )
    sub_339E64(v109[0]);
  if ( v94 == (const char *)&off_3CD45C )
  {
    v78 = *(_QWORD *)&dword_487D10;
LABEL_84:
    while ( HIDWORD(v78) != (_DWORD)v78 )
    {
      v79 = v102;
      v81 = *(const char **)v78;
      LODWORD(v78) = v78 + 4;
      v80 = v81;
      if ( v101 != v102 )
      {
        v82 = (char *)v101 + 8;
        while ( 1 )
        {
          v36 = (const char *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)v82 - 2) + 36))(*((_DWORD *)v82 - 2));
          if ( v80 == v36 )
            break;
          v48 = v79 == v82;
          v82 += 8;
          if ( v48 )
            goto LABEL_84;
        }
        sub_1C9EE0(&v101, v80, v83, v84, v92, v93, (int)v94, v95, v97, v98, v99, v100);
      }
    }
  }
  else
  {
    sub_1C9EE0(&v101, v94, (int)&off_3CD45C, (int)v94, v92, v93, (int)v94, v95, v97, v98, v99, v100);
  }
  v37 = *(_DWORD *)sub_242FDC(v36);
  v109[0] = v110;
  sub_1C9B48(v109, "object", (int)"");
  ptr = v113;
  sub_1C9B48(&ptr, "Object", (int)"");
  sub_2571B8(v37, v21, -1, v109, &ptr);
  if ( ptr != v113 )
    sub_339E64(ptr);
  v38 = v109[0];
  if ( v109[0] != v110 )
    sub_339E64(v109[0]);
  v39 = (_DWORD *)sub_242FDC(v38);
  sub_25722C(*v39);
  v96 = (int)v102;
  if ( v102 == v101 )
  {
    v77 = sub_257270(v100);
LABEL_98:
    v91 = (_DWORD *)sub_242FDC(v77);
    sub_25738C(*v91, "No probes matched.\n");
    goto LABEL_73;
  }
  v40 = (char *)v101 + 8;
  do
  {
    v49 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)v40 - 2) + 36))(*((_DWORD *)v40 - 2));
    v50 = *(int (**)(void))(*(_DWORD *)v49 + 8);
    if ( v50 == sub_1C9AD4 )
    {
      v51 = 0;
    }
    else
    {
      v49 = v50();
      v51 = v49;
    }
    v52 = *(_DWORD *)sub_242FDC(v49);
    v53 = sub_2578AC(v52, 0);
    v54 = (_DWORD *)sub_242FDC(v53);
    v55 = sub_2575E8(*v54, "type", v51);
    v56 = (_DWORD *)sub_242FDC(v55);
    v57 = sub_2575E8(*v56, "provider", *(_DWORD *)(*((_DWORD *)v40 - 2) + 28));
    v58 = (_DWORD *)sub_242FDC(v57);
    v59 = sub_2575E8(*v58, "name", *(_DWORD *)(*((_DWORD *)v40 - 2) + 4));
    v60 = (int *)sub_242FDC(v59);
    v61 = (_DWORD *)*((_DWORD *)v40 - 2);
    v62 = *v60;
    v63 = v61[14];
    v64 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*v61 + 8))(v61, *((_DWORD *)v40 - 1));
    v41 = sub_257630(v62, "addr", v63, v64);
    if ( v94 == (const char *)&off_3CD45C )
    {
      v65 = (int *)dword_487D10;
      v66 = dword_487D14;
LABEL_59:
      while ( (int *)v66 != v65 )
      {
        v68 = *v65++;
        v67 = v68;
        v41 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)v40 - 2) + 36))(*((_DWORD *)v40 - 2));
        if ( v68 == v41 )
        {
          sub_1C9C58(*((_DWORD *)v40 - 2));
        }
        else
        {
          v69 = v102;
          if ( v101 != v102 )
          {
            v70 = (char *)v101 + 8;
            while ( 1 )
            {
              v41 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)v70 - 2) + 36))(*((_DWORD *)v70 - 2));
              if ( v67 == v41 )
                break;
              v48 = v69 == v70;
              v70 += 8;
              if ( v48 )
                goto LABEL_59;
            }
            v71 = *(int (__fastcall **)(void **, int))(*(_DWORD *)v67 + 16);
            if ( (char *)v71 != (char *)sub_1C9ADC )
            {
              v41 = v71(&ptr, v67);
              v72 = ptr;
              v73 = v112;
              if ( ptr != v112 )
              {
                do
                {
                  v74 = (_DWORD *)sub_242FDC(v41);
                  v41 = sub_2575E8(*v74, *v72, "n/a");
                  v72 += 2;
                }
                while ( v73 != v72 );
                v73 = ptr;
              }
              if ( v73 )
                sub_339E64(v73);
            }
          }
        }
      }
    }
    else
    {
      sub_1C9C58(*((_DWORD *)v40 - 2));
    }
    v42 = *(_DWORD *)sub_242FDC(v41);
    v43 = sub_1B87A8(*((_DWORD *)v40 - 1));
    v44 = sub_2575E8(v42, "object", v43);
    v45 = (_DWORD *)sub_242FDC(v44);
    sub_257380(*v45, &word_356638, v46, v47);
    sub_25734C(v52, 0);
    v48 = v96 == (_DWORD)v40;
    v40 += 8;
  }
  while ( !v48 );
  v75 = (char *)v101;
  v76 = v102;
  v77 = sub_257270(v100);
  if ( v75 == v76 )
    goto LABEL_98;
LABEL_73:
  if ( v101 )
    sub_339E64(v101);
  if ( v107[0] != v108 )
    sub_339E64(v107[0]);
  if ( v105[0] != v106 )
    sub_339E64(v105[0]);
  if ( v103[0] != v104 )
    sub_339E64(v103[0]);
}
