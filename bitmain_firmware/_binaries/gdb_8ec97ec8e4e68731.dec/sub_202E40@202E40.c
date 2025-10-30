int __fastcall sub_202E40(int a1)
{
  int v1; // r4
  const char *v2; // r5
  const char *v3; // r0
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = 0;
  v1 = dword_4893F0;
  sub_25B0DC(&v5, a1);
  if ( v5 )
  {
    v2 = *(const char **)v5;
    if ( *(_DWORD *)v5 )
    {
      if ( *(_DWORD *)(v5 + 4) )
        sub_946E0("Too many arguments in command");
      sub_259F10("Source path substitution rule matching `%s':\n", v2);
      if ( !v1 )
        return sub_31DAD0(v5);
      while ( 1 )
      {
LABEL_7:
        v3 = *(const char **)v1;
        if ( !v2 )
          goto LABEL_10;
        if ( sub_202DE0(v3, v2) )
          break;
LABEL_11:
        v1 = *(_DWORD *)(v1 + 8);
        if ( !v1 )
          return sub_31DAD0(v5);
      }
      v3 = *(const char **)v1;
LABEL_10:
      sub_259F10("  `%s' -> `%s'.\n", v3, *(const char **)(v1 + 4));
      goto LABEL_11;
    }
  }
  sub_259F10("List of all source path substitution rules:\n");
  v2 = 0;
  if ( v1 )
    goto LABEL_7;
  return sub_31DAD0(v5);
}
