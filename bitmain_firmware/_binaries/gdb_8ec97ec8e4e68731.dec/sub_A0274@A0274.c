int __fastcall sub_A0274(int a1, int a2)
{
  const char *v2; // r4
  int result; // r0
  unsigned int v4; // r3
  bool v5; // cc

  v2 = *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + 24 * a2 + 16);
  if ( !v2 )
    return 0;
  result = strcmp(v2, "RETVAL");
  if ( result )
  {
    if ( !strncmp(v2, "PARENT", 6u) || !strcmp(v2, "REP") || !strncmp(v2, "_parent", 7u) )
    {
      return 1;
    }
    else
    {
      v4 = *(unsigned __int8 *)v2;
      v5 = v4 > 0x4F;
      if ( v4 != 79 )
        v5 = v4 - 82 > 1;
      return !v5;
    }
  }
  return result;
}
