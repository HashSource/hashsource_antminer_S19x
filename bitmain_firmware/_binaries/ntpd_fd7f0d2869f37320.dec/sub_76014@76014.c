int __fastcall sub_76014(int *a1)
{
  int v1; // r1
  bool v2; // zf
  int result; // r0

  v1 = *a1;
  v2 = *a1 == 10;
  if ( *a1 == 10 )
  {
    v1 = a1[1];
    result = 49406;
  }
  else
  {
    result = 0;
  }
  if ( v2 )
    return (v1 & 0xC0FF) == result;
  return result;
}
