int __fastcall sub_18CD0(int a1, int a2)
{
  int result; // r0

  if ( sub_26AC4(a1) )
    return sub_182B4(a1, 2u, a2);
  result = sub_18C14(a1, a2);
  if ( result != 255 )
    LOWORD(result) = result + 15;
  return (__int16)result;
}
