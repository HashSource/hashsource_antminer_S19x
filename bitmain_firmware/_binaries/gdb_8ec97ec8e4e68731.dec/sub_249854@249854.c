int __fastcall sub_249854(char *s1)
{
  int v1; // r8
  int v2; // r7
  int v4; // r5
  int v5; // r4
  int v6; // r0

  v1 = dword_48A910;
  if ( !dword_48A910 )
    return 0;
  v2 = *(_DWORD *)dword_48A910;
  if ( !*(_DWORD *)dword_48A910 )
    return 0;
  v4 = dword_48A910;
  v5 = 0;
  while ( 1 )
  {
    v6 = strcmp(s1, *(const char **)(v4 + 8));
    v4 += 40;
    if ( !v6 )
      break;
    if ( v2 == ++v5 )
      return 0;
  }
  return v1 + 40 * v5 + 8;
}
