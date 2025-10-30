void __fastcall sub_185FC(int a1)
{
  bool v1; // zf
  _BOOL4 v2; // r0
  int v3; // r2

  v1 = a1 == 0;
  v2 = a1 != 0;
  v3 = dword_A05EC;
  if ( v1 )
    v2 = dword_A05EC == 0;
  if ( v2 )
  {
    if ( sub_1782C() )
      return;
    sub_1774C();
    v3 = dword_A05EC;
  }
  if ( !*(_BYTE *)(v3 + 96) )
    sub_182D4();
}
