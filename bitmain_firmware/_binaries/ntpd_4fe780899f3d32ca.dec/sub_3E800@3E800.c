int __fastcall sub_3E800(struct sockaddr *a1, int a2, int a3, __int16 *a4)
{
  unsigned int v8; // r4
  char v9; // r3
  int v10; // r12

  if ( (__rev16(*(unsigned __int16 *)(a3 + 4)) & 0xFFF) > 1 )
  {
    sub_64E00(3, "setclr_flags: err_nitems > 1");
    v9 = *(_BYTE *)(a3 + 3);
    v10 = 3;
  }
  else
  {
    v8 = bswap32(*(_DWORD *)(a3 + 8));
    if ( (v8 & 0xFFFFFF00) != 0 )
    {
      sub_64E00(3, "setclr_flags: extra flags: %#x", v8 & 0xFFFFFF00);
      v9 = *(_BYTE *)(a3 + 3);
      v10 = 3;
    }
    else
    {
      if ( (v8 & 1) != 0 )
        sub_38810(1, a4, 0);
      if ( (v8 & 2) != 0 )
        sub_38810(12, a4, 0);
      if ( (v8 & 4) != 0 )
        sub_38810(8, a4, 0);
      if ( (v8 & 8) != 0 )
        sub_38810(9, a4, 0);
      if ( (v8 & 0x10) != 0 )
        sub_38810(10, a4, 0);
      if ( (v8 & 0x20) != 0 )
        sub_38810(11, a4, 0);
      if ( (v8 & 0x40) != 0 )
        sub_38810(3, a4, 0);
      if ( (v8 & 0x80) != 0 )
        sub_38810(13, a4, 0);
      v9 = *(_BYTE *)(a3 + 3);
      v10 = 0;
    }
  }
  return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), v9, v10);
}
