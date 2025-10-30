_DWORD *__fastcall sub_272274(_DWORD *a1, int **a2, int a3)
{
  int *v3; // r4
  int *v6; // r3
  int v7; // r2
  int *v8; // r6
  _DWORD *v9; // r5
  _DWORD *v10; // r3
  char v11; // r1
  int v12; // r9
  unsigned __int8 v13; // r6
  char v14; // r5
  char v15; // lr
  int v16; // r12
  void *v17; // r0
  void *v18; // r0
  void *v19; // r1
  int v20; // r0
  int v21; // r1
  void *v22; // r0
  int v23; // r5
  int v24; // r6
  int v25; // r0
  int v26; // r10
  int v27; // r9
  int v28; // r3
  int v29; // r2
  int v31; // r3
  int v32; // r6
  int v33; // r9
  int v34; // r6
  int v35; // r3
  bool v36; // zf
  void *v37; // r0
  void *v38; // r2
  char *v39; // r3
  int v40; // r5
  int v41; // r6
  int v42; // r5
  int v43; // r3
  char *v44; // r3
  int v45; // r5
  int v46; // r6
  int v47; // r5
  int v48; // r3
  char *v49; // r3
  int v50; // r5
  int v51; // r6
  int v52; // r5
  int v53; // r2
  void *v54; // r3
  _DWORD *v55; // r4
  void *v56; // r0
  int v57; // r9
  int v58; // r3
  int v59; // r1
  int v60; // r6
  int *v61; // r0
  void *v62; // r8
  int v63; // r0
  int v64; // r10
  int v65; // r0
  int v66; // r3
  int *v67; // r0
  int *v68; // r4
  int v69; // r3
  int *v70; // r2
  int *v71; // r3
  int v72; // lr
  int v73; // [sp+1Ch] [bp-9Ch] BYREF
  int v74; // [sp+20h] [bp-98h] BYREF
  void *v75; // [sp+24h] [bp-94h] BYREF
  char *v76; // [sp+28h] [bp-90h]
  int v77; // [sp+2Ch] [bp-8Ch]
  void *v78; // [sp+30h] [bp-88h] BYREF
  int v79; // [sp+34h] [bp-84h]
  int v80; // [sp+38h] [bp-80h]
  void *ptr; // [sp+3Ch] [bp-7Ch] BYREF
  int v82; // [sp+40h] [bp-78h]
  int v83; // [sp+44h] [bp-74h]
  void *s1; // [sp+48h] [bp-70h] BYREF
  size_t n; // [sp+4Ch] [bp-6Ch]
  int v86; // [sp+50h] [bp-68h] BYREF
  void *s2; // [sp+60h] [bp-58h] BYREF
  void *v88; // [sp+64h] [bp-54h]
  int v89; // [sp+68h] [bp-50h] BYREF
  int v90; // [sp+78h] [bp-40h] BYREF
  unsigned __int8 v91; // [sp+7Ch] [bp-3Ch]
  char v92; // [sp+7Dh] [bp-3Bh]
  char v93; // [sp+7Eh] [bp-3Ah]
  int v94; // [sp+80h] [bp-38h]
  char v95; // [sp+84h] [bp-34h]
  void *v96; // [sp+88h] [bp-30h]
  void *v97; // [sp+8Ch] [bp-2Ch]
  int v98; // [sp+90h] [bp-28h]
  int v99; // [sp+94h] [bp-24h] BYREF
  char v100; // [sp+98h] [bp-20h]
  char v101; // [sp+99h] [bp-1Fh]
  char v102; // [sp+9Ah] [bp-1Eh]
  void *v103; // [sp+9Ch] [bp-1Ch]
  char v104; // [sp+A0h] [bp-18h]
  void *v105; // [sp+A4h] [bp-14h]
  void *v106; // [sp+A8h] [bp-10h]
  void *v107; // [sp+ACh] [bp-Ch]

  *a1 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v6 = *a2;
  if ( !a3 && *((_BYTE *)v6 + 140) )
    return a1;
  v7 = v6[26];
  if ( !*(_BYTE *)(v7 + 33) )
  {
    v99 = 2;
    sub_272E68(a1, a2, &v99);
    goto LABEL_89;
  }
  v8 = *(int **)(v7 + 40);
  if ( v8 != v6 )
  {
    sub_273994(&v75, a2);
    goto LABEL_6;
  }
  v57 = *(unsigned __int8 *)(v7 + 32);
  v90 = (int)*a2;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  if ( !v57 )
    v3 = v6;
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v98 = 0;
  if ( v57 )
  {
    v67 = sub_270FE0(0, (_BYTE *)*v6, 0, 2);
    v68 = v67;
    if ( !v67 )
    {
      v57 = 0;
      v61 = *a2;
      v60 = 0;
      goto LABEL_112;
    }
    sub_26FD6C((int)&s1, v8);
    sub_26FD6C((int)&s2, v68);
    if ( (void *)n == v88 && (!n || !memcmp(s1, s2, n)) )
    {
      v70 = (int *)v8[26];
      v71 = (int *)v68[26];
      v72 = *v70;
      *v70 = *v71;
      *v71 = v72;
      v78 = 0;
      sub_27020C(&v78, v68, 0, 1);
      v57 = 0;
    }
    else
    {
      sub_33B48C(v68 + 12, v8 + 12);
      v69 = v8[37];
      v68[36] = v8[36];
      v68[37] = v69;
      v74 = 0;
      sub_27020C(&v74, v8, 0, 1);
      sub_26FA70(v68);
      v8 = v68;
      *a2 = v68;
    }
    if ( s2 != &v89 )
      sub_339E64(s2);
    if ( s1 != &v86 )
      sub_339E64(s1);
    v61 = *a2;
    if ( *a2 != *(int **)((*a2)[26] + 40) )
    {
      v60 = 0;
      goto LABEL_112;
    }
    v3 = v8;
    v8 = *a2;
  }
  ((void (__fastcall *)(int *))loc_23FF20)(&v99);
  v58 = v8[26];
  if ( !*(_DWORD *)(v58 + 4) || *(_BYTE *)(v58 + 32) )
    goto LABEL_105;
  v59 = *(_DWORD *)(v58 + 28);
  if ( !v59 )
  {
LABEL_104:
    if ( !sub_26F9C4((int)(v8 + 26)) )
      goto LABEL_102;
LABEL_105:
    v62 = sub_92E28();
    v60 = sub_14CD3C(*(int **)v8[26]);
    sub_92E40((int)v62);
    ((void (__fastcall *)(int *))loc_23FC8C)(&v99);
    if ( v3[20]
      && v60
      && (v63 = sub_26BC70(v60), v3[21] >= 0)
      && *(_DWORD *)(*(_DWORD *)(v3[26] + 36) + 32)
      && (v64 = sub_26FA34((int)v3, v60, v63)) != 0 )
    {
      ptr = 0;
      sub_27020C(&ptr, v3, 1, 1);
      v61 = *a2;
      v57 = v64;
      v3[21] = -1;
      v3[37] = -1;
      v3[36] = -1;
    }
    else
    {
      v61 = *a2;
    }
    goto LABEL_112;
  }
  sub_23E5E4(&s2, v59);
  if ( !sub_98F78(&dword_46BBCC, &s2) )
  {
    sub_23F9F0();
    goto LABEL_104;
  }
LABEL_102:
  v60 = 0;
  ((void (__fastcall *)(int *))loc_23FC8C)(&v99);
  v61 = *a2;
LABEL_112:
  v65 = sub_2704D0(v61, v60);
  v66 = (int)*a2;
  if ( !v65 )
    v65 = v57;
  v91 = v65;
  v90 = v66;
  if ( sub_270830(v66, v60, v65) )
    v93 = 1;
  if ( v60 )
  {
    v95 = 1;
    if ( v94 != 1 )
    {
      ((void (__fastcall *)(void **, int *))loc_27338C)(&v75, &v90);
      if ( v96 )
        sub_339E64(v96);
LABEL_6:
      v9 = v75;
      v10 = v76;
      if ( v76 != v75 )
      {
        while ( 1 )
        {
          v11 = *((_BYTE *)v10 - 16);
          v12 = *(v10 - 7);
          v13 = *((_BYTE *)v10 - 24);
          v14 = *((_BYTE *)v10 - 23);
          v15 = *((_BYTE *)v10 - 22);
          v16 = *(v10 - 5);
          v96 = 0;
          v97 = 0;
          v98 = 0;
          v17 = (void *)*(v10 - 3);
          v90 = v12;
          v91 = v13;
          v96 = v17;
          v18 = (void *)*(v10 - 2);
          v95 = v11;
          v92 = v14;
          v93 = v15;
          v94 = v16;
          *(v10 - 3) = 0;
          v19 = v97;
          v97 = v18;
          v20 = *(v10 - 1);
          *(v10 - 2) = v19;
          v21 = v98;
          v98 = v20;
          v22 = (void *)*(v10 - 3);
          *(v10 - 1) = v21;
          v76 = (char *)(v10 - 7);
          if ( v22 )
            sub_339E64(v22);
          v23 = v90;
          if ( !v95 )
          {
            v24 = (*(int (**)(void))(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v90 + 88) + 104) + 36) + 16))();
            if ( sub_2704D0((int *)v23, v24) )
              v91 = 1;
            if ( v24 )
              v25 = sub_26BC70(v24);
            else
              v25 = (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)(*(_DWORD *)(v23 + 104) + 36) + 20))(
                      *(_DWORD *)(v23 + 88),
                      *(_DWORD *)(v23 + 72));
            v26 = v25;
            if ( *(int *)(v23 + 84) >= 0
              && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v23 + 104) + 36) + 32)
              && (v27 = sub_26FA34(v23, v24, v25)) != 0 )
            {
              v73 = 0;
              sub_27020C(&v73, (_DWORD *)v23, 1, 1);
              *(_DWORD *)(v23 + 76) = v26;
              *(_DWORD *)(v23 + 84) = -1;
              *(_DWORD *)(v23 + 148) = -1;
              *(_DWORD *)(v23 + 144) = -1;
              v91 = 1;
            }
            else
            {
              v27 = v91;
            }
            if ( sub_270830(v23, v24, v27) )
            {
              v93 = 1;
              *(_BYTE *)(v23 + 112) = 0;
            }
          }
          v28 = *(_DWORD *)(v23 + 152);
          if ( !*(_DWORD *)(v28 + 8) )
            goto LABEL_46;
          LOBYTE(v74) = 0;
          v29 = *(unsigned __int8 *)(v23 + 140);
          v78 = 0;
          v79 = 0;
          v80 = 0;
          ptr = 0;
          v82 = 0;
          v83 = 0;
          s1 = 0;
          n = 0;
          v86 = 0;
          s2 = 0;
          v88 = 0;
          v89 = 0;
          if ( !v29 )
            break;
