int __fastcall sub_A0ED8(int a1)
{
  int v1; // r0
  int v2; // r5
  int v3; // r3
  const char *v4; // r4
  size_t v5; // r0

  v1 = sub_A0870(a1);
  v2 = v1;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 24);
    if ( *(_BYTE *)v3 == 3 && ((v4 = *(const char **)(v3 + 8)) != 0 || (v4 = *(const char **)(v3 + 12)) != 0) )
    {
      v5 = strlen(v4);
      if ( v5 <= 6 || strcmp(&v4[v5 - 6], "___XVE") )
        return sub_A0E38(v2, "___XVE");
    }
    else
    {
      return 0;
    }
  }
  return v2;
}
