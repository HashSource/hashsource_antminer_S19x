int __fastcall sub_50AC8(int a1, int *a2)
{
  int v3; // r6
  const unsigned __int16 **v4; // r0
  int v5; // r12
  int v6; // lr
  const unsigned __int16 *v7; // r0
  int v8; // r2
  int v9; // t1
  int v10; // r3

  v3 = a1 - 1;
  v4 = _ctype_b_loc();
  v5 = 0;
  v6 = 0;
  v7 = *v4;
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)++v3;
    v8 = v9;
    v10 = (v7[v9] >> 11) & 1;
    if ( v6 == 2 )
      v10 = 0;
    if ( !v10 )
      break;
    ++v6;
    v5 = v8 - 48 + 10 * v5;
  }
  *a2 = v5;
  return v5;
}
