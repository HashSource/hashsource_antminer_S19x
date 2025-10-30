unsigned __int8 *__fastcall sub_10948(unsigned __int8 *a1)
{
  const unsigned __int16 **v2; // r6
  unsigned __int8 *v3; // r0
  int v4; // r3
  unsigned __int8 *v5; // r5
  unsigned __int8 *v6; // r0
  int v7; // t1

  v2 = _ctype_b_loc();
  v3 = a1;
  do
  {
    v4 = *v3;
    v5 = v3++;
  }
  while ( ((*v2)[v4] & 0x2000) != 0 );
  v6 = (unsigned __int8 *)_rawmemchr(v5, 0);
  while ( v5 < v6 )
  {
    v7 = *--v6;
    if ( ((*v2)[v7] & 0x2000) != 0 )
      *v6 = 0;
  }
  return v5;
}
