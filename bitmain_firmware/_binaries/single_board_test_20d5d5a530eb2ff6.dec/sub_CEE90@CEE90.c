int __fastcall sub_CEE90(int a1, char *s, size_t a3)
{
  int (__fastcall *v3)(int, _DWORD, int *); // r4
  size_t v6; // r7
  int v7; // r9
  int v8; // r4
  int v9; // r3
  int v10; // r5
  int v12; // [sp+0h] [bp-Ch] BYREF
  int v13; // [sp+4h] [bp-8h] BYREF

  v3 = *(int (__fastcall **)(int, _DWORD, int *))(a1 + 40);
  if ( !v3 )
    return 0;
  v6 = a3;
  if ( a3 == -1 )
    v6 = strlen(s);
  v7 = v3(a1, 0, &v12);
  if ( v7 <= 0 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = *(_DWORD *)(v12 + 4 * v8++);
    (*(void (__fastcall **)(int, int *, _DWORD, int))(a1 + 40))(a1, &v13, 0, v9);
    v10 = v13;
    if ( v13 )
    {
      if ( v6 == strlen(*(const char **)(v13 + 12)) && !strncasecmp(*(const char **)(v13 + 12), s, v6) )
        break;
    }
    if ( v7 == v8 )
      return 0;
  }
  return v10;
}