LABEL_29:
          if ( ptr )
            sub_339E64(ptr);
          if ( v78 )
            sub_339E64(v78);
LABEL_33:
          if ( !v96 )
            goto LABEL_6;
          sub_339E64(v96);
          v9 = v75;
          v10 = v76;
          if ( v76 == v75 )
            goto LABEL_35;
        }
        if ( *(_BYTE *)v28 )
        {
          v36 = ((int (__fastcall *)(int, void **, void **, void **, void **, int *, int, _DWORD, _DWORD))loc_271AE8)(
                  v23,
                  &v78,
                  &ptr,
                  &s2,
                  &s1,
                  &v74,
                  1,
                  *(_DWORD *)(v23 + 144),
                  *(_DWORD *)(v23 + 148)) == 0;
          v37 = s2;
          if ( v36 )
          {
            if ( s2 )
              sub_339E64(s2);
            if ( s1 )
              sub_339E64(s1);
            if ( ptr )
              sub_339E64(ptr);
            if ( v78 )
              sub_339E64(v78);
LABEL_46:
            v31 = *(_DWORD *)(v23 + 92);
            v32 = (*(_DWORD *)(v23 + 96) - v31) >> 2;
            v33 = v32 - 1;
            if ( v32 - 1 >= 0 )
            {
              v34 = 4 * (v32 + 0x3FFFFFFF);
              while ( 1 )
              {
                v35 = *(_DWORD *)(v31 + v34);
                v99 = v35;
                if ( !v35 || *(_BYTE *)(v35 + 140) )
                {
                  --v33;
                  v34 -= 4;
                  if ( v33 == -1 )
                    break;
                }
                else
                {
                  sub_273994(&v75, &v99);
                  --v33;
                  v34 -= 4;
                  if ( v33 == -1 )
                    break;
                }
                v31 = *(_DWORD *)(v23 + 92);
              }
            }
            if ( v93 || v91 )
              ((void (__fastcall *)(_DWORD *, int *))loc_27338C)(a1, &v90);
            goto LABEL_33;
          }
          if ( (_BYTE)v74 || s2 != v88 )
          {
            v38 = v96;
            v97 = v88;
            v36 = v96 == 0;
            s2 = 0;
            v88 = 0;
            v96 = v37;
            v98 = v89;
            v89 = 0;
            v92 = 1;
            if ( !v36 )
              sub_339E64(v38);
          }
          v39 = (char *)ptr;
          v40 = (v82 - (int)ptr) >> 2;
          v41 = v40 - 1;
          if ( v40 - 1 >= 0 )
          {
            v42 = 4 * (v40 + 0x3FFFFFFF);
            while ( 1 )
            {
              v43 = *(_DWORD *)&v39[v42];
              v101 = 0;
              v103 = 0;
              v99 = v43;
              v105 = 0;
              v106 = 0;
              v107 = 0;
              v102 = 1;
              v100 = 1;
              v104 = 1;
              ((void (__fastcall *)(void **, int *))loc_27338C)(&v75, &v99);
              if ( v105 )
                sub_339E64(v105);
              --v41;
              v42 -= 4;
              if ( v41 == -1 )
                break;
              v39 = (char *)ptr;
            }
          }
          v44 = (char *)v78;
          v45 = (v79 - (int)v78) >> 2;
          v46 = v45 - 1;
          if ( v45 - 1 >= 0 )
          {
            v47 = 4 * (v45 + 0x3FFFFFFF);
            while ( 1 )
            {
              v48 = *(_DWORD *)&v44[v47];
              v100 = 0;
              v101 = 0;
              v99 = v48;
              v103 = 0;
              v105 = 0;
              v106 = 0;
              v107 = 0;
              v102 = 1;
              v104 = 1;
              ((void (__fastcall *)(void **, int *))loc_27338C)(&v75, &v99);
              if ( v105 )
                sub_339E64(v105);
              --v46;
              v47 -= 4;
              if ( v46 == -1 )
                break;
              v44 = (char *)v78;
            }
          }
          v49 = (char *)s1;
          v50 = (int)(n - (_DWORD)s1) >> 2;
          v51 = v50 - 1;
          if ( v50 - 1 >= 0 )
          {
            v52 = 4 * (v50 + 0x3FFFFFFF);
            while ( 1 )
            {
              v53 = *(_DWORD *)&v49[v52];
              v54 = (void *)*(unsigned __int8 *)(v53 + 140);
              if ( *(_BYTE *)(v53 + 140) )
                goto LABEL_75;
              v99 = v53;
              v100 = (char)v54;
              v101 = (char)v54;
              v102 = (char)v54;
              v103 = v54;
              v105 = v54;
              v106 = v54;
              v107 = v54;
              v104 = 1;
              ((void (__fastcall *)(void **, int *))loc_27338C)(&v75, &v99);
              if ( !v105 )
              {
LABEL_75:
                --v51;
                v52 -= 4;
                if ( v51 == -1 )
                  break;
              }
              else
              {
                --v51;
                v52 -= 4;
                sub_339E64(v105);
                if ( v51 == -1 )
                  break;
              }
              v49 = (char *)s1;
            }
          }
          if ( !v93 && !v92 )
            goto LABEL_25;
        }
        else if ( *(_DWORD *)(v23 + 96) == *(_DWORD *)(v23 + 92)
               && !*(_DWORD *)(v28 + 16)
               && ((((void (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, int *, _DWORD, _DWORD, _DWORD))loc_271AE8)(
                      v23,
                      0,
                      0,
                      0,
                      0,
                      &v99,
                      0,
                      0,
                      0),
                    *(_DWORD *)(v23 + 96) != *(_DWORD *)(v23 + 92))
                || *(_DWORD *)(*(_DWORD *)(v23 + 152) + 16)) )
        {
          v93 = 1;
        }
        else if ( !v93 )
        {
LABEL_25:
          if ( s2 )
            sub_339E64(s2);
          if ( s1 )
            sub_339E64(s1);
          goto LABEL_29;
        }
        ((void (__fastcall *)(_DWORD *, int *))loc_27338C)(a1, &v90);
        goto LABEL_25;
      }
      goto LABEL_35;
    }
  }
  else
  {
    v94 = 1;
    v95 = 1;
  }
  if ( v91 || v93 )
    ((void (__fastcall *)(_DWORD *, int *))loc_27338C)(a1, &v90);
  if ( v96 )
    sub_339E64(v96);
LABEL_89:
  v55 = v75;
  v9 = v76;
  if ( v75 != v76 )
  {
    do
    {
      v56 = (void *)v55[4];
      if ( v56 )
        sub_339E64(v56);
      v55 += 7;
    }
    while ( v9 != v55 );
    v9 = v75;
  }
LABEL_35:
  if ( v9 )
    sub_339E64(v9);
  return a1;
}
