const char ***__fastcall sub_21278C(const char ***a1, const char *a2)
{
  void *v4; // r6
  void *v5; // r8
  char *v6; // r0
  int v7; // r7
  bool v8; // zf
  const char **v9; // r0
  int v11; // r0
  const char *v12; // r0
  int v13; // r0
  const char *v14; // r0
  const char *v15; // [sp+Ch] [bp-4h] BYREF

  v4 = sub_9253C((int)nullsub_39, 0);
  if ( sub_162564(a2) )
  {
    v7 = -1;
  }
  else
  {
    v5 = (void *)sub_29B910(a2);
    v6 = getenv("PATH");
    v7 = ((int (__fastcall *)(char *, int, void *, _DWORD, const char **))loc_203AE4)(v6, 5, v5, 0, &v15);
    if ( v7 < 0 )
      sub_258B04(v5);
    sub_9253C((int)sub_210BE8, (int)v15);
    a2 = v15;
    if ( v5 )
      free(v5);
  }
  ((void (__fastcall *)(const char ***, const char *, int, int))loc_16298C)(a1, a2, dword_47ACA8, v7);
  if ( !*a1 )
  {
    v13 = sub_2A6910(0);
    v14 = (const char *)sub_2A6920(v13);
    sub_946E0("`%s': can't open to read symbols: %s.", a2, v14);
  }
  v8 = !sub_162584(*a1);
  v9 = *a1;
  if ( v8 )
    *((_BYTE *)v9 + 43) |= 2u;
  if ( !sub_2AA86C(v9, 1) )
  {
    v11 = sub_2A6910(0);
    v12 = (const char *)sub_2A6920(v11);
    sub_946E0("`%s': can't read symbols: %s.", a2, v12);
  }
  sub_92620(v4);
  return a1;
}
