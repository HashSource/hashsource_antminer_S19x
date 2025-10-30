char *__fastcall sub_30D9EC(const char *a1)
{
  const char *v1; // r9
  int v2; // r7
  char *v3; // r8
  const char *v4; // r5
  size_t v5; // r0
  char *v6; // r0
  int v7; // r11
  char *v8; // r6
  __int16 v9; // r3
  int v10; // r4
  const char *v11; // r11
  size_t i; // r10
  char **v13; // r3
  const char *v14; // r4
  size_t v15; // r0
  const char *v16; // r1
  char *v17; // r6
  size_t v18; // r0
  char *v19; // r0
  const char *v21; // r5
  int v22; // r3
  char *v23; // r10
  bool v24; // zf
  bool v25; // zf
  int v26; // t1
  bool v27; // zf
  int v28; // r3
  const char *v29; // r5
  char *v30; // r0
  int v31; // r3
  int v32; // r6
  const char *v33; // r4
  char *v34; // r10
  size_t j; // r2
  const char *v36; // r4
  size_t v37; // r0
  char *v38; // r6
  int v39; // r3
  const char *v40; // r4
  bool v41; // zf
  int v42; // t1
  bool v43; // zf
  _BYTE *v44; // r4
  int v45; // t1
  bool v46; // zf
  int v47; // r3
  _BYTE *v48; // r4
  int v49; // t1
  const char *src; // [sp+4h] [bp-8h]
  char *srca; // [sp+4h] [bp-8h]

  v1 = a1;
  LOWORD(v2) = (unsigned __int16)word_438898;
  if ( !strncmp(a1, "_ada_", 5u) )
    v1 += 5;
  HIWORD(v2) = (unsigned int)word_438898 >> 16;
  v3 = (char *)(*(_WORD *)(v2 + 2 * *(unsigned __int8 *)v1) & 8);
  if ( !v3 )
    goto LABEL_14;
  v4 = v1;
  v5 = strlen(v1);
  v6 = (char *)sub_93028(v5 + 8);
  v7 = *(unsigned __int8 *)v1;
  v3 = v6;
  v8 = v6;
  v9 = *(_WORD *)(v2 + 2 * v7);
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = v9 & 8;
      if ( (v9 & 8) != 0 )
      {
        v21 = v4 + 1;
        while ( 1 )
        {
          do
          {
            *v8++ = v7;
            v14 = v21;
            v7 = *(unsigned __int8 *)v21++;
          }
          while ( (*(_WORD *)(v2 + 2 * v7) & 0xC) != 0 );
          if ( v7 != 95 )
            break;
          v22 = *(_WORD *)(v2 + 2 * *(unsigned __int8 *)v21) & 0xC;
          if ( !v22 )
            goto LABEL_21;
        }
      }
      else
      {
        if ( v7 != 79 )
          goto LABEL_14;
        v11 = "Oabs";
        for ( i = 4; strncmp(v4, v11, i); i = strlen((&off_432DA0)[2 * v10]) )
        {
          ++v10;
          v11 = (&off_432DA0)[2 * v10];
          if ( !v11 )
            goto LABEL_14;
        }
        v13 = &off_432950[2 * v10];
        v14 = &v4[i];
        src = v13[277];
        v15 = strlen(src);
        v16 = src;
        srca = (char *)v15;
        *v8 = 34;
        memcpy(v8 + 1, v16, v15);
        v17 = &srca[(_DWORD)(v8 + 1)];
        *v17 = 34;
        v7 = (unsigned __int8)v4[i];
        v8 = v17 + 1;
      }
      if ( v7 != 84 )
        break;
      if ( v14[1] != 75 )
      {
        v23 = v8;
        goto LABEL_28;
      }
      v28 = *((unsigned __int8 *)v14 + 2);
      if ( v28 == 66 )
      {
        if ( v14[3] )
          goto LABEL_14;
        goto LABEL_29;
      }
      if ( v28 != 95 || v14[3] != 95 )
        goto LABEL_14;
      v7 = *((unsigned __int8 *)v14 + 4);
      *v8 = 46;
      v4 = v14 + 4;
      ++v8;
      v9 = *(_WORD *)(v2 + 2 * v7);
    }
    if ( v7 == 69 )
      goto LABEL_14;
    v22 = v7 == 78;
    if ( ((v7 - 78) & 0xFD) != 0 )
    {
LABEL_21:
      if ( v7 == 83 )
        v22 |= 1u;
      if ( v22 && !v14[1] )
        goto LABEL_14;
    }
    else if ( !v14[1] )
    {
      goto LABEL_29;
    }
    if ( v7 == 88 )
    {
      v7 = *(unsigned __int8 *)++v14;
      v25 = v7 == 110;
      if ( v7 != 110 )
        v25 = v7 == 98;
      if ( v25 )
      {
        do
        {
          v26 = *(unsigned __int8 *)++v14;
          v7 = v26;
          v27 = v26 == 98;
          if ( v26 != 98 )
            v27 = v7 == 110;
        }
        while ( v27 );
      }
    }
    if ( v7 != 83 )
    {
      v30 = v8;
      if ( v7 != 68 )
        goto LABEL_55;
      v39 = *((unsigned __int8 *)v14 + 1);
      if ( v39 == 65 )
      {
        v40 = ".Adjust";
      }
      else
      {
        if ( v39 != 70 )
          goto LABEL_14;
        v40 = ".Finalize";
      }
      strcpy(v8, v40);
      v8 += strlen(v40);
LABEL_29:
      *v8 = 0;
      return v3;
    }
    if ( !v14[1] )
      goto LABEL_14;
    v7 = *((unsigned __int8 *)v14 + 2);
    v24 = v7 == 0;
    if ( v14[2] )
      v24 = v7 == 95;
    if ( !v24 )
      goto LABEL_14;
    switch ( v14[1] )
    {
      case 'I':
        v29 = "'Input";
        break;
      case 'O':
        v29 = "'Output";
        break;
      case 'R':
        v29 = "'Read";
        break;
      case 'W':
        v29 = "'Write";
        break;
      default:
        goto LABEL_14;
    }
    strcpy(v8, v29);
    v14 += 2;
    v30 = &v8[strlen(v29)];
