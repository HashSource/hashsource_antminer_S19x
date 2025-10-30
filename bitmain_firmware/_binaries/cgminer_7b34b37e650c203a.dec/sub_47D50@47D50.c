int __fastcall sub_47D50(char *a1, unsigned int a2, int *a3)
{
  char v3; // lr
  int v4; // lr
  int result; // r0
  int v6; // r3
  _BYTE *v7; // r0
  unsigned int v8; // r12
  int v9; // t1
  bool v10; // zf
  _BOOL4 v11; // r3
  _BOOL4 v12; // r1

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
  v7 = a1 + 1;
  v8 = 1;
  while ( 1 )
  {
    ++v8;
    v4 = (v6 & 0x3F) + (v4 << 6);
    if ( a2 <= v8 )
      break;
    v9 = (unsigned __int8)*++v7;
    LOBYTE(v6) = v9;
    if ( (v9 ^ 0x80u) > 0x3F )
      return 0;
  }
  if ( v4 >= 1114112 || (unsigned int)(v4 - 55296) < 0x800 )
    return 0;
  v10 = v4 == 127;
  if ( v4 <= 127 )
    v10 = a2 == 2;
  result = v10;
  if ( v10 )
    return 0;
  v11 = a2 == 3;
  if ( v4 >= 2048 )
    v11 = 0;
  if ( !v11 )
  {
    v12 = a2 == 4;
    if ( v4 >= 0x10000 )
      v12 = 0;
    if ( !v12 )
    {
      result = 1;
      if ( a3 )
        *a3 = v4;
      return result;
    }
    return 0;
  }
  return result;
}
