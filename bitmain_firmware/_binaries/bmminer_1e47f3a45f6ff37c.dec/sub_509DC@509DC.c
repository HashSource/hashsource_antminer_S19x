unsigned __int8 *__fastcall sub_509DC(const char **a1)
{
  unsigned int v2; // r0
  bool v3; // cc
  int v4; // r3
  const char *v5; // r2
  const char *v6; // r12
  bool v7; // zf
  int v8; // r1
  int v9; // t1
  unsigned __int8 *result; // r0
  const char *v11; // r1
  int v12; // r2
  const char *v13; // r12
  int v14; // r2
  bool v15; // zf
  int v16; // [sp+Ch] [bp-8h] BYREF

  v2 = (unsigned int)a1[1];
  v3 = v2 > 4;
  if ( v2 != 4 )
    v3 = v2 - 1 > 1;
  v4 = v3;
  if ( v3 )
    errx(1, "Option %s: unknown entry type %u", *a1, v2);
  if ( !a1[6] )
    errx(1, "Option %s: description cannot be NULL", *a1);
  v5 = *a1;
  if ( **a1 != 45 )
    errx(1, "Option %s: does not begin with '-'", v5);
  v6 = *a1;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)++v6;
    v8 = v9;
    if ( (v9 & 0xDF) == 0 )
      break;
    v7 = v8 == 124;
    if ( v8 != 124 )
      v7 = v8 == 61;
    if ( v7 )
      break;
    ++v4;
  }
  result = (unsigned __int8 *)(v5 + 1);
  v16 = v4;
  if ( v5 != (const char *)-1 )
  {
    while ( 1 )
    {
      if ( *result == 45 )
      {
        if ( v4 == 1 )
          errx(1, "Option %s: invalid long option '--'", *a1);
        v13 = a1[1];
        ++dword_9CD90C;
      }
      else
      {
        if ( v4 != 1 )
          errx(1, "Option %s: invalid short option '%.*s'", *a1, v4 + 1, (const char *)result - 1);
        v11 = a1[1];
        v12 = ++dword_9CD910;
        if ( ((unsigned int)(v11 - 2) & 0xFFFFFFFD) == 0 )
          v12 = dword_9CD908;
        v13 = v11;
        if ( ((unsigned int)(v11 - 2) & 0xFFFFFFFD) == 0 )
          dword_9CD908 = v12 + 1;
      }
      if ( v13 == (const char *)1 )
      {
        v14 = result[v4];
        v15 = v14 == 32;
        if ( v14 != 32 )
          v15 = v14 == 61;
        if ( v15 )
          errx(1, "Option %s: does not take arguments '%s'", *a1, (const char *)&result[v4 + 1]);
      }
      result = sub_507EC((int)result, &v16);
      if ( !result )
        break;
      v4 = v16;
    }
  }
  return result;
}
