int __fastcall sub_2883C(_BYTE *a1, int a2)
{
  int v2; // r7
  int v3; // r4
  char v4; // r8
  int v5; // lr
  int v6; // r12
  char v7; // r9
  int v8; // r6
  unsigned int v9; // r5
  int v10; // r10
  unsigned int v11; // r3
  int v12; // r3
  int v13; // r2
  int v14; // r1
  int result; // r0

  if ( !a2 )
  {
    v12 = 1;
    result = 16;
    v13 = 1;
    v14 = 1;
LABEL_22:
    result |= 8u;
    goto LABEL_14;
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
    v10 = v5;
    v11 = *a1 & v9;
    v9 >>= 1;
    if ( v11 )
      LOBYTE(v12) = v7 ^ 1;
    else
      LOBYTE(v12) = v7;
    v12 = (unsigned __int8)v12;
    if ( v3 == 8 )
    {
      ++a1;
      v3 = 0;
      v9 = 128;
    }
    v13 = (unsigned __int8)(v12 ^ v4);
    v7 = v6;
    v4 = v2;
    if ( a2 == v8 )
      break;
    v2 = (unsigned __int8)v12;
    v5 = v13;
    v6 = v10;
  }
  v14 = v2;
  if ( v6 )
    result = 16;
  else
    result = 0;
  if ( v5 )
    goto LABEL_22;
LABEL_14:
  if ( v13 )
    result |= 4u;
  if ( v14 )
    result |= 2u;
  if ( v12 )
    return result | 1;
  return result;
}
