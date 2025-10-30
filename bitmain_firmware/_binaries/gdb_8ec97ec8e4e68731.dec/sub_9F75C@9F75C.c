int __fastcall sub_9F75C(const char *a1, int a2, int a3)
{
  char *v5; // r0
  int v6; // r1
  int v7; // r4
  _BOOL4 v8; // r2
  char *v9; // r10
  const char *v10; // r8
  int v11; // r5
  const char **v12; // r9
  const char *v13; // r6
  const char **v14; // r3
  const char *v15; // r7
  signed int v16; // r4
  char *v17; // r3
  const char *v18; // r2
  char *v19; // t1
  signed int v20; // r0
  char *v21; // r3
  const char *v22; // r1
  int v23; // t1
  bool v24; // zf
  int v25; // r1
  int v26; // r12
  bool v27; // zf
  int v28; // r2
  _BOOL4 v29; // r3
  signed int v30; // r1
  const char *v31; // lr
  int v32; // t1
  _BOOL4 v33; // r3
  signed int v35; // r1
  const char *v36; // r12
  int v37; // t1
  _BOOL4 v38; // r3
  unsigned int v39; // r0
  char *v40; // r3
  int v41; // r0
  int v42; // r1
  _DWORD *v43; // r3
  char *v44; // r5
  int v45; // r3
  int v46; // r2
  int v47; // r4
  char *v48; // r5
  int v49; // r8
  int v50; // r0
  int v51; // r3
  int v52; // r10
  int v53; // r9
  int v54; // r0
  _DWORD *v55; // r0
  const char *v56; // r10
  int v57; // r0
  int *v58; // r5
  char *v59; // r9
  int v60; // r4
  int *v61; // lr
  int v62; // r2
  int v63; // t1
  char *v64; // r12
  char *v65; // r3
  int v66; // r1
  int v68; // r2
  int v69; // r0
  int v70; // r10
  _DWORD *v71; // r0
  const char *v72; // r1
  int v73; // r0
  _DWORD *v74; // r0
  int v75; // r0
  _DWORD *v76; // r0
  const char *v77; // r0
  int v78; // r0
  _DWORD *v79; // r0
  int v80; // r9
  int v81; // r10
  int v82; // r0
  _DWORD *v83; // r0
  const char *v84; // r0
  int v85; // r6
  char *v86; // [sp+8h] [bp-74h] BYREF
  int v87; // [sp+Ch] [bp-70h]
  int *v88; // [sp+10h] [bp-6Ch]
  int v89; // [sp+14h] [bp-68h]
  int v90; // [sp+18h] [bp-64h]
  int v91; // [sp+1Ch] [bp-60h]
  int v92; // [sp+20h] [bp-5Ch]
  int v93; // [sp+24h] [bp-58h]
  const char *v94; // [sp+28h] [bp-54h]
  char *nptr; // [sp+2Ch] [bp-50h]
  char v96[4]; // [sp+30h] [bp-4Ch] BYREF
  int v97; // [sp+34h] [bp-48h]
  int v98; // [sp+40h] [bp-3Ch]

  v91 = a2;
  v89 = a3;
  v88 = (int *)&v86;
  if ( a3 == 1 )
  {
    v5 = (char *)sub_21A594();
    v87 = v89;
  }
  else
  {
    v5 = (char *)sub_21A594();
    if ( a3 <= 0 )
      sub_946E0("Request to select 0 symbols!");
    v87 = 2;
  }
  if ( v91 > 1 )
  {
    if ( v5 == "cancel" )
      sub_946E0("canceled because the command is ambiguous\nSee set/show multiple-symbol.");
    v7 = v89;
    v8 = v89 != 1;
    if ( v5 != "all" )
      v8 = 0;
    if ( !v8 )
    {
      sub_259858("[0] cancel\n", v6, 0, "all");
      if ( v7 != 1 )
        sub_259858("[1] all\n");
      v9 = (char *)a1;
      v94 = a1;
      v90 = v91 - 1;
      v93 = 0;
      do
      {
        v10 = v94;
        v11 = v93;
        v12 = (const char **)*((_DWORD *)v94 + 2);
        v92 = *((_DWORD *)v94 + 3);
        while ( 1 )
        {
          v13 = *v12;
          if ( *v12 )
          {
            v14 = *(const char ***)&v9[8 * v11];
            v15 = *v14;
            if ( !*v14 )
              break;
            v16 = strlen(*v14) - 1;
            v17 = (char *)(unsigned __int8)v15[v16];
            if ( v16 > 0 )
            {
              v18 = &v15[v16];
              if ( (unsigned int)(v17 - 48) <= 9 )
              {
                do
                {
                  --v16;
                  v19 = (char *)*(unsigned __int8 *)--v18;
                  v17 = v19;
                }
                while ( v16 && (unsigned int)(v17 - 48) <= 9 );
              }
              else
              {
                v17 = (char *)(unsigned __int8)v15[v16];
              }
            }
            nptr = v17;
            v20 = strlen(v13) - 1;
            v21 = nptr;
            if ( v20 > 0 )
            {
              v22 = &v13[v20];
              if ( (unsigned int)(unsigned __int8)v13[v20] - 48 <= 9 )
              {
                do
                {
                  if ( !--v20 )
                    break;
                  v23 = *(unsigned __int8 *)--v22;
                }
                while ( (unsigned int)(v23 - 48) <= 9 );
              }
            }
            v24 = nptr == (char *)36;
            if ( nptr != (char *)36 )
              v24 = nptr == (char *)95;
            if ( !v24 )
              goto LABEL_60;
            v25 = (unsigned __int8)v15[v16 + 1];
            nptr = (char *)&v15[v16 + 1];
            if ( !v25 )
              goto LABEL_60;
            v26 = (unsigned __int8)v13[v20];
            v27 = v26 == 36;
            if ( v26 != 36 )
              v27 = v26 == 95;
            if ( !v27 )
              goto LABEL_60;
            v28 = (unsigned __int8)v13[v20 + 1];
            v86 = (char *)&v13[v20 + 1];
            if ( !v28 )
              goto LABEL_60;
            v29 = v21 != (char *)95 || v16 <= 0;
            if ( !v29 && v15[v16 - 1] == 95 )
            {
              v30 = v16 - 1;
              v31 = &v15[v16 - 1];
              while ( 1 )
              {
                v33 = v30 <= 0;
                v16 = v30;
                if ( *v31 != 95 )
                  v33 = 1;
                if ( v33 )
                  break;
                v32 = *(unsigned __int8 *)--v31;
                if ( v32 != 95 )
                  break;
                --v30;
              }
            }
            if ( v26 == 95 && v20 > 0 )
            {
              v35 = v20 - 1;
              v36 = &v13[v20 - 1];
              if ( *v36 == 95 )
              {
                while ( 1 )
                {
                  v38 = v35 <= 0;
                  v20 = v35;
                  if ( *v36 != 95 )
                    v38 = 1;
                  if ( v38 )
                    break;
                  v37 = *(unsigned __int8 *)--v36;
                  if ( v37 != 95 )
                    break;
                  --v35;
                }
              }
            }
            if ( v20 == v16 && !strncmp(v15, v13, v20) )
            {
              v85 = strtol(nptr, 0, 10);
              v39 = v85 < strtol(v86, 0, 10);
            }
            else
            {
LABEL_60:
              v39 = (unsigned int)strcmp(v15, v13) >> 31;
            }
            if ( v39 )
              break;
          }
          v40 = &v9[8 * v11--];
          v41 = *(_DWORD *)v40;
          v42 = *((_DWORD *)v40 + 1);
          v43 = v10 + 8;
          v10 -= 8;
          *v43 = v41;
          v43[1] = v42;
          if ( v11 == -1 )
          {
            v44 = v9;
            goto LABEL_64;
          }
        }
        v44 = &v9[8 * v11 + 8];
LABEL_64:
        v45 = v93;
        v46 = v90;
        *(_DWORD *)v44 = v12;
        v93 = v45 + 1;
        *((_DWORD *)v44 + 1) = v92;
        v94 += 8;
      }
      while ( v45 + 1 != v46 );
      v47 = v87;
      v48 = &v9[-8 * v87];
      v49 = v91 + v87;
      v94 = " at ?\n";
      nptr = v9;
      while ( 1 )
      {
        v50 = *(_DWORD *)&v48[8 * v47];
        if ( v50 )
          break;
LABEL_78:
        if ( v49 == ++v47 )
        {
          v58 = v88;
          v59 = nptr;
          v60 = sub_9F590(v88, v91, v89, v89 > 1, (int)"overload-choice");
          v91 = v60;
          if ( v60 > 0 )
          {
            v61 = v58 - 1;
            v62 = 0;
            do
            {
              v63 = v61[1];
              ++v61;
              v64 = &v59[8 * v62++];
              v65 = &v59[8 * v63];
              v66 = *((_DWORD *)v65 + 1);
              *(_DWORD *)v64 = *(_DWORD *)v65;
              *((_DWORD *)v64 + 1) = v66;
            }
            while ( v60 != v62 );
          }
          return v91;
        }
      }
      v51 = *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v50 + 32) >> 3));
      if ( v51 == 10 )
      {
        sub_21EC18(v96, *(_DWORD *)&v48[8 * v47], 1);
        v80 = v97;
        v81 = v98;
        v82 = sub_259858("[%d] ", v47);
        v83 = (_DWORD *)sub_242F8C(v82);
        ((void (__fastcall *)(_DWORD, _DWORD))loc_9D990)(*v83, *(_DWORD *)&v48[8 * v47]);
        if ( v80 )
        {
          v84 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v80);
          sub_259858(" at %s:%d\n", v84, v81);
        }
        else
        {
          sub_259858(" at <no source file available>:%d\n", v81);
        }
        goto LABEL_78;
      }
      if ( v51 == 1 && (v68 = *(_DWORD *)(v50 + 24)) != 0 && **(_BYTE **)(v68 + 24) == 5 )
      {
        if ( (*(_BYTE *)(v50 + 33) & 1) == 0 )
        {
          v53 = *(_BYTE *)(v50 + 33) & 1;
          goto LABEL_88;
        }
        v52 = *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v50 + 32) >> 3));
      }
      else
      {
        if ( (*(_BYTE *)(v50 + 33) & 1) == 0 )
          goto LABEL_98;
        v52 = 0;
      }
      v53 = sub_2209DC(v50);
      v50 = *(_DWORD *)&v48[8 * v47];
      if ( *(_WORD *)(v50 + 34) )
      {
        if ( v53 )
        {
          v75 = sub_259858("[%d] ", v47);
          v76 = (_DWORD *)sub_242F8C(v75);
          ((void (__fastcall *)(_DWORD, _DWORD))loc_9D990)(*v76, *(_DWORD *)&v48[8 * v47]);
          v77 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v53);
          sub_259858(" at %s:%d\n", v77, *(unsigned __int16 *)(*(_DWORD *)&v48[8 * v47] + 34));
          goto LABEL_78;
        }
        if ( !v52 )
        {
LABEL_98:
          v78 = sub_259858("[%d] ", v47);
          v79 = (_DWORD *)sub_242F8C(v78);
          ((void (__fastcall *)(_DWORD, _DWORD))loc_9D990)(*v79, *(_DWORD *)&v48[8 * v47]);
LABEL_99:
          sub_259858(v94);
          goto LABEL_78;
        }
      }
      else if ( !v52 )
      {
        v54 = sub_259858("[%d] ", v47);
        v55 = (_DWORD *)sub_242F8C(v54);
        ((void (__fastcall *)(_DWORD, _DWORD))loc_9D990)(*v55, *(_DWORD *)&v48[8 * v47]);
        if ( !v53 )
          goto LABEL_99;
        v56 = " at %s:?\n";
        goto LABEL_77;
      }
LABEL_88:
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v50 + 24) + 24) + 8) )
      {
        v69 = sub_259858("[%d] ", v47);
        v70 = *(_DWORD *)(*(_DWORD *)&v48[8 * v47] + 24);
        v71 = (_DWORD *)sub_242F8C(v69);
        sub_B232C(v70, 0, *v71, -1, 0, "\a");
        if ( dword_46D448 )
          v72 = (const char *)sub_21B3C4(*(_DWORD *)&v48[8 * v47]);
        else
          v72 = **(const char ***)&v48[8 * v47];
        sub_259858("'(%s) (enumeral)\n", v72);
        goto LABEL_78;
      }
      v73 = sub_259858("[%d] ", v47);
      v74 = (_DWORD *)sub_242F8C(v73);
      ((void (__fastcall *)(_DWORD, _DWORD))loc_9D990)(*v74, *(_DWORD *)&v48[8 * v47]);
      if ( !v53 )
      {
        sub_259858(" (enumeral)\n");
        goto LABEL_78;
      }
      v56 = " in %s (enumeral)\n";
LABEL_77:
      v57 = ((int (__fastcall *)(int))loc_2043D4)(v53);
      sub_259858(v56, v57);
      goto LABEL_78;
    }
  }
  return v91;
}
