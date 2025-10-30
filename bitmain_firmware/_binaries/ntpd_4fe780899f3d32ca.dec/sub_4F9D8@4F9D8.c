int __fastcall sub_4F9D8(int a1, int *a2)
{
  int v4; // r8
  int v5; // r10
  const unsigned __int16 *v6; // r5
  __int32_t v7; // r3
  int v8; // r3
  int v9; // r11
  int v10; // t1
  unsigned int v11; // r9
  int v12; // r3

  v4 = a1 - 1;
  v5 = 0;
  v6 = *_ctype_b_loc();
  while ( 1 )
  {
    v10 = *(unsigned __int8 *)++v4;
    v9 = v10;
    v11 = v6[v10];
    v12 = (v11 >> 12) & 1;
    if ( v4 - a1 == 2 )
      v12 = 0;
    if ( !v12 )
      break;
    v7 = (*_ctype_toupper_loc())[v9];
    if ( (v11 & 0x800) != 0 )
      v8 = v7 - 48;
    else
      v8 = v7 - 55;
    v5 = v8 + 16 * v5;
  }
  *a2 = v5;
  return v5;
}
