char *__fastcall sub_80E8C(const char *a1, const char *a2)
{
  size_t v4; // r4
  int v5; // r3
  const char *v6; // r4
  int v7; // t1
  unsigned __int8 *v8; // r4
  char *v9; // r2
  char *v10; // r1
  DIR *v11; // r5
  int v12; // r0
  char *v13; // r11
  int v14; // t1
  size_t v15; // r0
  char *v16; // r0
  char *v17; // r3
  char *v18; // r0
  char *v19; // r7
  char *v20; // r0
  int v21; // r0
  int v22; // r9
  char v23; // r8
  int v24; // r6
  char *v25; // r2
  int v26; // r4
  int v27; // r3
  int v28; // t1
  bool v29; // zf
  char *v30; // r10
  int v31; // r2
  const char *v32; // r3
  int v33; // r12
  const char *v34; // r1
  const char *v35; // r1
  int v36; // r3
  const char *v37; // r1
  int v38; // r3
  bool v39; // zf
  char *v40; // r3
  int v41; // t1
  size_t v44; // r11
  size_t v45; // r0
  char *v46; // r0
  char *namea; // [sp+4h] [bp-1018h]
  char *name; // [sp+4h] [bp-1018h]
  char *v49; // [sp+Ch] [bp-1010h]
  char v50[8]; // [sp+10h] [bp-100Ch] BYREF

  if ( a1 )
  {
    v4 = 0;
    do
    {
      if ( v4 >= strlen(a1) )
        return 0;
LABEL_4:
      v5 = (unsigned __int8)a1[v4];
      v6 = &a1[v4];
      if ( v5 == 58 )
      {
        do
        {
          v7 = *(unsigned __int8 *)++v6;
          v5 = v7;
        }
        while ( v7 == 58 );
      }
      v8 = (unsigned __int8 *)(v6 + 1);
      v9 = v50;
      while ( 1 )
      {
        v10 = v9;
        *v9++ = v5;
        if ( !v5 )
          break;
        if ( v5 == 58 )
        {
          *v10 = 0;
          break;
        }
        if ( (unsigned int)(v9 - v50) >= 0x1000 )
          break;
        v14 = *v8++;
        v5 = v14;
      }
      v4 = v8 - (unsigned __int8 *)a1;
      if ( !v50[0] )
        return 0;
      v11 = opendir(v50);
    }
    while ( !v11 );
    do
    {
      v12 = readdir64(v11);
      if ( !v12 )
      {
        closedir(v11);
        goto LABEL_16;
      }
    }
    while ( strcmp((const char *)(v12 + 19), a2) );
    if ( *a2 == 47 )
    {
      v19 = _strdup(a2);
      goto LABEL_25;
    }
    if ( v50[0] )
    {
      v44 = strlen(v50);
      v45 = strlen(a2);
      v46 = (char *)malloc(v44 + v45 + 2);
      if ( v46 )
      {
        v49 = v46;
        name = (char *)(v44 + 1);
        memcpy(v46, v50, v44 + 1);
        v17 = v49;
        v18 = &v49[v44];
        if ( v49[v44 - 1] != 47 )
        {
          v49[v44] = 47;
          v18 = &name[(_DWORD)v49];
          name[(_DWORD)v49] = 0;
        }
        goto LABEL_24;
      }
    }
    else
    {
      v15 = strlen(a2);
      v16 = (char *)malloc(v15 + 3);
      v17 = v16;
      if ( v16 )
      {
        *v16 = 46;
        v16[1] = 47;
        v16[2] = 0;
        v18 = v16 + 2;
LABEL_24:
        namea = v17;
        strcpy(v18, a2);
        v19 = namea;
LABEL_25:
        if ( access(v19, 5) >= 0 )
        {
          v20 = _strdup(v19);
          if ( v20 )
          {
            v13 = v20;
            v21 = (unsigned __int8)*v20;
            v22 = 0;
            if ( *v19 == 47 )
              v23 = 47;
            else
              v23 = 46;
LABEL_30:
            v24 = v22;
            if ( v21 )
            {
              while ( 1 )
              {
                if ( v21 == 47 )
                {
                  v26 = v22++;
                }
                else
                {
                  v25 = &v13[v22];
                  v26 = v22;
                  do
                  {
                    v28 = (unsigned __int8)*++v25;
                    v27 = v28;
                    ++v26;
                    v29 = v28 == 47;
                    if ( v28 != 47 )
                      v29 = v27 == 0;
                    v24 = v26;
                  }
                  while ( !v29 );
                  v22 = v26 + 1;
                  if ( !v27 )
                    goto LABEL_58;
                }
                v21 = (unsigned __int8)v13[v22];
                v30 = &v13[v22];
                if ( v21 == 47 )
                {
                  v31 = v22;
                  v32 = &v13[v22 + 1];
                  do
                  {
                    v33 = *(unsigned __int8 *)v32;
                    v34 = v32;
                    ++v31;
                    ++v32;
                  }
                  while ( v33 == 47 );
                  if ( v31 != v22 )
                  {
                    strcpy(&v13[v24 + 1], v34);
                    v21 = (unsigned __int8)*v30;
                  }
                }
                if ( v26 )
                {
                  if ( v13[v24 - 1] == 92 )
                    goto LABEL_30;
                  if ( !v21 )
                    break;
                }
                if ( v21 != 46 )
                  goto LABEL_30;
                v35 = &v13[v22 + 1];
                v36 = *(unsigned __int8 *)v35;
                if ( !*v35 )
                  break;
                if ( v36 == 47 )
                {
                  v22 = v26 & ~(v26 >> 31);
                  strcpy(v30, v35);
                  v21 = (unsigned __int8)v13[v22];
                  goto LABEL_30;
                }
                if ( v36 != 46 )
                  goto LABEL_30;
                v37 = &v13[v22 + 2];
                v38 = *(unsigned __int8 *)v37;
                v39 = v38 == 47;
                if ( v38 != 47 )
                  v39 = v38 == 0;
                if ( !v39 )
                  goto LABEL_30;
                v40 = &v13[v26];
                do
                {
                  if ( v26-- == 0 )
                    break;
                  v41 = (unsigned __int8)*--v40;
                }
                while ( v41 != 47 );
                v22 = v26 & ~(v26 >> 31);
                strcpy(&v13[v26 + 1], v37);
                v21 = (unsigned __int8)v13[v22];
                v24 = v22;
                if ( !v13[v22] )
                  goto LABEL_58;
              }
              *(v30 - 1) = 0;
            }
LABEL_58:
            if ( !*v13 )
            {
              *v13 = v23;
              v13[1] = 0;
            }
            free(v19);
            closedir(v11);
            return v13;
          }
        }
        free(v19);
        closedir(v11);
LABEL_16:
        if ( v4 < strlen(a1) )
          goto LABEL_4;
        return 0;
      }
    }
    v19 = 0;
    goto LABEL_25;
  }
  return 0;
}
