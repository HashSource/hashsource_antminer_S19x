int __fastcall sub_45704(int a1, int *a2, char *s2, int a4)
{
  int v4; // r4

  v4 = *a2;
  if ( *a2 == a1 + 12 && v4 == a2[1] )
    return 0;
  while ( *(_DWORD *)(v4 + 16) != a4 || strcmp((const char *)(v4 + 24), s2) )
  {
    if ( a2[1] == v4 )
      return 0;
    v4 = *(_DWORD *)(v4 + 4);
  }
  return v4;
}
