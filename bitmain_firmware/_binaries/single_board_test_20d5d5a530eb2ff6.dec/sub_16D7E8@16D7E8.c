int __fastcall sub_16D7E8(int a1, int a2, int a3)
{
  unsigned int v4; // r1
  int v5; // r3
  unsigned int v6; // r1

  if ( !a1 )
  {
    sub_D0048(40, 111, 67, (int)"crypto/ui/ui_lib.c", 554);
    return -1;
  }
  if ( a2 == 1 )
  {
    v4 = *(_DWORD *)(a1 + 16);
    v5 = (v4 >> 8) & 1;
    if ( a3 )
      v6 = v4 | 0x100;
    else
      v6 = v4 & 0xFFFFFEFF;
    *(_DWORD *)(a1 + 16) = v6;
    return v5;
  }
  else
  {
    if ( a2 != 2 )
    {
      sub_D0048(40, 111, 106, (int)"crypto/ui/ui_lib.c", 572);
      return -1;
    }
    return *(_DWORD *)(a1 + 16) & 1;
  }
}
