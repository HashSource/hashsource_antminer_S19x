char *__fastcall sub_7F9CC(const char *a1, const char *a2)
{
  size_t v4; // r5
  int v5; // r3
  const char *v6; // r5
  int v7; // t1
  unsigned __int8 *v8; // r5
  char *v9; // r2
  char *v10; // r1
  DIR *v11; // r6
  int v12; // r0
  char *v13; // r10
  int v15; // t1
  int v16; // r4
  size_t v17; // r0
  size_t v18; // r10
  char *v19; // r0
  char *v20; // r11
  char *v21; // r0
  char *v22; // r0
  int v23; // r5
  int v24; // r0
  int v25; // r8
  int v26; // r3
  char *v27; // r9
  int v28; // r2
  int v29; // t1
  int v30; // r7
  bool v31; // zf
  int v32; // r2
  const char *v33; // r3
  int v34; // r12
  const char *v35; // r1
  int v36; // r2
  const char *v37; // r1
  int v38; // r0
  const char *v39; // r1
  bool v40; // zf
  char *v41; // r3
  int v42; // t1
  char *v44; // r0
  char *v45; // r0
  size_t v46; // [sp+4h] [bp-1018h]
  char v47[8]; // [sp+10h] [bp-100Ch] BYREF

  if ( a1 )
  {
    v4 = 0;
    do
    {
LABEL_3:
      if ( strlen(a1) <= v4 )
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
      v9 = v47;
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
        if ( (unsigned int)(v9 - v47) >= 0x1000 )
          break;
        v15 = *v8++;
        v5 = v15;
      }
      v4 = v8 - (unsigned __int8 *)a1;
      if ( !v47[0] )
        return 0;
      v11 = opendir(v47);
    }
    while ( !v11 );
    do
    {
      v12 = readdir64(v11);
      if ( !v12 )
      {
        closedir(v11);
        if ( strlen(a1) > v4 )
          goto LABEL_4;
        return 0;
      }
    }
    while ( strcmp((const char *)(v12 + 19), a2) );
    v16 = 0;
    if ( *a2 == 47 )
    {
      v20 = _strdup(a2);
    }
    else
    {
      v17 = strlen(a2);
      v18 = v17;
      if ( v47[0] )
      {
        v46 = strlen(v47);
        v19 = (char *)malloc(v18 + 2 + v46);
        v20 = v19;
        if ( v19 )
        {
          memcpy(v19, v47, v46 + 1);
          v21 = &v20[v46];
          if ( v20[v46 - 1] != 47 )
          {
            v21 = &v20[v46 + 1];
            v20[v46] = 47;
            *v21 = 0;
          }
          goto LABEL_25;
        }
      }
      else
      {
        v44 = (char *)malloc(v17 + 3);
        v20 = v44;
        if ( v44 )
        {
          strcpy(v44, "./");
          v21 = v44 + 2;
LABEL_25:
          memcpy(v21, a2, v18 + 1);
          goto LABEL_26;
        }
      }
      v20 = 0;
    }
LABEL_26:
    if ( access(v20, 5) < 0 || (v22 = _strdup(v20)) == 0 )
    {
      free(v20);
      closedir(v11);
      goto LABEL_3;
    }
    v23 = (unsigned __int8)*v20;
    v13 = v22;
    v24 = (unsigned __int8)*v22;
    if ( v23 != 47 )
      LOBYTE(v23) = 46;
LABEL_31:
    v25 = v16;
    if ( v24 )
    {
      do
      {
        v26 = v16 + 1;
        if ( v24 != 47 )
        {
LABEL_33:
          v27 = &v13[v16];
          goto LABEL_34;
        }
        v30 = v16++;
        while ( 1 )
        {
          v24 = (unsigned __int8)v13[v16];
          v27 = &v13[v16];
          if ( v24 == 47 )
          {
            v32 = v16;
            v33 = &v13[v16 + 1];
            do
            {
              v34 = *(unsigned __int8 *)v33;
              v35 = v33;
              ++v32;
              ++v33;
            }
            while ( v34 == 47 );
            if ( v32 != v16 )
            {
              strcpy(&v13[v25 + 1], v35);
              v24 = (unsigned __int8)*v27;
            }
          }
          if ( v30 )
          {
            if ( v13[v25 - 1] == 92 )
              goto LABEL_31;
            if ( !v24 )
              goto LABEL_67;
          }
          if ( v24 != 46 )
            goto LABEL_31;
          v26 = v16 + 1;
          v36 = (unsigned __int8)v13[v16 + 1];
          v37 = &v13[v16 + 1];
          if ( !*v37 )
          {
LABEL_67:
            *(v27 - 1) = 0;
            goto LABEL_59;
          }
          if ( v36 == 47 )
          {
            v45 = &v13[v16];
            v16 = v30;
            strcpy(v45, v37);
            v24 = (unsigned __int8)v13[v30];
            goto LABEL_31;
          }
          if ( v36 != 46 )
            goto LABEL_33;
          v38 = (unsigned __int8)v13[v16 + 2];
          v39 = &v13[v16 + 2];
          v40 = v38 == 0;
          if ( *v39 )
            v40 = v38 == 47;
          if ( v40 )
            break;
          while ( 1 )
          {
LABEL_34:
            v29 = (unsigned __int8)*++v27;
            v28 = v29;
            v30 = v26;
            v25 = v26;
            v31 = v29 == 0;
            if ( v29 )
              v31 = v28 == 47;
            if ( v31 )
              break;
            v16 = v26++;
          }
          v16 += 2;
          if ( !v28 )
            goto LABEL_59;
        }
        v41 = &v13[v30];
        do
        {
          if ( v30-- == 0 )
            break;
          v42 = (unsigned __int8)*--v41;
        }
        while ( v42 != 47 );
        v16 = v30 & ~(v30 >> 31);
        strcpy(&v13[v30 + 1], v39);
        v24 = (unsigned __int8)v13[v16];
        v25 = v16;
      }
      while ( v13[v16] );
    }
LABEL_59:
    if ( !*v13 )
    {
      *v13 = v23;
      v13[1] = 0;
    }
    free(v20);
    closedir(v11);
    return v13;
  }
  return 0;
}
