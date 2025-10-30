int __fastcall sub_3F9F4(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v6; // r5
  int *v7; // r4
  int v8; // r3
  int v9; // t1
  int v10; // t1

  if ( ((HIBYTE(*(_WORD *)(a3 + 4)) | (unsigned __int16)(*(_WORD *)(a3 + 4) << 8)) & 0xFFFu) > 1 )
  {
    sub_65D40(3, "reset_stats: err_nitems > 1");
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
  v6 = bswap32(*(_DWORD *)(a3 + 8));
  if ( (v6 & 0xFFFFFF80) != 0 )
  {
    sub_65D40(3, "reset_stats: reset leaves %#lx", v6 & 0xFFFFFF80);
    return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 3);
  }
  v7 = &reset_entries;
  v8 = reset_entries;
  if ( reset_entries )
  {
    do
    {
      while ( (v6 & v8) == 0 )
      {
        v9 = v7[2];
        v7 += 2;
        v8 = v9;
        if ( !v9 )
          return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
      }
      ((void (*)(void))v7[1])();
      v10 = v7[2];
      v7 += 2;
      v8 = v10;
    }
    while ( v10 );
  }
  return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
}
