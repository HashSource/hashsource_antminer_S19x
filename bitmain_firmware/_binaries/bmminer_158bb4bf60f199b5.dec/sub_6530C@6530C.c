char *__fastcall sub_6530C(const char *a1, const char *a2)
{
  size_t v3; // r7
  int v4; // r4
  unsigned int v5; // r8
  size_t v6; // r7
  size_t v7; // r0
  size_t v8; // r7
  size_t v9; // r5
  const char *v10; // r11
  char *v11; // r0
  char *v12; // r4
  int v13; // r0
  char *v14; // r1
  char *v15; // r4
  char *v16; // r7
  char *v17; // r12
  int v18; // r8
  int v19; // r0
  int v20; // r2
  char *v21; // r5
  int v22; // r7
  unsigned int v23; // r8
  int v24; // r2
  unsigned int v25; // r4
  unsigned int v26; // r4
  char *v27; // r3
  int v28; // r3
  const char *v29; // r2
  int v30; // r0
  unsigned int v31; // r4
  char *v32; // r3
  char *v33; // r0
  char *v34; // r0
  int v36; // r2
  int v37; // r3
  __int16 *v39; // [sp+0h] [bp-74h]
  const char *v40; // [sp+4h] [bp-70h]
  char *s; // [sp+8h] [bp-6Ch]
  char *v42; // [sp+10h] [bp-64h]
  char *v43; // [sp+14h] [bp-60h]
  unsigned int v44[22]; // [sp+1Ch] [bp-58h] BYREF

  v3 = dword_2463E0 + 20 + strlen(a1);
  if ( a2 )
  {
    v3 += strlen(a2);
    if ( !dword_2463EC )
      goto LABEL_13;
    v4 = dword_2463E4;
  }
  else
  {
    if ( !dword_2463EC )
    {
      a2 = "";
      goto LABEL_13;
    }
    v36 = 0;
    v4 = dword_2463E4;
    v37 = dword_2463E4;
    do
    {
      ++v36;
      if ( *(void (__fastcall __noreturn **)(int))(v37 + 8) == sub_6458C )
      {
        a2 = *(const char **)(v37 + 20);
        if ( a2 )
        {
          v3 += strlen(*(const char **)(v37 + 20));
          goto LABEL_4;
        }
      }
      v37 += 28;
    }
    while ( v36 != dword_2463EC );
    a2 = "";
  }
LABEL_4:
  v5 = 0;
  v40 = a2;
  do
  {
    while ( 1 )
    {
      v9 = v3 + 6;
      v10 = *(const char **)(v4 + 24);
      if ( *(_DWORD *)(v4 + 4) != 8 )
        break;
      ++v5;
      v3 += strlen(*(const char **)(v4 + 24)) + 3;
      v4 += 28;
      if ( v5 >= dword_2463EC )
        goto LABEL_12;
    }
    if ( v10 != (const char *)&unk_2463F0 )
    {
      v6 = strlen(*(const char **)v4);
      v7 = v6 + v9 + strlen(v10);
      v8 = v7 + 118;
      if ( !*(_DWORD *)(v4 + 16) )
        v8 = v7 + 21;
      v3 = v8 + 1;
    }
    ++v5;
    v4 += 28;
  }
  while ( v5 < dword_2463EC );
LABEL_12:
  a2 = v40;
LABEL_13:
  v11 = (char *)malloc(v3);
  v12 = v11;
  v43 = v11;
  if ( v11 )
  {
    v13 = sprintf(v11, "Usage: %s", a1);
    v14 = v12;
    v15 = &v12[v13];
    v16 = v15 + 3;
    strcpy(&v14[v13], " [-");
    v17 = (char *)sub_64B18(v44);
    if ( v17 )
    {
      v18 = 0;
      do
      {
        if ( *(_UNKNOWN **)(dword_2463E4 + 28 * v44[0] + 24) != &unk_2463F0 )
          v16[v18++] = *v17;
        v17 = sub_64B78((int)v17, v44);
      }
      while ( v17 );
      if ( v18 )
      {
        v15 = &v16[v18 + 1];
        *(_WORD *)&v16[v18] = 93;
      }
    }
    v19 = sprintf(v15, " %s", a2);
    v20 = dword_2463EC;
    v39 = &word_8B454;
    v21 = &v15[v19 + 1];
    *(_WORD *)&v15[v19] = 10;
    if ( v20 )
    {
      v22 = 0;
      v23 = 0;
      do
      {
        v28 = dword_2463E4 + v22;
        v29 = *(const char **)(dword_2463E4 + v22 + 24);
        if ( v29 != (const char *)&unk_2463F0 )
        {
          if ( *(_DWORD *)(v28 + 4) == 8 )
          {
            v21 += sprintf(v21, "%s:\n", v29);
          }
          else
          {
            v30 = sprintf(v21, "%s", *(const char **)v28);
            v31 = v30;
            v32 = &v21[v30];
            if ( *(_DWORD *)(dword_2463E4 + v22 + 4) == 2 )
            {
              v42 = &v21[v30];
              s = *(char **)(dword_2463E4 + v22);
              v33 = strchr(s, 32);
              v32 = v42;
              if ( !v33 )
              {
                v34 = strchr(s, 61);
                v32 = v42;
                if ( !v34 )
                {
                  v31 += 6;
                  strcpy(v42, " <arg>");
                  v32 = &v21[v31];
                }
              }
            }
            if ( v31 > 0x13 )
              v24 = 1;
            else
              v24 = 20 - v31;
            v25 = sprintf(v32, "%.*s", v24, "                    ", v39) + v31;
            v26 = sprintf(&v21[v25], "%s", *(const char **)(dword_2463E4 + v22 + 24)) + v25;
            v27 = &v21[v26];
            if ( *(_DWORD *)(dword_2463E4 + v22 + 16) )
            {
              v44[20] = 3026478;
              (*(void (__fastcall **)(unsigned int *, _DWORD))(dword_2463E4 + v22 + 16))(
                v44,
                *(_DWORD *)(dword_2463E4 + v22 + 20));
              v27 = &v21[sprintf(&v21[v26], " (default: %s)", (const char *)v44) + v26];
            }
            *(_WORD *)v27 = *v39;
            v21 = v27 + 1;
          }
        }
        ++v23;
        v22 += 28;
      }
      while ( dword_2463EC > v23 );
    }
    *v21 = 0;
  }
  return v43;
}
