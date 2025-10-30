char *__fastcall sub_284C1C(char *s, int a2)
{
  const char *v2; // r5
  const char *v3; // r6
  int *v4; // r4
  int v5; // r7
  size_t v7; // r0
  char *v8; // r0
  char *v9; // r0
  int v10; // r3
  size_t v11; // r0
  char *v12; // r0
  char *v13; // r8
  char *v14; // r0
  char *v15; // r7
  int v16; // r0
  char *v17; // r3
  DIR *v18; // r0
  const char *v19; // r9
  int v20; // r0
  int *v21; // r10
  int v22; // r11
  int v23; // r0
  size_t v24; // r0
  int (__fastcall *v25)(int, size_t); // r3
  signed int v26; // r8
  const char *v27; // r0
  signed int v28; // r7
  int v29; // r2
  int v30; // r7
  const char *v31; // r8
  size_t v32; // r9
  size_t v33; // r8
  char *v34; // r7
  const char *v35; // r1
  const char *v36; // r4
  char *v37; // r0
  int v39; // r0
  int v40; // r0
  const char *v41; // r9
  bool v42; // zf
  size_t v43; // r0
  char *v44; // r0
  const char *v45; // r9
  unsigned __int8 *v46; // r10
  const unsigned __int16 *v47; // r4
  __int32_t v48; // r5
  __int32_t v49; // t1
  __int32_t v50; // r6
  int v51; // r8
  __int32_t v52; // r8
  __int32_t v53; // t1
  __int32_t v54; // r0
  int v55; // r11
  bool v56; // zf
  bool v57; // zf
  const unsigned __int16 **v58; // r0
  __int32_t v59; // r3
  const unsigned __int16 *v60; // r2
  const __int32_t **v61; // r0
  __int32_t v62; // r0
  const __int32_t **v63; // r0
  bool v64; // zf
  size_t v65; // r0
  char *v66; // r0
  int v67; // r7
  size_t v68; // r0
  char *v69; // r0
  size_t v70; // r0
  char *v71; // r0
  char *v72; // r0
  DIR *v73; // r0
  const char *v74; // [sp+4h] [bp-18h]
  __int32_t v75; // [sp+4h] [bp-18h]
  __int32_t v76; // [sp+4h] [bp-18h]
  const char *v77; // [sp+8h] [bp-14h]
  const unsigned __int16 *v78; // [sp+8h] [bp-14h]
  __int32_t v79; // [sp+8h] [bp-14h]
  int v80; // [sp+Ch] [bp-10h]
  int *v81; // [sp+10h] [bp-Ch]
  int *v82; // [sp+14h] [bp-8h]

  v4 = &dword_48ACB4;
  v5 = dword_48ACC4;
  if ( a2 )
    goto LABEL_25;
  if ( dword_48ACC4 )
  {
    closedir((DIR *)dword_48ACC4);
    dword_48ACC4 = 0;
  }
  if ( dword_48ACC8 )
    free((void *)dword_48ACC8);
  if ( dword_48ACCC )
    free((void *)dword_48ACCC);
  if ( dword_48ACD0 )
    free((void *)dword_48ACD0);
  v7 = strlen(s);
  v8 = (char *)sub_93028(v7 + 1);
  v9 = strcpy(v8, s);
  v10 = (unsigned __int8)*s;
  dword_48ACCC = (int)v9;
  if ( v10 )
  {
    v11 = strlen(s) + 1;
  }
  else
  {
    s = ".";
    v11 = 2;
  }
  v12 = (char *)sub_93028(v11);
  v13 = strcpy(v12, s);
  dword_48ACC8 = (int)v13;
  v14 = strrchr(v13, 47);
  v15 = v14;
  if ( v14 )
  {
    strcpy((char *)dword_48ACCC, v14 + 1);
    v15[1] = 0;
  }
  else
  {
    *v13 = 46;
    *(_BYTE *)(dword_48ACC8 + 1) = 0;
  }
  if ( !dword_4900F0 || !off_48ACD4 )
  {
    v65 = strlen((const char *)dword_48ACC8);
    v66 = (char *)sub_93028(v65 + 1);
    dword_48ACD0 = (int)strcpy(v66, (const char *)dword_48ACC8);
    v16 = dword_48ACC8;
    if ( *(_BYTE *)dword_48ACC8 != 126 )
      goto LABEL_17;
LABEL_99:
    v67 = sub_29B910(v16);
    sub_297758(dword_48ACC8);
    dword_48ACC8 = v67;
    goto LABEL_17;
  }
  dword_48ACD0 = ((int (__fastcall *)(int, int))off_48ACD4)(dword_48ACC8, dword_4900F8);
  v16 = dword_48ACC8;
  if ( *(_BYTE *)dword_48ACC8 == 126 )
    goto LABEL_99;
LABEL_17:
  if ( off_48ACD8 )
  {
    ((void (__fastcall *)(int *))off_48ACD8)(&dword_48ACC8);
    v17 = (char *)dword_48ACC8;
  }
  else if ( off_48ACDC && off_48ACDC(&dword_48ACC8) )
  {
    sub_297758(dword_48ACD0);
    v70 = strlen((const char *)dword_48ACC8);
    v71 = (char *)sub_93028(v70 + 1);
    v72 = strcpy(v71, (const char *)dword_48ACC8);
    v17 = (char *)dword_48ACC8;
    dword_48ACD0 = (int)v72;
  }
  else
  {
    v17 = (char *)dword_48ACC8;
    if ( dword_4900F0 && off_48ACD4 )
    {
      sub_297758(dword_48ACC8);
      v68 = strlen((const char *)dword_48ACD0);
      v69 = (char *)sub_93028(v68 + 1);
      v17 = strcpy(v69, (const char *)dword_48ACD0);
      dword_48ACC8 = (int)v17;
    }
  }
  v18 = opendir(v17);
  v19 = (const char *)dword_48ACCC;
  v5 = (int)v18;
  dword_48ACC4 = (int)v18;
  if ( dword_48ACCC && *(_BYTE *)dword_48ACCC && dword_4900F0 && off_48ACD4 )
  {
    v19 = (const char *)((int (__fastcall *)(int, int))off_48ACD4)(dword_48ACCC, dword_4900F8);
    sub_297758(dword_48ACCC);
    v5 = dword_48ACC4;
    dword_48ACCC = (int)v19;
  }
  dword_48ACE0 = strlen(v19);
  dword_48ACC0 = 1;
LABEL_25:
  v20 = v5;
  v21 = &dword_470740;
  v22 = 0;
  while ( v20 )
  {
    v23 = readdir64(v20);
    v22 = v23;
    if ( !v23 )
    {
      v73 = (DIR *)v4[4];
      if ( v73 )
      {
        closedir(v73);
        v4[4] = 0;
      }
      goto LABEL_47;
    }
    v2 = (const char *)(v23 + 19);
    v24 = strlen((const char *)(v23 + 19));
    v25 = (int (__fastcall *)(int, size_t))v4[12];
    v26 = v24;
    if ( v25 )
    {
      v27 = (const char *)v25(v22 + 19, v24);
      v3 = v27;
      if ( v2 != v27 )
        v26 = strlen(v27);
    }
    else
    {
      v3 = (const char *)(v22 + 19);
    }
    v28 = v4[11];
    if ( v28 )
    {
      v41 = (const char *)v4[6];
      if ( v4[13] )
      {
        if ( v4[14] )
        {
          if ( v28 <= v26 )
          {
            v81 = v4;
            v45 = v41 - 1;
            v82 = v21;
            v46 = (unsigned __int8 *)(v3 - 1);
            v47 = *_ctype_b_loc();
            v74 = (const char *)(v22 + 19);
            v77 = v3;
            v80 = v22;
            do
            {
              v49 = *++v46;
              v48 = v49;
              v50 = v49;
              v51 = (__int16)v49;
              if ( (v47[(__int16)v49] & 0x100) != 0 )
                v50 = (*_ctype_tolower_loc())[v51];
              v53 = *(unsigned __int8 *)++v45;
              v52 = v53;
              v54 = v53;
              v55 = (__int16)v53;
              if ( (v47[(__int16)v53] & 0x100) != 0 )
                v54 = (*_ctype_tolower_loc())[v55];
              v56 = v48 == 95;
              if ( v48 != 95 )
                v56 = v48 == 45;
              if ( !v56 )
                goto LABEL_75;
              v57 = v52 == 95;
              if ( v52 != 95 )
                v57 = v52 == 45;
              if ( !v57 )
              {
LABEL_75:
                if ( v50 != v54 )
                {
                  v2 = v74;
                  v3 = v77;
                  v22 = v80;
                  v4 = v81;
                  v21 = v82;
                  goto LABEL_44;
                }
              }
              --v28;
            }
            while ( v28 );
            v2 = v74;
            v3 = v77;
            v22 = v80;
            v4 = v81;
LABEL_33:
            v30 = v4[5];
            if ( v30 && (*(_BYTE *)v30 != 46 || *(_BYTE *)(v30 + 1)) )
            {
              v31 = (const char *)v4[7];
              v32 = strlen((const char *)(v22 + 19));
              if ( v4[15] && *v31 == 126 )
              {
                v33 = strlen((const char *)v30);
                v34 = (char *)sub_93028(v32 + 2 + v33);
                strcpy(v34, (const char *)v4[5]);
                if ( *(_BYTE *)(v4[5] + v33 - 1) == 47 )
                  goto LABEL_101;
                v34[v33] = 47;
                v34[v33 + 1] = 0;
                v37 = &v34[v33 + 1];
              }
              else
              {
                v33 = strlen(v31);
                v34 = (char *)sub_93028(v32 + 2 + v33);
                v35 = (const char *)v4[7];
                v36 = &v35[v33];
                strcpy(v34, v35);
                if ( *(v36 - 1) != 47 )
                {
                  v37 = &v34[v33 + 1];
                  v34[v33] = 47;
                  goto LABEL_39;
                }
LABEL_101:
                v37 = &v34[v33];
              }
LABEL_39:
              strcpy(v37, v3);
            }
            else
            {
              v43 = strlen(v3);
              v44 = (char *)sub_93028(v43 + 1);
              v34 = strcpy(v44, v3);
            }
            if ( v2 != v3 )
              sub_297758(v3);
            return v34;
          }
          goto LABEL_44;
        }
        v58 = _ctype_b_loc();
        v59 = *(unsigned __int8 *)v3;
        v60 = *v58;
        v75 = v59;
        if ( ((*v58)[v59] & 0x100) != 0 )
        {
          v78 = *v58;
          v61 = _ctype_tolower_loc();
          v60 = v78;
          v59 = (*v61)[v75];
        }
        v62 = *(unsigned __int8 *)v41;
        v76 = v62;
        if ( (v60[v62] & 0x100) != 0 )
        {
          v79 = v59;
          v63 = _ctype_tolower_loc();
          v59 = v79;
          v62 = (*v63)[v76];
        }
        v64 = v28 == v26;
        if ( v28 <= v26 )
          v64 = v59 == v62;
        if ( !v64 )
          goto LABEL_44;
        if ( !strncasecmp(v41, v3, v28) )
          goto LABEL_33;
        v20 = v4[4];
      }
      else
      {
        v42 = v28 == v26;
        if ( v28 <= v26 )
          v42 = *(unsigned __int8 *)v3 == *(unsigned __int8 *)v41;
        if ( !v42 )
          goto LABEL_44;
        if ( !strncmp((const char *)v4[6], v3, v4[11]) )
          goto LABEL_33;
        v20 = v4[4];
      }
    }
    else
    {
      v29 = *(unsigned __int8 *)v3;
      if ( !v21[2] )
      {
        if ( v29 != 46 )
          goto LABEL_33;
LABEL_44:
        v20 = v4[4];
        continue;
      }
      if ( v29 != 46 )
        goto LABEL_33;
      if ( !v3[1] )
        goto LABEL_44;
      if ( v3[1] != 46 || v3[2] )
        goto LABEL_33;
      v20 = v4[4];
    }
  }
  if ( v22 )
    goto LABEL_33;
LABEL_47:
  v39 = v4[5];
  if ( v39 )
  {
    sub_297758(v39);
    v4[5] = 0;
  }
  v40 = v4[6];
  if ( v40 )
  {
    sub_297758(v40);
    v4[6] = 0;
  }
  v34 = (char *)v4[7];
  if ( !v34 )
    return v34;
  sub_297758(v4[7]);
  v4[7] = 0;
  return 0;
}
