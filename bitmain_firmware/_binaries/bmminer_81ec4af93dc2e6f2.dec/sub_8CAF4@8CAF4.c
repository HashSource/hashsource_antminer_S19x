int __fastcall sub_8CAF4(double a1)
{
  if ( a1 < 0.0 )
    return -(int)sub_8CB18(LODWORD(a1), HIDWORD(a1) ^ 0x80000000);
  else
    return sub_8CB18(LODWORD(a1), HIDWORD(a1));
}
