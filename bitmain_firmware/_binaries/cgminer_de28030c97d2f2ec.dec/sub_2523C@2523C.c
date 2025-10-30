int __fastcall sub_2523C(int a1, unsigned int *a2)
{
  _BYTE v3[20]; // [sp+8h] [bp-2Ch] BYREF
  __int16 v4; // [sp+1Ch] [bp-18h]
  char v5; // [sp+1Eh] [bp-16h]
  unsigned int j; // [sp+20h] [bp-14h]
  unsigned int i; // [sp+24h] [bp-10h]
  int v8; // [sp+28h] [bp-Ch]
  unsigned int v9; // [sp+2Ch] [bp-8h]

  v9 = 0;
  v8 = 0;
  memset(v3, 0, sizeof(v3));
  v4 = 0;
  v5 = 0;
  for ( i = 0; i <= 0x1F && v9 <= 0x16; ++i )
  {
    if ( (a1 & (1 << i)) != 0 )
      v3[v9++] = i;
  }
  for ( j = 0; j < v9 && (int)*a2 > (int)j; ++j )
    v8 |= 1 << v3[j];
  if ( *a2 > v9 )
    *a2 = v9;
  return v8;
}
