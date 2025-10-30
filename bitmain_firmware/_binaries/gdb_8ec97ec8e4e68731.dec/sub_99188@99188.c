unsigned __int8 *__fastcall sub_99188(unsigned __int8 *a1, unsigned int *a2)
{
  unsigned int v2; // lr
  int v3; // r3
  unsigned __int8 *v4; // r5
  int v5; // r12
  int v6; // t1
  unsigned int v7; // r4
  char v8; // r2

  v2 = 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = a1;
    v6 = *a1++;
    v5 = v6;
    v7 = v6 - 65;
    v8 = v6 - 87;
    if ( (unsigned int)(v6 - 97) > 5 )
    {
      v8 = v5 - 55;
      if ( v7 > 5 )
      {
        v8 = v5 - 48;
        if ( (unsigned int)(v5 - 48) > 9 )
          break;
      }
    }
    v3 = (16 * v3) | (v2 >> 28);
    v2 = v8 & 0xF | (16 * v2);
  }
  *a2 = v2;
  a2[1] = v3;
  return v4;
}
