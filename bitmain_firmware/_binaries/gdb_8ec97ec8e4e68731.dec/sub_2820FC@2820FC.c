int __fastcall sub_2820FC(int a1, int a2)
{
  bool v4; // zf
  int v5; // r4

  if ( ((a2 & 0xFFFFFF00) != 0 || ((*_ctype_b_loc())[a2] & 0x100) == 0) && dword_4900D8 < dword_4900DC )
    dword_4900D8 = sub_29B4D0(dword_48AAD4);
  v4 = a1 == 0;
  v5 = a1 - 1;
  if ( !v4 )
  {
    do
    {
      --v5;
      sub_291A64(1, a2);
    }
    while ( v5 != -1 );
  }
  sub_29534C(1, a2);
  return 0;
}
