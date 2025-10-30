int __fastcall sub_854CC(_BYTE *a1, unsigned int a2, char *s, const char *a4)
{
  size_t v8; // r0
  bool v9; // cc
  int v10; // r6
  int v11; // r3
  unsigned int v12; // r8
  char *v13; // r2
  _BYTE *v14; // r1
  int v15; // t1
  const char *v16; // r0
  char *v17; // r4
  size_t v18; // r0
  unsigned int v20; // r1
  const char *v21; // r9
  _BYTE *v22; // r0
  unsigned int v23; // t1
  char *v24; // r0
  const char *v25; // r11
  size_t v26; // r10
  char *v27; // r10
  char *v28; // r0
  int v29; // r11
  char *v30; // r0
  char *v31; // r0
  int src; // [sp+Ch] [bp-10h]
  char *srca; // [sp+Ch] [bp-10h]

  v8 = strlen(s);
  v9 = v8 != 0;
  if ( v8 )
    v9 = a2 > v8;
  v10 = !v9;
  if ( !v9 )
    return 0;
  v11 = (unsigned __int8)*s;
  v12 = a2;
  if ( v11 == 36 )
  {
    v20 = (unsigned __int8)s[1];
    if ( v20 == 36 )
    {
      if ( s[2] )
      {
        if ( s[2] != 47 )
          return v10;
        src = 3;
      }
      else
      {
        src = 2;
      }
      if ( strchr(a4, 47) )
      {
        v27 = (char *)a4;
      }
      else
      {
        v30 = getenv("PATH");
        v31 = sub_80E8C(v30, a4);
        v27 = v31;
        if ( !v31 )
          return v10;
      }
      v28 = strrchr(v27, 47);
      if ( !v28 )
        return v10;
      srca = &s[src];
      v29 = v28 - v27 + 1;
      if ( a2 <= strlen(srca) + v29 )
        return v10;
      memcpy(a1, v27, v29);
      strcpy(&a1[v29], srca);
      if ( a4 != v27 )
        free(v27);
    }
    else if ( v20 == 64 )
    {
      if ( !*off_B928C || (int)a2 <= (int)sub_6D00C((int)a1, a2, "%s%s", off_B928C, s + 2) )
        return 0;
    }
    else
    {
      if ( !s[1] || v20 > 0x7F || (dword_A0784[v20] & 0x3B0060) == 0 )
        return v10;
      v21 = s + 1;
      v22 = a1;
      do
      {
        *v22++ = v20;
        v23 = *(unsigned __int8 *)++v21;
        v20 = v23;
      }
      while ( v23 <= 0x7F && (dword_A0784[v20] & 0x3B0060) != 0 );
      if ( a1 == v22 )
        return v10;
      *v22 = 0;
      v24 = getenv(a1);
      v25 = v24;
      if ( !v24 )
        return v10;
      v26 = strlen(v24);
      if ( a2 <= v26 + strlen(v21) + 1 )
        return v10;
      sprintf(a1, "%s%s", v25, v21);
    }
  }
  else
  {
    v13 = s;
    v14 = a1;
    while ( 1 )
    {
      *v14++ = v11;
      if ( !v11 )
        break;
      if ( (int)--a2 <= 0 )
        return 0;
      v15 = (unsigned __int8)*++v13;
      v11 = v15;
    }
  }
  v16 = (const char *)canonicalize_file_name(a1);
  v17 = (char *)v16;
  if ( !v16 )
    return 0;
  v18 = strlen(v16);
  if ( v12 > v18 )
  {
    v10 = 1;
    memcpy(a1, v17, v18 + 1);
  }
  free(v17);
  return v10;
}
