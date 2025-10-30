int __fastcall sub_7794C(double a1)
{
  if ( a1 < 0.0 )
    return -(int)sub_77970(LODWORD(a1), HIDWORD(a1) ^ 0x80000000);
  else
    return sub_77970(LODWORD(a1), HIDWORD(a1));
}
