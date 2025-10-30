int __fastcall sub_2DFE8(int *a1, unsigned int a2)
{
  unsigned int v5; // [sp+0h] [bp-Ch] BYREF
  char v6; // [sp+4h] [bp-8h]

  a1[19] = a2;
  sub_2B350((int)a1);
  if ( a1[55] )
    return 0;
  v5 = bswap32(a2);
  v6 = 0;
  sub_2DD0C(a1, (int)&v5);
  return 1;
}