LABEL_55:
    if ( v7 != 95 )
    {
      v23 = v30;
      goto LABEL_90;
    }
    v31 = *((unsigned __int8 *)v14 + 1);
    if ( v31 != 95 )
    {
      v46 = v31 == 69;
      if ( v31 != 69 )
        v46 = v31 == 66;
      if ( !v46 )
        goto LABEL_14;
      v47 = *((unsigned __int8 *)v14 + 2);
      v48 = v14 + 2;
      if ( (*(_WORD *)(v2 + 2 * v47) & 4) != 0 )
      {
        do
        {
          v49 = (unsigned __int8)*++v48;
          v47 = v49;
        }
        while ( (*(_WORD *)(v2 + 2 * v49) & 4) != 0 );
      }
      if ( v47 != 115 || v48[1] )
        goto LABEL_14;
      v8 = v30;
      goto LABEL_29;
    }
    v7 = *((unsigned __int8 *)v14 + 2);
    v4 = v14 + 2;
    v9 = *(_WORD *)(v2 + 2 * v7);
    v32 = v9 & 4;
    if ( v32 )
      break;
    if ( v7 == 95 && v14[3] != 95 )
    {
      v33 = "_elabb";
      v34 = v30;
      for ( j = 6; strncmp(v4, v33, j); j = strlen(off_432E40[2 * v32]) )
      {
        ++v32;
        v33 = off_432E40[2 * v32];
        if ( !v33 )
          goto LABEL_14;
      }
      v36 = off_432950[2 * v32 + 317];
      v37 = strlen(v36);
      v38 = &v34[v37];
      memcpy(v34, v36, v37);
      *v38 = 0;
      return v3;
    }
    v8 = v30 + 1;
    *v30 = 46;
  }
  v23 = v30;
  while ( 1 )
  {
    v7 = *((unsigned __int8 *)v4 + 1);
    v14 = v4 + 1;
    if ( (*(_WORD *)(v2 + 2 * v7) & 4) != 0 )
      goto LABEL_79;
    if ( v7 != 95 )
      break;
    if ( (*(_WORD *)(v2 + 2 * *((unsigned __int8 *)v4 + 2)) & 4) == 0 )
      goto LABEL_14;
LABEL_79:
    ++v4;
  }
  if ( v7 == 88 )
  {
    v7 = *((unsigned __int8 *)v4 + 2);
    v14 = v4 + 2;
    v41 = v7 == 98;
    if ( v7 != 98 )
      v41 = v7 == 110;
    if ( v41 )
    {
      do
      {
        v42 = *(unsigned __int8 *)++v14;
        v7 = v42;
        v43 = v42 == 98;
        if ( v42 != 98 )
          v43 = v7 == 110;
      }
      while ( v43 );
    }
  }
LABEL_90:
  if ( v7 != 46 )
  {
LABEL_28:
    v8 = v23;
    if ( v7 )
      goto LABEL_14;
    goto LABEL_29;
  }
  if ( (*(_WORD *)(v2 + 2 * *((unsigned __int8 *)v14 + 1)) & 4) != 0 )
  {
    v7 = *((unsigned __int8 *)v14 + 2);
    v44 = v14 + 2;
    if ( (*(_WORD *)(v2 + 2 * v7) & 4) != 0 )
    {
      do
      {
        v45 = (unsigned __int8)*++v44;
        v7 = v45;
      }
      while ( (*(_WORD *)(v2 + 2 * v45) & 4) != 0 );
    }
    goto LABEL_28;
  }
LABEL_14:
  free(v3);
  v18 = strlen(v1);
  v19 = (char *)sub_93028(v18 + 3);
  v3 = v19;
  if ( *v1 == 60 )
    strcpy(v19, v1);
  else
    sprintf(v19, "<%s>", v1);
  return v3;
}
