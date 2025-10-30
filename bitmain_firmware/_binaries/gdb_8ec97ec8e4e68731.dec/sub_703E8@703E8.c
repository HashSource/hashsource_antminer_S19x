bool __fastcall sub_703E8(_BYTE *a1, _BYTE *a2)
{
  int v2; // r4
  unsigned __int8 *v4; // r5
  int v5; // r6
  int v6; // t1

  if ( !*a1 )
    return 1;
  v2 = (unsigned __int8)*a2;
  if ( !*a2 )
    return v2;
  v4 = a2 + 1;
  v5 = tolower((unsigned __int8)*a1);
  while ( v5 != tolower(v2) )
  {
    v6 = *v4++;
    v2 = v6;
    if ( !v6 )
      return v2;
  }
  return sub_703E8(a1 + 1, v4) || sub_703E8(a1, v4) != 0;
}
