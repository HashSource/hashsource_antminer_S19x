int __fastcall sub_22A2C(int a1, int a2)
{
  if ( a1 > 12 )
    return 0;
  if ( (a1 & 1) != 0 )
  {
    ++a1;
    a2 = ~a2;
  }
  return a2 + 6 * a1;
}
