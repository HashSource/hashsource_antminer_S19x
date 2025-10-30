int __fastcall sub_4A1B4(double a1)
{
  if ( a1 < 0.0 )
    return -(int)sub_4A1D8(LODWORD(a1), HIDWORD(a1) ^ 0x80000000);
  else
    return sub_4A1D8(LODWORD(a1), HIDWORD(a1));
}
