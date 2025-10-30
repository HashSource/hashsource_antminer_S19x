int __fastcall sub_170360(int a1, char *s1)
{
  int v5; // [sp+4h] [bp-8h] BYREF

  if ( !strcmp(s1, "code") )
    return 4;
  if ( !strcmp(s1, "data") )
    return 8;
  if ( !((int (__fastcall *)(int))loc_16AE7C)(a1) || !((int (__fastcall *)(int, char *, int *))loc_16AEC8)(a1, s1, &v5) )
    sub_946E0("Unknown address space specifier: \"%s\"", s1);
  return v5;
}
