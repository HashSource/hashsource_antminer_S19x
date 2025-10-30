int __fastcall sub_11AAC4(int a1)
{
  _DWORD *v2; // r5
  int result; // r0
  _DWORD *v4; // r4

  if ( !a1 )
    return 1;
  v2 = *(_DWORD **)a1;
  if ( !*(_DWORD *)a1 || !*v2 )
    goto LABEL_9;
  if ( *v2 != 1 || !sub_10C010(v2[1]) )
  {
LABEL_5:
    sub_D0048(34, 161, 116, (int)"crypto/x509v3/v3_asid.c", 377);
    return 0;
  }
  result = sub_11A690(v2);
  if ( result )
  {
LABEL_9:
    v4 = *(_DWORD **)(a1 + 4);
    if ( !v4 || !*v4 )
      return 1;
    if ( *v4 == 1 && sub_10C010(v4[1]) )
      return sub_11A690(v4) != 0;
    goto LABEL_5;
  }
  return result;
}
