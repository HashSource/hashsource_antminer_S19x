char *__fastcall sub_514A0(const char *a1, char *a2)
{
  size_t v2; // r4
  unsigned int v3; // r9
  size_t v4; // r4
  int v5; // r11
  int v6; // r11
  unsigned int v7; // r8
  const char *v8; // r6
  size_t v9; // r4
  size_t v10; // r0
  size_t v11; // r4
  size_t v12; // r5
  size_t v13; // r0
  char *v14; // r0
  char *v15; // r4
  int v16; // r0
  char *v17; // r1
  char *v18; // r4
  char *v19; // r5
  unsigned __int8 *v20; // r2
  int v21; // r8
  int v22; // r0
  bool v23; // zf
  char *v24; // r5
  int v25; // r6
  unsigned int v26; // r8
  unsigned int v27; // r4
  int v28; // r2
  unsigned int v29; // r4
  unsigned int v30; // r4
  int v31; // r3
  const char *v32; // r2
  char *v33; // r2
  int v35; // r2
  int v36; // r3
  size_t v37; // r4
  char *s; // [sp+4h] [bp-68h]
  char *v40; // [sp+8h] [bp-64h]
  char *v41; // [sp+Ch] [bp-60h]
  unsigned int v42[22]; // [sp+14h] [bp-58h] BYREF

  s = a2;
  if ( a2 )
  {
    v2 = strlen(a1);
    v3 = dword_9CD91C;
    v4 = dword_9CD910 + 20 + v2 + strlen(s);
    if ( !dword_9CD91C )
      goto LABEL_13;
    v5 = dword_9CD914;
  }
  else
  {
    v3 = dword_9CD91C;
    if ( !dword_9CD91C )
    {
      s = "";
      v4 = dword_9CD910 + 20 + strlen(a1);
      goto LABEL_13;
    }
    v35 = 0;
    v5 = dword_9CD914;
    v36 = dword_9CD914;
    do
    {
      ++v35;
      if ( *(void (__fastcall __noreturn **)(int))(v36 + 8) == sub_50684 && *(_DWORD *)(v36 + 20) )
      {
        s = *(char **)(v36 + 20);
        v37 = strlen(s);
        goto LABEL_46;
      }
      v36 += 28;
    }
    while ( v35 != dword_9CD91C );
    v37 = 0;
    s = "";
LABEL_46:
    v4 = dword_9CD910 + 20 + v37 + strlen(a1);
  }
  v6 = v5 + 4;
  v7 = 0;
  do
  {
    while ( 1 )
    {
      v12 = v4 + 6;
      if ( *(_DWORD *)v6 != 8 )
        break;
      ++v7;
      v13 = strlen(*(const char **)(v6 + 20));
      v6 += 28;
      v4 += 3 + v13;
      if ( v7 >= v3 )
        goto LABEL_13;
    }
    v8 = *(const char **)(v6 + 20);
    if ( v8 != (const char *)&unk_9CD920 )
    {
      v9 = strlen(*(const char **)(v6 - 4));
      v10 = v12 + v9 + strlen(v8);
      if ( *(_DWORD *)(v6 + 12) )
        v11 = v10 + 118;
      else
        v11 = v10 + 21;
      v4 = v11 + 1;
    }
    ++v7;
    v6 += 28;
  }
  while ( v7 < v3 );
LABEL_13:
  v14 = (char *)malloc(v4);
  v41 = v14;
  v15 = v14;
  if ( v14 )
  {
    v16 = sprintf(v14, "Usage: %s", a1);
    v17 = v15;
    v18 = &v15[v16];
    v19 = v18 + 3;
    *(_DWORD *)&v17[v16] = &unk_2D5B20;
    v20 = sub_50CA0(v42);
    if ( v20 )
    {
      v21 = 0;
      do
      {
        if ( *(_UNKNOWN **)(dword_9CD914 + 28 * v42[0] + 24) != &unk_9CD920 )
          v19[v21++] = *v20;
        v20 = sub_50D00((int)v20, v42);
      }
      while ( v20 );
      if ( v21 )
      {
        v18 = &v19[v21 + 1];
        *(_WORD *)&v19[v21] = 93;
      }
    }
    v22 = sprintf(v18, " %s", s);
    v23 = dword_9CD91C == 0;
    strcpy(&v18[v22], "\n");
    v24 = &v18[v22 + 1];
    if ( !v23 )
    {
      v25 = 0;
      v26 = 0;
      do
      {
        v31 = dword_9CD914 + v25;
        v32 = *(const char **)(dword_9CD914 + v25 + 24);
        if ( v32 != (const char *)&unk_9CD920 )
        {
          if ( *(_DWORD *)(v31 + 4) == 8 )
          {
            v24 += sprintf(v24, "%s:\n", v32);
          }
          else
          {
            v27 = sprintf(v24, "%s", *(const char **)v31);
            if ( *(_DWORD *)(dword_9CD914 + v25 + 4) == 2 )
            {
              v40 = *(char **)(dword_9CD914 + v25);
              if ( !strchr(v40, 32) && !strchr(v40, 61) )
              {
                v33 = &v24[v27];
                *(_DWORD *)&v24[v27] = *(_DWORD *)" <arg>";
                v27 += 6;
                strcpy(v33 + 4, "g>");
              }
            }
            if ( v27 > 0x13 )
              v28 = 1;
            else
              v28 = 20 - v27;
            v29 = sprintf(&v24[v27], "%.*s", v28, "                    ") + v27;
            v30 = v29 + sprintf(&v24[v29], "%s", *(const char **)(dword_9CD914 + v25 + 24));
            if ( *(_DWORD *)(dword_9CD914 + v25 + 16) )
            {
              v42[20] = 3026478;
              (*(void (__fastcall **)(unsigned int *, _DWORD))(dword_9CD914 + v25 + 16))(
                v42,
                *(_DWORD *)(dword_9CD914 + v25 + 20));
              v30 += sprintf(&v24[v30], " (default: %s)", (const char *)v42);
            }
            strcpy(&v24[v30], "\n");
            v24 += v30 + 1;
          }
        }
        ++v26;
        v25 += 28;
      }
      while ( dword_9CD91C > v26 );
    }
    *v24 = 0;
  }
  return v41;
}
