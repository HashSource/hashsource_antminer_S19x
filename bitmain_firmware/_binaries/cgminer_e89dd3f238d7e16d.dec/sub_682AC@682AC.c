int __fastcall sub_682AC(double a1)
{
  if ( a1 < 0.0 )
    return -(int)sub_682D0(LODWORD(a1), HIDWORD(a1) ^ 0x80000000);
  else
    return sub_682D0(LODWORD(a1), HIDWORD(a1));
}
