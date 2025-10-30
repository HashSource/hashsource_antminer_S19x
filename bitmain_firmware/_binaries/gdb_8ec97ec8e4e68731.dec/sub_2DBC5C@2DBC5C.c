int __fastcall sub_2DBC5C(const char *a1, int *a2, int *a3)
{
  int *v6; // r4
  int v7; // r3

  if ( a2 == a3 )
    return 0;
  v6 = a2;
  while ( 1 )
  {
    if ( !strcmp(a1, (const char *)v6[2]) )
    {
      v7 = *(_DWORD *)(v6[1] + 160);
      if ( (*(_WORD *)(v7 + 2340) & 0x40) == 0 || sub_2DBC5C(*(_DWORD *)(v7 + 544), a2, v6) )
        break;
    }
    v6 = (int *)*v6;
    if ( a3 == v6 )
      return 0;
  }
  return 1;
}
