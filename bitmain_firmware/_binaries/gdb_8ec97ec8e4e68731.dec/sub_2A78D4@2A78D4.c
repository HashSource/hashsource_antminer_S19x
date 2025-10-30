int __fastcall sub_2A78D4(int a1)
{
  int v1; // r3
  const char *v2; // r4
  int result; // r0

  v1 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(v1 + 4) == 5 )
    return *(_BYTE *)(*(_DWORD *)(v1 + 444) + 465) & 1;
  v2 = *(const char **)v1;
  if ( !strncmp(*(const char **)v1, "coff-go32", 9u)
    || !strcmp(v2, "pe-i386")
    || !strcmp(v2, "pei-i386")
    || !strcmp(v2, "pe-x86-64")
    || !strcmp(v2, "pei-x86-64")
    || !strcmp(v2, "pe-arm-wince-little")
    || !strcmp(v2, "pei-arm-wince-little")
    || !strcmp(v2, "aixcoff-rs6000")
    || !strcmp(v2, "aix5coff64-rs6000") )
  {
    return 1;
  }
  result = strncmp(v2, "mach-o", 6u);
  if ( result )
  {
    result = -1;
    dword_48BBD0 = 3;
  }
  return result;
}
