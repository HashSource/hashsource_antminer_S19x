void *__fastcall sub_29B910(const char *a1)
{
  const char *v1; // r6
  char *v2; // r4
  size_t v3; // r0
  signed int v4; // r9
  size_t v5; // r0
  size_t v6; // r8
  _BOOL4 v7; // r7
  size_t v8; // r5
  int v9; // r11
  const char *v10; // r7
  char **v11; // r4
  const char *v12; // r9
  const char *v13; // t1
  size_t v14; // r5
  const char *v15; // r10
  signed int v16; // r7
  const char **v17; // r6
  const char *v18; // r4
  size_t v19; // r8
  const char *v20; // r9
  const char **v21; // r11
  const char *v22; // t1
  size_t v23; // r0
  char *v24; // r5
  char *v25; // r4
  size_t v26; // r0
  int v27; // t1
  size_t v28; // r1
  void *v30; // [sp+0h] [bp-1Ch]
  signed int v31; // [sp+4h] [bp-18h]
  char **v32; // [sp+8h] [bp-14h]
  size_t v33; // [sp+8h] [bp-14h]
  signed int v34; // [sp+10h] [bp-Ch]
  size_t v35; // [sp+14h] [bp-8h]

  v1 = a1;
  v2 = strchr(a1, 126);
  v3 = strlen(v1);
  if ( v2 )
  {
    v31 = v3 + 16;
    v30 = sub_93028(v3 + 16);
  }
  else
  {
    v31 = v3 + 1;
    v30 = sub_93028(v3 + 1);
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = strlen(v1);
    v6 = v5;
    v7 = *(unsigned __int8 *)v1 == 126;
    if ( !*v1 )
      v7 = 1;
    if ( v7 )
    {
      v16 = v4;
      v6 = 0;
      v15 = v1;
      v8 = 0;
      if ( v31 <= v4 )
        goto LABEL_33;
    }
    else
    {
      v8 = v5;
      v32 = off_4707BC;
      if ( off_4707BC )
      {
        if ( v5 )
        {
          v9 = 0;
          v34 = v4;
          v35 = v5;
          v10 = *off_4707BC;
          while ( !v10 )
          {
LABEL_34:
            if ( v6 == ++v9 )
            {
              v4 = v34;
              v8 = v35;
              goto LABEL_36;
            }
          }
          v11 = v32;
          v12 = v10;
          while ( 1 )
          {
            v14 = strlen(v12);
            if ( !strncmp(&v1[v9], v12, v14) )
              break;
            v13 = v11[1];
            ++v11;
            v12 = v13;
            if ( !v13 )
              goto LABEL_34;
          }
          v4 = v34;
          v8 = v14 - 1 + v9;
          v6 = v8;
          v15 = &v1[v8];
          v16 = v34 + v8;
        }
        else
        {
          v15 = v1;
          v16 = v4;
        }
      }
      else
      {
LABEL_36:
        v16 = v4 + v6;
        v15 = &v1[v6];
      }
      if ( v31 <= v16 )
      {
LABEL_33:
        v28 = v31 + v8 + 20 + 1;
        v31 += v8 + 20;
        v30 = sub_93050(v30, v28);
      }
    }
    strncpy((char *)v30 + v4, v1, v6);
    v17 = (const char **)off_4707C0;
    v33 = strlen(v15);
    if ( !v33 || *v15 == 47 )
    {
      v19 = 0;
    }
    else
    {
      v18 = v15;
      v19 = 0;
      while ( 1 )
      {
        if ( v17 )
        {
          v20 = *v17;
          if ( *v17 )
            break;
        }
LABEL_29:
        if ( v33 != ++v19 )
        {
          v27 = *(unsigned __int8 *)++v18;
          if ( v27 != 47 )
            continue;
        }
        goto LABEL_26;
      }
      v21 = v17;
      while ( 1 )
      {
        v23 = strlen(v20);
        if ( !strncmp(v18, v20, v23) )
          break;
        v22 = v21[1];
        ++v21;
        v20 = v22;
        if ( !v22 )
          goto LABEL_29;
      }
      v8 |= v19;
    }
    if ( !v8 )
      break;
LABEL_26:
    v1 = &v15[v19];
    v24 = (char *)sub_93028(v19 + 1);
    strncpy(v24, v15, v19);
    v24[v19] = 0;
    v25 = sub_29B760((int)v24);
    sub_297758(v24);
    v26 = strlen(v25);
    v4 = v26 + v16;
    if ( (int)(v26 + v16) >= v31 )
    {
      v31 += v26 + 20;
      v30 = sub_93050(v30, v31 + 1);
    }
    strcpy((char *)v30 + v16, v25);
    sub_297758(v25);
  }
  *((_BYTE *)v30 + v16) = 0;
  return v30;
}
