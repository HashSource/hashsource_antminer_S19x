int __fastcall sub_2CB6D8(int a1, char *a2, int a3, int a4, int a5)
{
  int result; // r0
  bool v7; // zf

  if ( !a5 || *(_BYTE *)(a5 + 12) != 2 )
    return 1;
  v7 = !sub_2CB538(*(_DWORD *)(*(_DWORD *)(a5 + 20) + 4), a2);
  result = 1;
  if ( !v7 )
    *(_BYTE *)(a3 + 12) = (*(_BYTE *)(a3 + 12) & 0xF) + 16;
  return result;
}
