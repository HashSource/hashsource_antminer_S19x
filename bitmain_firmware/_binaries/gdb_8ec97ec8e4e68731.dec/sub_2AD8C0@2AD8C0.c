char *__fastcall sub_2AD8C0(int a1, const char *a2, int (__fastcall *a3)(int, char *, int), int a4)
{
  char *v8; // r0
  char *v9; // r4
  int v10; // r5
  int i; // r3

  v8 = sub_2AAC2C((_DWORD *)(a1 + 72), a2, 0, 0);
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = *((_DWORD *)v8 + 2);
  for ( i = v10; i != v10 || strcmp(*((const char **)v9 + 1), a2) || !a3(a1, v9 + 16, a4); i = *((_DWORD *)v9 + 2) )
  {
    v9 = *(char **)v9;
    if ( !v9 )
      return 0;
  }
  return v9 + 16;
}
