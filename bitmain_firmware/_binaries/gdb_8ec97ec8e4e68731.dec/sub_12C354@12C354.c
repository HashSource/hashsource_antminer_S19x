char *__fastcall sub_12C354(const char ***a1, char **a2, _BYTE *a3, _DWORD *a4)
{
  char *v7; // r0
  char *v8; // r6
  int v9; // r9
  const char *v10; // r0

  v7 = sub_127FB8(a1, a2, a3, a4, 0);
  v8 = v7;
  if ( dword_487310 )
  {
    v9 = *(_DWORD *)sub_242FC8(v7);
    v10 = (const char *)((int (__fastcall *)(const char **))loc_11E0F8)(a1[3]);
    sub_2594B0(v9, "Read die from %s@0x%x of %s:\n", v10, a3 - a1[3][1], **a1);
    sub_12C260((int)*a2);
  }
  return v8;
}
