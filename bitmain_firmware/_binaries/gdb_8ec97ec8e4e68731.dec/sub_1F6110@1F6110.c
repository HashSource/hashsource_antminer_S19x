int __fastcall sub_1F6110(const char **a1, _DWORD *a2, _DWORD *a3)
{
  const char *v4; // r0
  char *v7; // r0
  const char *v8; // r5
  int result; // r0
  __int64 v10; // [sp+0h] [bp-Ch] BYREF

  v4 = *a1;
  if ( !v4 )
    return -1;
  if ( !*v4 )
    return -1;
  v7 = strchr(v4, 47);
  if ( !v7 )
    return -1;
  *v7 = 0;
  v8 = v7 + 1;
  if ( sub_1F5F94(a1, &v10) )
    return -1;
  *a2 = v10;
  *a1 = v8;
  result = sub_1F5F94(a1, &v10);
  if ( result )
    return -1;
  *a3 = v10;
  return result;
}
