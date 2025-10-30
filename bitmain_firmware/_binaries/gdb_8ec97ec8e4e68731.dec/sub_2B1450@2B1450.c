_BYTE **__fastcall sub_2B1450(_BYTE **result, unsigned int a2)
{
  int v2; // r3
  _BYTE *v3; // r5
  int i; // r12
  unsigned int v5; // r2
  int v6; // lr
  int v7; // r4
  bool v8; // zf
  _BYTE *v9; // r4
  char v10; // r3
  char v11; // r6

  v2 = 28;
  v3 = *result;
  for ( i = 8; ; --i )
  {
    v5 = a2 >> v2;
    v6 = v2 - 4;
    v7 = i - 1;
    v8 = ((a2 >> v2) & 0xF) == 0;
    v2 -= 4;
    if ( !v8 )
      break;
    if ( v7 == 1 )
    {
      *v3 = 49;
      v3[1] = 48;
      *result = v3 + 2;
      return result;
    }
  }
  v9 = *result;
  *v3 = i + 48;
  do
  {
    v10 = v6;
    v11 = a0123456789abcd_4[v5 & 0xF];
    v6 -= 4;
    v5 = a2 >> v10;
    *++v9 = v11;
  }
  while ( &v3[i] != v9 );
  *result = &v3[i + 1];
  return result;
}
