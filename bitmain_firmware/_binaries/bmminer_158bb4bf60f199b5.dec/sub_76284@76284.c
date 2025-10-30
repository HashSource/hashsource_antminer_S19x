int __fastcall sub_76284(_BYTE *a1, unsigned int a2)
{
  int v2; // r2
  char v3; // r9
  unsigned int v4; // r12
  int v5; // r6
  int v6; // r8
  int v7; // r5
  int v8; // r7
  unsigned int v9; // r4
  unsigned int v10; // r3
  unsigned __int8 v11; // r3
  int v12; // lr
  int result; // r0

  if ( !a2 )
    return 31;
  LOBYTE(v2) = 0;
  v3 = 1;
  LOBYTE(v4) = 0;
  v5 = 1;
  v6 = 1;
  v7 = 1;
  v8 = 1;
  v9 = 128;
  while ( 1 )
  {
    v2 = (unsigned __int8)(v2 + 1);
    v4 = (unsigned __int8)(v4 + 1);
    v10 = *a1 & v9;
    v9 >>= 1;
    if ( v10 )
      v11 = v3 ^ 1;
    else
      v11 = v3;
    if ( v2 == 8 )
    {
      ++a1;
      LOBYTE(v2) = 0;
      v9 = 128;
    }
    v12 = (unsigned __int8)(v11 ^ v7);
    v3 = v5;
    if ( v4 >= a2 )
      break;
    v5 = v6;
    v7 = v8;
    v6 = v12;
    v8 = v11;
  }
  if ( v5 )
    result = 16;
  else
    result = 0;
  if ( v6 )
    result |= 8u;
  if ( v11 != v7 )
    result |= 4u;
  if ( v8 )
    result |= 2u;
  if ( v11 )
    return result | 1;
  return result;
}
