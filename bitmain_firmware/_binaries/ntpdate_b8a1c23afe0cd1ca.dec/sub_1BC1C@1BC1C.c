unsigned int __fastcall sub_1BC1C(unsigned int *a1)
{
  unsigned int v2; // r4
  unsigned int result; // r0

  if ( !a1 )
    sub_1073C();
  sub_1BB30();
  v2 = rand();
  result = (unsigned __int16)(v2 >> 4) | (rand() << 12) & 0xFFFF0000;
  *a1 = result;
  return result;
}
