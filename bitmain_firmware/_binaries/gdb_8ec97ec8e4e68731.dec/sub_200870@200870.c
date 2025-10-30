const char ***__fastcall sub_200870(const char ***a1, char *a2, int a3)
{
  _BOOL4 v5; // r0
  const char **v6; // r3
  void *v8; // r0
  int v9; // r0
  const char *v10; // r0

  ((void (__fastcall *)(const char ***, char *, int, int))loc_16298C)(a1, a2, dword_47ACA8, a3);
  if ( !*a1 )
    goto LABEL_8;
  v5 = sub_162584(*a1);
  v6 = *a1;
  if ( v5 )
  {
    if ( v6 )
      goto LABEL_4;
LABEL_8:
    v8 = sub_9253C((int)sub_1FFD3C, (int)a2);
    v9 = sub_2A6910(v8);
    v10 = (const char *)sub_2A6920(v9);
    sub_946E0("Could not open `%s' as an executable file: %s", a2, v10);
  }
  *((_BYTE *)v6 + 43) |= 2u;
LABEL_4:
  if ( a2 )
    free(a2);
  return a1;
}
