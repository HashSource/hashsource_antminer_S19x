int __fastcall sub_A0A60(int a1)
{
  int result; // r0
  char *v2; // r3
  int i; // r2
  bool v4; // zf

  if ( !a1 )
    return 0;
  result = sub_A0870(a1);
  v2 = *(char **)(result + 24);
  for ( i = *v2; i == 23; i = *v2 )
  {
    result = *((_DWORD *)v2 + 5);
    v2 = *(char **)(result + 24);
  }
  v4 = i == 18;
  if ( i != 18 )
    v4 = i == 1;
  if ( v4 )
    return sub_A0870(*((_DWORD *)v2 + 5));
  return result;
}
