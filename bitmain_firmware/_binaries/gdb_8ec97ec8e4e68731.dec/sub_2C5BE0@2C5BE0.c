bool __fastcall sub_2C5BE0(int a1, int a2)
{
  int v2; // r3
  _BOOL4 v3; // r5

  v2 = *(_DWORD *)(a2 + 28);
  v3 = *(_DWORD *)(v2 + 44) == 4 && *(_DWORD *)(v2 + 400) != 0;
  if ( (*(_BYTE *)a2 & 3) == 2 )
    return 1;
  if ( !sub_2B905C(a1, ".glue_7")
    || !sub_2B905C(a1, ".glue_7t")
    || !sub_2B905C(a1, ".vfp11_veneer")
    || !sub_2B905C(a1, ".v4_bx") )
  {
    return 0;
  }
  return !v3 || sub_2B905C(a1, ".text.stm32l4xx_veneer") != 0;
}
