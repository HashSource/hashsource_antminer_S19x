unsigned int __fastcall sub_2CD6F8(unsigned __int8 *a1)
{
  unsigned int v1; // r3
  int v2; // r2
  int v3; // t1

  v1 = 0;
  while ( 1 )
  {
    v3 = *a1++;
    v2 = v3;
    if ( !v3 )
      break;
    v1 = v2 + 16 * v1;
    if ( (v1 & 0xF0000000) != 0 )
      v1 = v1 & 0xFFFFFFF ^ ((v1 & 0xF0000000) >> 24);
  }
  return v1;
}
