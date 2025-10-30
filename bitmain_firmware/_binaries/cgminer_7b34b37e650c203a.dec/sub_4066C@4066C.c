int __fastcall sub_4066C(const char **a1)
{
  __int64 v1; // r2
  bool v2; // cc
  _BYTE *v4; // r4
  int v5; // r0
  const char *v6; // r12
  unsigned int v7; // r3
  int v8; // r3
  bool v9; // zf
  int result; // r0
  int status; // [sp+Ch] [bp-4h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = (unsigned int)a1[1] > 4;
  if ( a1[1] != (const char *)4 )
    v2 = (unsigned int)(a1[1] - 1) > 1;
  if ( v2 )
    errx(1, "Option %s: unknown entry type %u", (const char *)v1, HIDWORD(v1));
  if ( !a1[6] )
    errx(1, "Option %s: description cannot be NULL", (const char *)v1);
  if ( *(_BYTE *)v1 != 45 )
    errx(1, "Option %s: does not begin with '-'", (const char *)v1);
  v4 = (_BYTE *)(v1 + 1);
  v5 = strcspn((const char *)(v1 + 1), "|= ");
  for ( status = v5; ; v5 = status )
  {
    if ( *v4 == 45 )
    {
      if ( v5 == 1 )
        errx(1, "Option %s: invalid long option '--'", *a1);
      v6 = a1[1];
      ++dword_7685C;
    }
    else
    {
      if ( v5 != 1 )
        errx(1, "Option %s: invalid short option '%.*s'", *a1, v5 + 1, v4 - 1);
      v6 = a1[1];
      v7 = (unsigned int)(v6 - 2) & 0xFFFFFFFD;
      if ( !v7 )
        v7 = dword_76858;
      ++dword_76860;
      if ( ((unsigned int)(v6 - 2) & 0xFFFFFFFD) == 0 )
        dword_76858 = v7 + 1;
    }
    if ( v6 == (const char *)1 )
    {
      v8 = (unsigned __int8)v4[v5];
      v9 = v8 == 61;
      if ( v8 != 61 )
        v9 = v8 == 32;
      if ( v9 )
        errx(1, "Option %s: does not take arguments '%s'", *a1, &v4[v5 + 1]);
    }
    result = sub_4056C((int)v4, (size_t *)&status);
    v4 = (_BYTE *)result;
    if ( !result )
      break;
  }
  return result;
}
