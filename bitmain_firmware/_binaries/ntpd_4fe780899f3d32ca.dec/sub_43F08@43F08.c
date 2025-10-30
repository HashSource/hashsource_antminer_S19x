unsigned __int64 __fastcall sub_43F08(unsigned __int8 *a1, unsigned __int8 **a2)
{
  int v3; // r11
  unsigned __int8 *v4; // r3
  unsigned int v5; // r9
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r4
  const unsigned __int16 *v8; // r12
  unsigned __int8 *v9; // r0
  _BOOL4 v10; // lr
  int v11; // r3
  int v12; // r1
  unsigned __int8 *v13; // r3
  int *v14; // r0
  int *v16; // r0
  unsigned __int8 *v17; // [sp+0h] [bp-24h]
  unsigned __int8 *v18; // [sp+Ch] [bp-18h]

  v3 = *a1;
  if ( v3 == 45 )
  {
    v5 = 2;
    v18 = a1 + 1;
    v6 = 0x8000000000000000LL;
  }
  else
  {
    if ( v3 == 43 )
      v4 = a1 + 1;
    else
      v4 = a1;
    v5 = 0;
    v6 = 0x7FFFFFFFFFFFFFFFLL;
    v18 = v4;
  }
  v7 = 0;
  v8 = *_ctype_b_loc();
  v9 = v18;
  while ( 1 )
  {
    v12 = *v9;
    v13 = v9++;
    if ( (v8[v12] & 0x800) == 0 )
      break;
    v10 = v7 > 0xCCCCCCCCCCCCCCCLL;
    v7 = 10 * v7 + v12 - 48;
    if ( v6 < v7 )
      v11 = v10 | 1;
    else
      v11 = v10;
    v5 |= v11;
  }
  if ( v18 == v13 )
  {
    v16 = _errno_location();
    v13 = a1;
    *v16 = 22;
  }
  if ( (v5 & 1) != 0 )
  {
    v17 = v13;
    v7 = v6;
    v14 = _errno_location();
    v13 = v17;
    *v14 = 34;
  }
  *a2 = v13;
  if ( ((v7 != 0) & (v5 >> 1)) != 0 )
    return -(__int64)v7;
  else
    return v7;
}
