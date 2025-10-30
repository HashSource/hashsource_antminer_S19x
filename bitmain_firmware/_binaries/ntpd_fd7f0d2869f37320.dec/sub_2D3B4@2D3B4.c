_BYTE *__fastcall sub_2D3B4(int (__fastcall *a1)(int), int a2, _BYTE *a3)
{
  _BYTE *v6; // r4
  unsigned int v7; // r9
  int i; // r0
  int v9; // r7
  const unsigned __int16 **v10; // r0
  _BYTE *v11; // r2
  const unsigned __int16 *v12; // r0
  _BYTE *v13; // r1
  int v14; // r3

  if ( !a3 )
    return 0;
  v6 = a3;
  v7 = 50;
  for ( i = a1(a2); ; i = a1(a2) )
  {
    if ( i == -1 )
    {
      if ( a3 == v6 )
      {
        *a3 = 0;
        return 0;
      }
      v9 = 0;
      goto LABEL_11;
    }
    if ( i == 10 )
      break;
    if ( v7 > 1 )
    {
      *v6++ = i;
      --v7;
    }
  }
  if ( a3 == v6 )
  {
    *a3 = 0;
    return a3;
  }
  v9 = 1;
LABEL_11:
  v10 = _ctype_b_loc();
  v11 = v6;
  v12 = *v10;
  while ( 1 )
  {
    v13 = v11--;
    if ( (v12[(unsigned __int8)*(v13 - 1)] & 0x2000) == 0 )
      break;
    if ( a3 == v11 )
    {
      v13 = a3;
      break;
    }
  }
  if ( a3 == v13 )
    v14 = v9;
  else
    v14 = v9 | 1;
  *v13 = 0;
  if ( v14 )
    return a3;
  else
    return 0;
}
