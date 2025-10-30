int __fastcall sub_2DBCC(_BYTE *a1, unsigned __int8 a2)
{
  _BYTE v4[5]; // [sp+Ch] [bp-18h]
  int v5; // [sp+14h] [bp-10h]
  char v6; // [sp+18h] [bp-Ch]
  bool v7; // [sp+1Bh] [bp-9h]
  unsigned __int8 v8; // [sp+1Ch] [bp-8h]
  char v9; // [sp+1Dh] [bp-7h]
  unsigned __int8 v10; // [sp+1Eh] [bp-6h]
  unsigned __int8 i; // [sp+1Fh] [bp-5h]

  v5 = 16843009;
  v6 = 1;
  v10 = 0x80;
  v9 = 0;
  for ( i = 0; i < (unsigned int)a2; ++i )
  {
    v7 = (v10 & *a1) != 0;
    v4[0] = v7 ^ v6;
    v4[1] = v5;
    v4[2] = v7 ^ v6 ^ BYTE1(v5);
    *(_WORD *)&v4[3] = HIWORD(v5);
    v10 >>= 1;
    if ( ++v9 == 8 )
    {
      v10 = 0x80;
      v9 = 0;
      ++a1;
    }
    v5 = *(_DWORD *)v4;
    v6 = v4[4];
  }
  v8 = 0;
  if ( v6 )
    v8 = 16;
  if ( HIBYTE(v5) )
    v8 |= 8u;
  if ( BYTE2(v5) )
    v8 |= 4u;
  if ( BYTE1(v5) )
    v8 |= 2u;
  if ( (_BYTE)v5 )
    v8 |= 1u;
  return v8;
}
