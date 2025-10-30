int __fastcall sub_27897C(int a1, int a2)
{
  const char *v3; // r6
  int i; // r4
  const char *v5; // r0

  if ( *(_BYTE *)a2 != 95 || *(_BYTE *)(a2 + 1) != 95 )
    sub_946E0("Invalid register name \"%s\".", (const char *)a2);
  v3 = (const char *)(a2 + 2);
  for ( i = 0; ; ++i )
  {
    if ( i >= ((int (__fastcall *)(int))loc_166E9C)(a1) )
      sub_946E0("Cannot find gdbarch register \"%s\".", v3);
    v5 = (const char *)((int (__fastcall *)(int, int))loc_1677C0)(a1, i);
    if ( !strcmp(v3, v5) )
      break;
  }
  return i;
}
