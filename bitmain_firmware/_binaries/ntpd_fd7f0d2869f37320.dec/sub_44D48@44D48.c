unsigned __int64 __fastcall sub_44D48(unsigned __int8 *a1, unsigned __int8 **a2)
{
  int v2; // r8
  unsigned __int64 v4; // r10
  unsigned int v5; // r6
  unsigned __int8 *v6; // r3
  const unsigned __int16 **v7; // r0
  unsigned __int64 v8; // r4
  unsigned __int8 *v9; // r12
  const unsigned __int16 *v10; // lr
  bool v11; // cc
  int v12; // r1
  int v13; // r0
  int v14; // r1
  unsigned __int8 *v15; // r2
  int *v16; // r0
  int v17; // r6
  int *v19; // r0
  unsigned __int8 *v20; // [sp+4h] [bp-18h]
  unsigned __int8 *v21; // [sp+4h] [bp-18h]

  v2 = *a1;
  if ( v2 == 45 )
  {
    v5 = 2;
    v20 = a1 + 1;
    v4 = 0x8000000000000000LL;
  }
  else
  {
    v4 = 0x7FFFFFFFFFFFFFFFLL;
    v5 = 0;
    if ( v2 == 43 )
      v6 = a1 + 1;
    else
      v6 = a1;
    v20 = v6;
  }
  v7 = _ctype_b_loc();
  v8 = 0;
  v9 = v20;
  v10 = *v7;
  while ( 1 )
  {
    v14 = *v9;
    v15 = v9++;
    if ( (v10[v14] & 0x800) == 0 )
      break;
    v11 = HIDWORD(v8) > 0xCCCCCCC;
    v12 = v14 - 48;
    if ( HIDWORD(v8) == 214748364 )
      v11 = (unsigned int)v8 > 0xCCCCCCCC;
    v13 = v11;
    v8 = 10 * v8 + v12;
    if ( v8 > v4 )
      v13 |= 1u;
    v5 |= v13;
  }
  if ( v20 == v15 )
  {
    v19 = _errno_location();
    v15 = a1;
    *v19 = 22;
  }
  if ( (v5 & 1) != 0 )
  {
    v21 = v15;
    v16 = _errno_location();
    v15 = v21;
    v8 = v4;
    *v16 = 34;
  }
  v17 = (v5 >> 1) & 1;
  if ( a2 )
    *a2 = v15;
  if ( !v8 )
    v17 = 0;
  if ( v17 )
    return -(__int64)v8;
  else
    return v8;
}
