int __fastcall sub_78BF4(_BYTE *a1, unsigned int a2)
{
  int v2; // r7
  int v3; // r2
  char v4; // lr
  int v5; // r12
  int v6; // r8
  char v7; // r9
  unsigned int v8; // r4
  unsigned int v9; // r6
  int v10; // r10
  unsigned int v11; // r3
  int v12; // r3
  int v13; // r5
  int result; // r0

  if ( !a2 )
  {
    v12 = 1;
    result = 16;
    v13 = 1;
    v2 = 1;
LABEL_22:
    result |= 8u;
    goto LABEL_14;
  }
  v2 = 1;
  LOBYTE(v3) = 0;
  v4 = 1;
  v5 = 1;
  v6 = 1;
  v7 = 1;
  LOBYTE(v8) = 0;
  v9 = 128;
  while ( 1 )
  {
    v3 = (unsigned __int8)(v3 + 1);
    v8 = (unsigned __int8)(v8 + 1);
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
      LOBYTE(v3) = 0;
      v9 = 128;
    }
    v13 = (unsigned __int8)(v12 ^ v4);
    v7 = v6;
    v4 = v2;
    if ( v8 >= a2 )
      break;
    v2 = (unsigned __int8)v12;
    v5 = v13;
    v6 = v10;
  }
  if ( v6 )
    result = 16;
  else
    result = 0;
  if ( v5 )
    goto LABEL_22;
LABEL_14:
  if ( v13 )
    result |= 4u;
  if ( v2 )
    result |= 2u;
  if ( v12 )
    return result | 1;
  return result;
}
