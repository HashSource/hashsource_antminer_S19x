int __fastcall sub_3FB18(struct sockaddr *a1, int a2, int a3, Elf32_Dyn **a4)
{
  unsigned int v8; // r4

  if ( ((HIBYTE(*(_WORD *)(a3 + 4)) | (unsigned __int16)(*(_WORD *)(a3 + 4) << 8)) & 0xFFFu) > 1 )
  {
    sub_65D40(3, "setclr_flags: err_nitems > 1");
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
  v8 = bswap32(*(_DWORD *)(a3 + 8));
  if ( (v8 & 0xFFFFFF00) != 0 )
  {
    sub_65D40(3, "setclr_flags: extra flags: %#x", v8 & 0xFFFFFF00);
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
  if ( (v8 & 1) != 0 )
    sub_39000(1, a4, 0);
  if ( (v8 & 2) != 0 )
    sub_39000(12, a4, 0);
  if ( (v8 & 4) != 0 )
    sub_39000(8, a4, 0);
  if ( (v8 & 8) != 0 )
    sub_39000(9, a4, 0);
  if ( (v8 & 0x10) != 0 )
    sub_39000(10, a4, 0);
  if ( (v8 & 0x20) != 0 )
    sub_39000(11, a4, 0);
  if ( (v8 & 0x40) != 0 )
    sub_39000(3, a4, 0);
  if ( (v8 & 0x80) != 0 )
    sub_39000(13, a4, 0);
  return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
}
