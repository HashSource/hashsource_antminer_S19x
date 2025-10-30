int __fastcall sub_3F1DC(_BYTE *a1, int a2)
{
  int v2; // r6
  int v3; // lr
  char v4; // r9
  int v5; // r8
  int v6; // r7
  unsigned __int8 v7; // r3
  int v8; // r5
  unsigned int v9; // r4
  unsigned int v10; // r12
  bool v11; // zf
  int v12; // r12
  int v13; // r2
  int result; // r0

  if ( !a2 )
  {
    v12 = 1;
    result = 16;
    v13 = 1;
    v2 = 1;
LABEL_25:
    result |= 8u;
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
      v7 ^= 1u;
    v11 = v3 == 8;
    if ( v3 == 8 )
      ++a1;
    v12 = v7;
    if ( v3 == 8 )
      v3 = 0;
    LOBYTE(v13) = v4 ^ v7;
    if ( v11 )
      v9 = 128;
    v7 = v6;
    v13 = (unsigned __int8)v13;
    v4 = v2;
    if ( v8 == a2 )
      break;
    v6 = v5;
    v2 = v12;
    v5 = (unsigned __int8)v13;
  }
  if ( v6 )
    result = 16;
  else
    result = 0;
  if ( v5 )
    goto LABEL_25;
LABEL_17:
  if ( v13 )
    result |= 4u;
  if ( v2 )
    result |= 2u;
  if ( v12 )
    return result | 1;
  return result;
}
