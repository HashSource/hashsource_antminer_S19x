int *__fastcall sub_113464(int a1, int a2)
{
  int *result; // r0
  int v4; // [sp+4h] [bp-4h]

  result = *(int **)(a1 + 32);
  if ( result )
    return (int *)(sub_10BD3C(result, a2) != 0);
  v4 = a2;
  result = (int *)sub_10BFCC();
  a2 = v4;
  *(_DWORD *)(a1 + 32) = result;
  if ( result )
    return (int *)(sub_10BD3C(result, a2) != 0);
  return result;
}
