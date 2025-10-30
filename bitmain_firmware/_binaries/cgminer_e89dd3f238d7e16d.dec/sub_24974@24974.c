int __fastcall sub_24974(int a1, unsigned int *a2)
{
  _BYTE v3[16]; // [sp+8h] [bp-2Ch] BYREF
  _DWORD v4[2]; // [sp+18h] [bp-1Ch]
  unsigned int j; // [sp+20h] [bp-14h]
  unsigned int i; // [sp+24h] [bp-10h]
  int v7; // [sp+28h] [bp-Ch]
  unsigned int v8; // [sp+2Ch] [bp-8h]

  v8 = 0;
  v7 = 0;
  memset(v3, 0, sizeof(v3));
  v4[0] = 0;
  *(_DWORD *)((char *)v4 + 3) = 0;
  for ( i = 0; i <= 0x1F && v8 <= 0x16; ++i )
  {
    if ( (a1 & (1 << i)) != 0 )
      v3[v8++] = i;
  }
  for ( j = 0; v8 > j && (int)j < (int)*a2; ++j )
    v7 |= 1 << v3[j];
  if ( v8 < *a2 )
    *a2 = v8;
  return v7;
}
