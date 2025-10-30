int __fastcall sub_13BF4(char *a1, unsigned int a2, int *a3)
{
  char v3; // r5
  int v4; // r5
  int result; // r0
  int v6; // r4
  unsigned int v7; // r3
  bool v8; // zf
  bool v9; // zf
  _BOOL4 v10; // r0

  v3 = *a1;
  switch ( a2 )
  {
    case 2u:
      v4 = v3 & 0x1F;
      break;
    case 3u:
      v4 = v3 & 0xF;
      break;
    case 4u:
      v4 = v3 & 7;
      break;
    default:
      return 0;
  }
  v6 = (unsigned __int8)a1[1];
  if ( (v6 ^ 0x80u) > 0x3F )
    return 0;
  v7 = 1;
  while ( 1 )
  {
    ++v7;
    v4 = (v6 & 0x3F) + (v4 << 6);
    if ( a2 <= v7 )
      break;
    v6 = (unsigned __int8)a1[v7];
    if ( (v6 ^ 0x80u) > 0x3F )
      return 0;
  }
  if ( v4 >= 1114112 || (unsigned int)(v4 - 55296) <= 0x7FF )
    return 0;
  v8 = v4 == 127;
  if ( v4 <= 127 )
    v8 = a2 == 2;
  if ( v8 )
    return 0;
  result = 0;
  v9 = v4 == 2047;
  if ( v4 <= 2047 )
    v9 = a2 == 3;
  if ( !v9 )
  {
    v10 = v4 < 0x10000;
    if ( a2 != 4 )
      v10 = 0;
    if ( !v10 )
    {
      if ( a3 )
        *a3 = v4;
      return 1;
    }
    return 0;
  }
  return result;
}
