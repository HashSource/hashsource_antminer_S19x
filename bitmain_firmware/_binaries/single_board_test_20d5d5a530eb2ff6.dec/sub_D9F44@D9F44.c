int __fastcall sub_D9F44(_DWORD *a1, int a2, int a3)
{
  int result; // r0

  if ( !a1 )
    return 0;
  if ( !sub_D9CD4(a1, a2) )
    return 0;
  result = a3;
  a1[6] = a3;
  if ( a3 )
    return 1;
  return result;
}
