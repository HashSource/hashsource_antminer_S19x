int __fastcall sub_83F7C(_BYTE *a1, unsigned int a2, char *s, const char *a4)
{
  unsigned int v5; // r4
  size_t v9; // r0
  bool v10; // cc
  int v11; // r6
  int v12; // r1
  char *v13; // r2
  _BYTE *v14; // r0
  int v15; // t1
  const char *v16; // r0
  char *v17; // r4
  size_t v18; // r0
  unsigned int v20; // r1
  const char *v21; // r9
  _BYTE *v22; // r12
  unsigned int v23; // t1
  char *v24; // r0
  const char *v25; // r11
  size_t v26; // r10
  char *v27; // r10
  const char *v28; // r11
  char *v29; // r0
  char *v30; // r0
  int v31; // [sp+8h] [bp-14h]
  char *v32; // [sp+Ch] [bp-10h]

  v5 = a2;
  v9 = strlen(s);
  v10 = v9 != 0;
  if ( v9 )
    v10 = v5 > v9;
  v11 = !v10;
  if ( !v10 )
    return 0;
  v12 = (unsigned __int8)*s;
  if ( v12 == 36 )
  {
    v20 = (unsigned __int8)s[1];
    if ( v20 == 36 )
    {
      if ( s[2] )
      {
        if ( s[2] != 47 )
          return v11;
        v31 = 3;
      }
      else
      {
        v31 = 2;
      }
      if ( strchr(a4, 47) )
      {
        v27 = (char *)a4;
      }
      else
      {
        v29 = getenv("PATH");
        v30 = sub_7F9CC(v29, a4);
        v27 = v30;
        if ( !v30 )
          return 0;
      }
      v32 = strrchr(v27, 47);
      if ( !v32 )
        return 0;
      v28 = &s[v31];
      if ( v5 <= strlen(v28) + v32 - v27 + 1 )
        return 0;
      memcpy(a1, v27, v32 - v27 + 1);
      strcpy(&a1[v32 - v27 + 1], v28);
      if ( a4 != v27 )
        free(v27);
    }
    else if ( v20 == 64 )
    {
      if ( !*off_B8604 || (int)sub_6C054((int)a1, v5, "%s%s", off_B8604, s + 2) >= (int)v5 )
        return 0;
    }
    else
    {
      if ( !s[1] )
        return v11;
      v21 = s + 1;
      if ( v20 > 0x7F || (dword_9F184[v20] & 0x3B0060) == 0 )
        return 0;
      v22 = a1;
      do
      {
        *v22++ = v20;
        v23 = *(unsigned __int8 *)++v21;
        v20 = v23;
      }
      while ( v23 <= 0x7F && (dword_9F184[v20] & 0x3B0060) != 0 );
      if ( a1 == v22 )
        return 0;
      *v22 = 0;
      v24 = getenv(a1);
      v25 = v24;
      if ( !v24 )
        return 0;
      v26 = strlen(v24);
      if ( v5 <= v26 + strlen(v21) + 1 )
        return 0;
      sprintf(a1, "%s%s", v25, v21);
    }
  }
  else
  {
    v13 = s;
    v14 = a1;
    while ( 1 )
    {
      *v14++ = v12;
      if ( !v12 )
        break;
      if ( (int)--v5 <= 0 )
        return 0;
      v15 = (unsigned __int8)*++v13;
      v12 = v15;
    }
  }
  v16 = (const char *)canonicalize_file_name(a1);
  v17 = (char *)v16;
  if ( !v16 )
    return 0;
  v18 = strlen(v16);
  if ( a2 > v18 )
  {
    v11 = 1;
    memcpy(a1, v17, v18 + 1);
  }
  free(v17);
  return v11;
}
