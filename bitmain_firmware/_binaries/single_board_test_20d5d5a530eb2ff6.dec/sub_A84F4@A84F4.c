int __fastcall sub_A84F4(int a1, int a2, unsigned int a3)
{
  int result; // r0
  void *s; // [sp+4h] [bp-14h] BYREF

  if ( !a3 )
    return 1;
  result = sub_A82B8(a1, a3, (int *)&s);
  if ( result )
  {
    memset(s, a2, a3);
    return 1;
  }
  return result;
}
