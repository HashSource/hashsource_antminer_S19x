unsigned int __fastcall sub_7C1B4(unsigned int *a1)
{
  unsigned int v2; // r4
  unsigned int result; // r0

  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/random.c", 78, 0, "val != ((void *)0)");
  sub_7C0C8();
  v2 = rand();
  result = (unsigned __int16)(v2 >> 4) | (rand() << 12) & 0xFFFF0000;
  *a1 = result;
  return result;
}
