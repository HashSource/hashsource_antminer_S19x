int __fastcall sub_68F1C(double a1)
{
  if ( a1 < 0.0 )
    return -(int)sub_68F40(LODWORD(a1), HIDWORD(a1) ^ 0x80000000);
  else
    return sub_68F40(LODWORD(a1), HIDWORD(a1));
}
