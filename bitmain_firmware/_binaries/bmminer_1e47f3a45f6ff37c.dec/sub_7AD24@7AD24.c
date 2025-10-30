int __fastcall sub_7AD24(_BYTE *a1, unsigned int a2)
{
  int v2; // r5
  int v3; // r2
  char v4; // r8
  int v5; // r7
  int v6; // r6
  char v7; // r9
  unsigned __int8 v8; // r12
  unsigned int v9; // r4
  int v10; // r3
  int v11; // lr
  int result; // r0

  if ( !a2 )
  {
    v10 = 1;
    result = 16;
    v11 = 1;
    v2 = 1;
LABEL_24:
    result |= 8u;
    goto LABEL_16;
  }
  v2 = 1;
  LOBYTE(v3) = 0;
  v4 = 1;
  v5 = 1;
  v6 = 1;
  v7 = 1;
  v8 = 0;
  v9 = 128;
  while ( 1 )
  {
    ++v8;
    v3 = (unsigned __int8)(v3 + 1);
    if ( (*a1 & (unsigned __int8)v9) != 0 )
      LOBYTE(v10) = v7 ^ 1;
    else
      LOBYTE(v10) = v7;
    v9 >>= 1;
    v10 = (unsigned __int8)v10;
    if ( v3 == 8 )
      ++a1;
    LOBYTE(v11) = v4 ^ v10;
    if ( v3 == 8 )
    {
      LOBYTE(v3) = 0;
      v9 = 128;
    }
    v11 = (unsigned __int8)v11;
    v7 = v6;
    v4 = v2;
    if ( v8 >= a2 )
      break;
    v6 = v5;
    v2 = (unsigned __int8)v10;
    v5 = (unsigned __int8)v11;
  }
  if ( v6 )
    result = 16;
  else
    result = 0;
  if ( v5 )
    goto LABEL_24;
LABEL_16:
  if ( v11 )
    result |= 4u;
  if ( v2 )
    result |= 2u;
  if ( v10 )
    return result | 1;
  return result;
}
