bool __fastcall sub_2CCB00(int a1, int *a2, char *s, int a4)
{
  size_t v8; // r0
  char *v9; // r0
  char *v10; // r4
  const char *v11; // r2
  int v12; // r0

  v8 = strlen(s);
  v9 = (char *)sub_2ACBF4(a1, v8 + 6);
  v10 = v9;
  if ( !v9 )
    return 0;
  v11 = ".rel";
  if ( a4 )
    v11 = ".rela";
  sprintf(v9, "%s%s", v11, s);
  v12 = sub_2F0184(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 160) + 2348) + 4), v10, 0);
  *a2 = v12;
  return v12 != -1;
}
