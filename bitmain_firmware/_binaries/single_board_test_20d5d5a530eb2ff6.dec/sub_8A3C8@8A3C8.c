int __fastcall sub_8A3C8(int a1, int a2)
{
  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 124) + 528) + 20) & 8) == 0 )
    return 1;
  if ( (sub_120D90() & 0x80) != 0 )
    return 1;
  sub_D0048(20, 279, 318, "ssl/ssl_lib.c", 3489);
  return 0;
}
