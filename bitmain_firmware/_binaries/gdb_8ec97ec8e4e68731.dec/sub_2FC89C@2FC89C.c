int __fastcall sub_2FC89C(_DWORD *a1, int a2, int a3, int a4)
{
  int result; // r0
  char v9; // r3

  if ( (*(_BYTE *)(a2 + 44) & 4) != 0 || *(_DWORD *)(a2 + 156) )
    sub_2A6BBC("linker.c", 469);
  a1[7] = 0;
  a1[8] = 0;
  a1[10] = 0;
  result = sub_2AAA0C((int)a1, a3, a4);
  if ( result )
  {
    a1[9] = sub_2FC4E4;
    v9 = *(_BYTE *)(a2 + 44);
    *(_DWORD *)(a2 + 156) = a1;
    *(_BYTE *)(a2 + 44) = v9 | 4;
  }
  return result;
}
