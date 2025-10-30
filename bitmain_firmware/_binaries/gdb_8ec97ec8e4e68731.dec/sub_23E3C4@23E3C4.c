int __fastcall sub_23E3C4(int a1)
{
  int i; // r3

  for ( i = dword_48A4D4; i && *(_DWORD *)(i + 20) != a1; i = *(_DWORD *)(i + 4) )
    ;
  return i;
}
