int __fastcall sub_14CF44(int a1, unsigned int *a2)
{
  _DWORD *v2; // r3
  unsigned int v5; // r2
  int result; // r0

  v2 = (_DWORD *)(a1 + 16 * *a2);
  if ( (unsigned int)(v2[4] - 81) > 1 )
    return 0;
  v5 = *a2 + 4 + (((unsigned int)sub_26725C(v2[8], v2[9]) + 16) >> 4);
  result = a1 + 16 * (*a2 + 3);
  *a2 = v5;
  return result;
}
