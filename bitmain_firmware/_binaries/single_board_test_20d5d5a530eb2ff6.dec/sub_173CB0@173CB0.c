unsigned int __fastcall sub_173CB0(unsigned int *a1, _BYTE *a2, int a3, int a4)
{
  unsigned int v5; // r5
  unsigned int v6; // r0
  unsigned int v7; // r3
  unsigned int v8; // r2
  unsigned int v10; // [sp+0h] [bp-Ch] BYREF
  unsigned int v11; // [sp+4h] [bp-8h]

  v5 = _byteswap_ulong(*a1);
  v6 = _byteswap_ulong(a1[1]);
  v10 = v5;
  v11 = v6;
  if ( a4 )
    sub_173D20(&v10, a3);
  else
    sub_1740BC(&v10, a3);
  v7 = v10;
  v8 = v11;
  a2[3] = v10;
  *a2 = HIBYTE(v7);
  a2[1] = BYTE2(v7);
  a2[2] = BYTE1(v7);
  a2[7] = v8;
  a2[4] = HIBYTE(v8);
  a2[5] = BYTE2(v8);
  a2[6] = BYTE1(v8);
  return HIWORD(v8);
}
