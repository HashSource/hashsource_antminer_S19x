int __fastcall sub_202DE0(const char *a1, const char *a2)
{
  signed int v4; // r4
  _BOOL4 v6; // r0

  v4 = strlen(a1);
  if ( v4 > (int)strlen(a2) || j_strncmp(a2, a1, v4) )
    return 0;
  v6 = a2[v4] != 47;
  if ( !a2[v4] )
    v6 = 0;
  return !v6;
}
