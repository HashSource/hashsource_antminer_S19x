bool __fastcall sub_87798(int a1, int a2, int a3)
{
  int v5; // r4

  if ( !dword_6DF354 )
  {
    if ( (a1 & 0x80) != 0 )
      v5 = a1 | 0xC;
    else
      v5 = a1 | 0x4C;
    if ( sub_DE05C(v5, a2, a3)
      && sub_10C594(&unk_6DF35C, sub_87608)
      && dword_6DF350
      && ((v5 & 0x100000) == 0 || sub_10C594(&unk_6DF360, sub_875E4) && dword_6DF348) )
    {
      if ( (v5 & 0x200000) == 0 )
        return 1;
      if ( sub_10C594(&unk_6DF360, sub_875F4) )
        return dword_6DF348 != 0;
    }
    return 0;
  }
  if ( dword_6DF358 )
    return 0;
  dword_6DF358 = 1;
  sub_D0048(20, 342, 70, "ssl/ssl_init.c", 178);
  return 0;
}
