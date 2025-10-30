int __fastcall sub_11DC34(int a1, unsigned int a2)
{
  int *v3; // r0
  _DWORD *v4; // r3
  int i; // r4
  int result; // r0

  v3 = *(int **)(a1 + 32);
  if ( v3 && sub_C2460(v3, a2) )
    return a1;
  v4 = *(_DWORD **)(a1 + 52);
  if ( !v4 || !*v4 )
    return 0;
  for ( i = 4; ; i += 4 )
  {
    result = sub_11DC34();
    if ( result )
      break;
    if ( !*(_DWORD *)(*(_DWORD *)(a1 + 52) + i) )
      return 0;
  }
  return result;
}
