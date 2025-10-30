int __fastcall sub_1C264(int *a1)
{
  unsigned int v2; // r4
  int result; // r0

  if ( !a1 )
    sub_10C38();
  sub_1C178();
  v2 = rand();
  result = (unsigned __int16)((unsigned int)rand() >> 4);
  *a1 = (unsigned __int16)(v2 >> 4) | (result << 16);
  return result;
}
