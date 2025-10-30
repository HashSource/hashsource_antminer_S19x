int __fastcall sub_61814(unsigned __int8 *a1, int *a2)
{
  unsigned __int8 *v2; // r8
  int v3; // r7
  int v5; // r9
  int v6; // r6
  const unsigned __int16 **v7; // r0
  int v8; // r2
  int result; // r0
  int v10; // r12
  int v11; // t1
  unsigned int v12; // r3

  v2 = a1;
  v3 = *a1;
  if ( v3 != 45 )
  {
    if ( *a1 )
    {
      v5 = 55;
      v6 = 0;
      goto LABEL_5;
    }
    return v3;
  }
  v3 = a1[1];
  if ( !a1[1] )
    return v3;
  v2 = a1 + 1;
  v5 = 56;
  v6 = 1;
LABEL_5:
  v7 = _ctype_b_loc();
  v8 = 0;
  result = (int)*v7;
  do
  {
    v12 = ((*(unsigned __int16 *)(result + 2 * v3) ^ 0x800u) >> 11) & 1;
    if ( v8 > 214748364 )
      v12 = 1;
    if ( v12 || v8 == 214748364 && v3 > v5 )
      return 0;
    v10 = v3 - 48;
    v11 = *++v2;
    v3 = v11;
    v8 = v10 + 10 * v8;
  }
  while ( v11 );
  if ( v6 )
  {
    *a2 = -v8;
    result = 1;
  }
  else
  {
    *a2 = v8;
  }
  if ( !v6 )
    return 1;
  return result;
}
