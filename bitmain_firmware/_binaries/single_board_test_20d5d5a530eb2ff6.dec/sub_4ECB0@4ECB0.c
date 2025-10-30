int __fastcall sub_4ECB0(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r3
  int v2; // r1
  int v3; // t1

  v1 = *a1;
  v2 = 0;
  do
  {
    v3 = *v1++;
    *a1 = v1;
    v2 += v3;
  }
  while ( v3 == 255 );
  return v2;
}
