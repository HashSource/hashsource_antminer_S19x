_BYTE *__fastcall sub_2D014(int (__fastcall *a1)(int), int a2, _BYTE *a3)
{
  _BYTE *v6; // r4
  int v7; // r9
  int i; // r0
  int v9; // r5
  const unsigned __int16 *v10; // r1
  _BYTE *v11; // r2
  int v12; // t1

  v6 = a3;
  v7 = 50;
  for ( i = a1(a2); ; i = a1(a2) )
  {
    if ( i == -1 )
    {
      v9 = 0;
      goto LABEL_8;
    }
    if ( i == 10 )
      break;
    if ( v7 != 1 )
    {
      --v7;
      *v6++ = i;
    }
  }
  v9 = 1;
LABEL_8:
  if ( a3 != v6 )
  {
    v10 = *_ctype_b_loc();
    while ( 1 )
    {
      v11 = v6;
      v12 = (unsigned __int8)*--v6;
      if ( (v10[v12] & 0x2000) == 0 )
        break;
      if ( a3 == v6 )
        goto LABEL_15;
    }
    if ( v11 != a3 )
      v9 |= 1u;
    v6 = v11;
  }
LABEL_15:
  *v6 = 0;
  if ( v9 )
    return a3;
  else
    return 0;
}
