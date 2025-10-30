int __fastcall sub_2AB804(unsigned __int64 a1, int a2, int a3, int a4)
{
  int v4; // lr
  int v5; // r3
  int v6; // r4

  if ( (a3 & 7) != 0 )
    sub_2A6BF0((int)"libbfd.c", 747, (int)"bfd_put_bits");
  v4 = a3 / 8;
  if ( a3 / 8 > 0 )
  {
    v5 = 0;
    do
    {
      if ( a4 )
        v6 = v4 - 1 - v5;
      else
        v6 = v5;
      ++v5;
      *(_BYTE *)(a2 + v6) = a1;
      a1 >>= 8;
    }
    while ( v4 != v5 );
  }
  return a1;
}
