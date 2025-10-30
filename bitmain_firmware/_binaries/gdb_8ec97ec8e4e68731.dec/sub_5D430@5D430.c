int __fastcall sub_5D430(int a1, _DWORD *a2, int a3)
{
  if ( !a3 )
    return sub_1BE5A4(0);
  if ( a3 != 1 )
    sub_946E0("Usage: -info-os [INFOTYPE]");
  return sub_1BE5A4(*a2);
}
