int __fastcall sub_1839F8(int a1)
{
  int i; // r3

  for ( i = dword_487918; i && *(_DWORD *)(i + 8) != a1; i = *(_DWORD *)(i + 4) )
    ;
  return i;
}
