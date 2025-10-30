bool __fastcall sub_A1DB4(int a1)
{
  char *v1; // r3
  int v2; // r2
  bool v3; // zf

  if ( !a1 )
    return 0;
  while ( 1 )
  {
    v1 = *(char **)(a1 + 24);
    v2 = *v1;
    v3 = v2 == 1;
    if ( v2 != 1 )
      v3 = v2 == 18;
    if ( !v3 )
      break;
    a1 = *((_DWORD *)v1 + 5);
    if ( !a1 )
      return 0;
  }
  return sub_A1D84(a1);
}
