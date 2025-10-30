int __fastcall sub_50B6C(int a1, int *a2)
{
  int v3; // r8
  int v4; // r9
  int v5; // r7
  const unsigned __int16 *v6; // r4
  int v7; // r3
  int v8; // r10
  int v9; // t1
  unsigned int v10; // r2
  int v11; // r3

  v3 = a1 - 1;
  v4 = 0;
  v5 = 0;
  v6 = *_ctype_b_loc();
  while ( 1 )
  {
    v9 = *(unsigned __int8 *)++v3;
    v8 = v9;
    v10 = v6[v9];
    v11 = (v10 >> 12) & 1;
    if ( v5 == 2 )
      v11 = 0;
    if ( !v11 )
      break;
    if ( (v10 & 0x800) != 0 )
      v7 = (*_ctype_toupper_loc())[v8] - 48;
    else
      v7 = (*_ctype_toupper_loc())[v8] - 55;
    v4 = v7 + 16 * v4;
    ++v5;
  }
  *a2 = v4;
  return v4;
}
