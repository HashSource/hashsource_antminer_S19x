// positive sp value has been detected, the output may be wrong!
int sub_E8E50()
{
  int v0; // r4
  int v1; // r5
  int v2; // r6
  const char *v3; // r0
  const char *v4; // r2

  v2 = *(_DWORD *)(*(_DWORD *)(v1 + 24) + 24);
  v3 = *(const char **)(v2 + 8);
  if ( !v3 || strcmp(v3, *(const char **)v1) || *(_BYTE *)v2 == 23 )
  {
    if ( dword_46D448 )
      v4 = (const char *)sub_21B3C4(v1);
    else
      v4 = *(const char **)v1;
    sub_25A418(v0, " %s", v4);
  }
  return sub_25A418(v0, ";\n");
}
