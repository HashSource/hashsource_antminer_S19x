const char *__fastcall sub_7D7B4(const char *a1)
{
  const unsigned __int16 **v2; // r0
  const char *v3; // r2
  const unsigned __int16 *v4; // r6
  int v5; // r3
  const char *v6; // r4
  const char *v7; // r0
  const char *v8; // r3
  int v9; // t1

  v2 = _ctype_b_loc();
  v3 = a1;
  v4 = *v2;
  do
  {
    v5 = *(unsigned __int8 *)v3;
    v6 = v3++;
  }
  while ( (v4[v5] & 0x2000) != 0 );
  v7 = &v6[strlen(v6)];
  if ( v7 > v6 && (v4[*((unsigned __int8 *)v7 - 1)] & 0x2000) != 0 )
  {
    v8 = v7 - 1;
    do
    {
      v7 = v8;
      if ( v8 == v6 )
        break;
      v9 = *(unsigned __int8 *)--v8;
    }
    while ( (v4[v9] & 0x2000) != 0 );
  }
  *v7 = 0;
  return v6;
}
