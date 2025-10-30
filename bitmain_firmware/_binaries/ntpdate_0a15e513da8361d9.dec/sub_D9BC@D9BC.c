int *__fastcall sub_D9BC(int a1)
{
  int v1; // r4
  signed int v2; // r4
  int *result; // r0
  int v4; // r3
  int v5; // r6
  int *i; // lr
  int v7; // r1

  dword_3332C = 0;
  dword_33324 = 0;
  dword_33330 = 0;
  dword_33328 = 0;
  v1 = dword_33334;
  dword_33334 = 0;
  v2 = a1 + v1;
  result = (int *)sub_9B30(0, v2, 0x8A4u, 0);
  if ( v2 > 0 )
  {
    v4 = 0;
    v5 = dword_33338;
    for ( i = result; ; i += 553 )
    {
      ++v4;
      ++dword_33324;
      v7 = dword_3332C;
      *i = v5;
      v5 = (int)i;
      dword_3332C = v7 + 1;
      if ( v2 == v4 )
        break;
    }
    dword_33338 = (int)&result[553 * v2 - 553];
  }
  ++dword_33330;
  return result;
}
