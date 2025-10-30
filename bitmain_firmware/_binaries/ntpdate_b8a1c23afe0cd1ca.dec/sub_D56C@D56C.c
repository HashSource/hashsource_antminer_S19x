int *__fastcall sub_D56C(int a1)
{
  int v1; // r6
  signed int v2; // r6
  int *result; // r0
  int v4; // r3
  int v5; // r4
  int *i; // lr
  int v7; // r1

  dword_33328 = 0;
  dword_33320 = 0;
  dword_3332C = 0;
  dword_33324 = 0;
  v1 = dword_33330;
  dword_33330 = 0;
  v2 = a1 + v1;
  result = (int *)sub_9740(0, v2, 0x8A4u, 0);
  if ( v2 > 0 )
  {
    v4 = 0;
    v5 = dword_33334;
    for ( i = result; ; i += 553 )
    {
      v7 = dword_33320;
      ++v4;
      *i = v5;
      v5 = (int)i;
      dword_33320 = v7 + 1;
      ++dword_33328;
      if ( v2 == v4 )
        break;
    }
    dword_33334 = (int)&result[553 * v2 - 553];
  }
  ++dword_3332C;
  return result;
}
