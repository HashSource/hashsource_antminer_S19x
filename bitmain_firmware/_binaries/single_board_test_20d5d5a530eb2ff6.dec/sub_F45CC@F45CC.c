int __fastcall sub_F45CC(_DWORD *a1, unsigned int a2, int a3)
{
  int v4; // r4
  int result; // r0
  int v6; // r5

  v4 = a1[1];
  if ( a1[6] - v4 < a2 )
  {
    sub_D0048(36, 114, 125, (int)"crypto/rand/rand_lib.c", 821);
    return 0;
  }
  else
  {
    result = 1;
    if ( a2 )
    {
      v6 = a1[7];
      result = 1;
      a1[1] = a2 + v4;
      a1[7] = a3 + v6;
    }
  }
  return result;
}
