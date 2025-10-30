int __fastcall sub_A851C(int a1, const void *a2, unsigned int a3)
{
  int result; // r0
  void *dest; // [sp+4h] [bp-14h] BYREF

  if ( !a3 )
    return 1;
  result = sub_A82B8(a1, a3, (int *)&dest);
  if ( result )
  {
    memcpy(dest, a2, a3);
    return 1;
  }
  return result;
}
