unsigned int __fastcall sub_EA7C4(_DWORD *a1)
{
  int v1; // r2
  unsigned int result; // r0
  int v3; // r5
  unsigned __int8 *v4; // r4
  int v5; // r0
  unsigned __int8 *v6; // r5
  int v7; // r2
  int v8; // t1
  char v9; // r3

  v1 = a1[1];
  switch ( *a1 )
  {
    case 0:
      v3 = *(_DWORD *)(v1 + 12);
      v4 = *(unsigned __int8 **)(v1 + 16);
      v5 = v3 << 20;
      if ( v3 > 0 )
      {
        v6 = &v4[v3];
        v7 = 0;
        do
        {
          v8 = *v4++;
          v9 = (char)v7 % 24;
          v7 += 3;
          v5 ^= v8 << v9;
        }
        while ( v6 != v4 );
      }
      result = v5 & 0x3FFFFFFF;
      break;
    case 1:
      result = (unsigned int)OPENSSL_LH_strhash(*(unsigned __int8 **)v1) & 0x3FFFFFFF | (*a1 << 30);
      break;
    case 2:
      result = (unsigned int)OPENSSL_LH_strhash(*(unsigned __int8 **)(v1 + 4)) & 0x3FFFFFFF | (*a1 << 30);
      break;
    case 3:
      result = *(_DWORD *)(v1 + 8) & 0x3FFFFFFF | 0xC0000000;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
