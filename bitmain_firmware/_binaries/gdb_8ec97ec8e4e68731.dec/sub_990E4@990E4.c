int __fastcall sub_990E4(int a1)
{
  if ( (unsigned int)(a1 - 48) <= 9 )
    return a1 - 48;
  if ( (unsigned int)(a1 - 97) <= 5 )
    return a1 - 87;
  if ( (unsigned int)(a1 - 65) > 5 )
    sub_946E0("Reply contains invalid hex digit %d", a1);
  return a1 - 55;
}
