int __fastcall sub_19657C(int a1, unsigned int a2)
{
  unsigned int *v4; // r0
  unsigned int *v6; // r0
  unsigned int v7; // r2
  unsigned int v8; // r3

  v4 = (unsigned int *)sub_324030(*(_DWORD *)(a1 + 4), a2, 1);
  if ( !*v4 )
  {
    *v4 = a2;
    v6 = *(unsigned int **)a1;
    if ( !*(_DWORD *)a1 )
      goto LABEL_8;
    v7 = v6[1];
    v8 = *v6;
    if ( v7 == *v6 )
      goto LABEL_8;
    while ( v7 <= v8 )
    {
      v6 = (unsigned int *)sub_94700(
                             (int)"linespec.c",
                             3895,
                             "%s: Assertion `%s' failed.",
                             "symtab** VEC_symtab_ptr_quick_push(VEC_symtab_ptr*, symtab_ptr, const char*, unsigned int)",
                             "quick_push");
LABEL_8:
      v6 = sub_99FE0(v6, 1);
      v8 = *v6;
      v7 = v6[1];
      *(_DWORD *)a1 = v6;
    }
    *v6 = v8 + 1;
    v6[v8 + 2] = a2;
  }
  return 0;
}
