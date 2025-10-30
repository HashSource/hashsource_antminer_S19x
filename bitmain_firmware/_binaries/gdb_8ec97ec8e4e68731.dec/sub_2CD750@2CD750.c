int __fastcall sub_2CD750(int a1, size_t a2, char a3)
{
  _BYTE *v6; // r0
  int v7; // r3
  _DWORD *v8; // r3

  if ( a2 < 0x930 )
    sub_2A6BBC("elf.c", 241);
  v6 = sub_2AD09C(a1, a2);
  *(_DWORD *)(a1 + 160) = v6;
  if ( v6 )
  {
    v7 = *(_BYTE *)(a1 + 40) & 0x18;
    v6[2340] = v6[2340] & 0xC0 | a3 & 0x3F;
    if ( v7 == 8 )
      return 1;
    v8 = sub_2AD09C(a1, 0x40u);
    if ( v8 )
    {
      *(_DWORD *)(*(_DWORD *)(a1 + 160) + 2348) = v8;
      v8[7] = -1;
      return 1;
    }
  }
  return 0;
}
