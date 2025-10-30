int __fastcall sub_2898DC(const char *a1)
{
  int v2; // r5
  int v3; // r4
  int v4; // t1

  sub_283450();
  v2 = dword_4900E0;
  v3 = *(_DWORD *)dword_4900E0;
  if ( !*(_DWORD *)dword_4900E0 )
    return v3;
  while ( strcasecmp(*(const char **)v3, a1) )
  {
    v4 = *(_DWORD *)(v2 + 4);
    v2 += 4;
    v3 = v4;
    if ( !v4 )
      return v3;
  }
  return *(_DWORD *)(v3 + 4);
}
