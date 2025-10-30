int sub_215F80()
{
  const char *v0; // r6
  int v1; // r0
  _BYTE *v2; // r4
  char *v3; // r0
  const char *v4; // r0
  int v5; // r4
  const char *v6; // r6
  int result; // r0
  int v8; // [sp+0h] [bp-8h] BYREF
  const char *v9; // [sp+4h] [bp-4h] BYREF

  v0 = (const char *)dword_4896E8;
  v1 = *(unsigned __int8 *)dword_4896E8;
  if ( v1 != 46 )
    sub_946E0("'%s': Filename extension must begin with '.'", (const char *)dword_4896E8);
  v2 = (_BYTE *)dword_4896E8;
  while ( !isspace(v1) )
  {
    v1 = (unsigned __int8)*++v2;
    if ( !v1 )
      sub_946E0("'%s': two arguments required -- filename extension and language", v0);
  }
  *v2 = 0;
  v3 = sub_935D0(v2 + 1);
  if ( !*v3 )
    sub_946E0("'%s': two arguments required -- filename extension and language", (const char *)dword_4896E8);
  v4 = sub_1943DC(v3);
  v5 = dword_4896A4;
  v6 = v4;
  if ( dword_4896A4 == dword_4896A8 )
    goto LABEL_14;
  while ( 1 )
  {
    result = sub_33CAA0(v5, (char *)dword_4896E8);
    if ( !result )
      break;
    v5 += 28;
    if ( dword_4896A8 == v5 )
      goto LABEL_14;
  }
  if ( dword_4896A8 == v5 )
  {
LABEL_14:
    v9 = v6;
    v8 = dword_4896E8;
    return ((int (__fastcall *)(int *, int *, const char **, int))sub_216684)(&dword_4896A4, &v8, &v9, dword_4896E8);
  }
  else
  {
    *(_DWORD *)(v5 + 24) = v6;
  }
  return result;
}
