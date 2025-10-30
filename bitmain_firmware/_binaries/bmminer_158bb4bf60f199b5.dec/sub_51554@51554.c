int __fastcall sub_51554(_BYTE *a1, unsigned int a2)
{
  char v2; // r9
  unsigned __int8 v3; // r4
  int v4; // r6
  int v5; // r2
  int v6; // r8
  int v7; // r5
  int v8; // r7
  unsigned int v9; // lr
  unsigned int v10; // r3
  unsigned __int8 v11; // r3
  int v12; // r12
  int result; // r0

  if ( !a2 )
    return 31;
  v2 = 1;
  v3 = 0;
  v4 = 1;
  LOBYTE(v5) = 0;
  v6 = 1;
  v7 = 1;
  v8 = 1;
  v9 = 128;
  while ( 1 )
  {
    v5 = (unsigned __int8)(v5 + 1);
    ++v3;
    v10 = *a1 & v9;
    v9 >>= 1;
    if ( v10 )
      v11 = v2 ^ 1;
    else
      v11 = v2;
    if ( v5 == 8 )
    {
      ++a1;
      LOBYTE(v5) = 0;
      v9 = 128;
    }
    v12 = (unsigned __int8)(v11 ^ v7);
    v2 = v4;
    if ( v3 >= a2 )
      break;
    v4 = v6;
    v7 = v8;
    v6 = v12;
    v8 = v11;
  }
  if ( v4 )
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
