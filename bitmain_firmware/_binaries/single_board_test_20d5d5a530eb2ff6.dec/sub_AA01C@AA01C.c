int __fastcall sub_AA01C(int a1, char *nptr)
{
  signed int v3; // r5
  int result; // r0

  v3 = strtol(nptr, 0, 10);
  if ( v3 < 0 )
    return 0;
  result = *(_DWORD *)(a1 + 12);
  if ( result )
    result = sub_8AFAC(result, v3);
  if ( *(_DWORD *)(a1 + 16) )
    return sub_8AFE4(*(_DWORD *)(a1 + 16), v3);
  return result;
}
