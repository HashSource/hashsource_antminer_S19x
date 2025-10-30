unsigned int __fastcall sub_50330(unsigned __int8 *a1, char *a2, int a3, unsigned int a4, int a5, int a6)
{
  if ( !a6 )
    return sub_4EDBC(a1, a2, a3, a4);
  if ( a2 != (char *)(a5 + a6) )
    return sub_4F70C(a1, a2, a3, a4, a5, a6);
  if ( a6 <= 65534 )
    return sub_48AF4(a1, a2, a3, a4, a6);
  return sub_4F3C0(a1, a2, a3, a4);
}
