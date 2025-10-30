int __fastcall sub_B70C0(int a1, int a2)
{
  int i; // r3

  if ( !a1 )
    return a2;
  for ( i = a1; *(_DWORD *)(i + 40); i = *(_DWORD *)(i + 40) )
    ;
  *(_DWORD *)(i + 40) = a2;
  if ( a2 )
    *(_DWORD *)(a2 + 44) = i;
  sub_B6ECC(a1, 6, 0, i);
  return a1;
}
