int __fastcall sub_7D54C(int *a1)
{
  unsigned int v2; // r4
  int result; // r0

  if ( !a1 )
    sub_6FC54((int)"./../lib/isc/random.c", 78, 0, "val != ((void *)0)");
  sub_7D460();
  v2 = rand();
  result = (unsigned __int16)((unsigned int)rand() >> 4);
  *a1 = (unsigned __int16)(v2 >> 4) | (result << 16);
  return result;
}
