int __fastcall sub_3EAEC(_BYTE *a1, int a2)
{
  unsigned __int8 v2; // r3
  int v3; // r12
  int v4; // r6
  int v5; // r8
  int v6; // r5
  int v7; // r7
  int v8; // r4
  unsigned int v9; // lr
  unsigned int v10; // r2
  int v11; // r9
  int v12; // r2
  int result; // r0

  if ( !a2 )
  {
    v11 = 1;
    result = 28;
LABEL_21:
    result |= 2u;
    goto LABEL_17;
  }
  v2 = 1;
  v3 = 0;
  v4 = 1;
  v5 = 1;
  v6 = 1;
  v7 = 1;
  v8 = 0;
  v9 = 128;
  while ( 1 )
  {
    ++v3;
    ++v8;
    v10 = *a1 & v9;
    v9 >>= 1;
    if ( v10 )
      v2 ^= 1u;
    v11 = v2;
    if ( v3 == 8 )
    {
      ++a1;
      v3 = 0;
      v9 = 128;
    }
    v12 = (unsigned __int8)(v2 ^ v6);
    v2 = v4;
    if ( a2 == v8 )
      break;
    v4 = v5;
    v6 = v7;
    v5 = v12;
    v7 = v11;
  }
  if ( v4 )
    result = 16;
  else
    result = 0;
  if ( v5 )
    result |= 8u;
  if ( v11 != v6 )
    result |= 4u;
  if ( v7 )
    goto LABEL_21;
LABEL_17:
  if ( v11 )
    return result | 1;
  return result;
}
