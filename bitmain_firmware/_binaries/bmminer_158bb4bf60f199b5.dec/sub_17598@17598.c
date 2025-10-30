int __fastcall sub_17598(int a1)
{
  _DWORD *v2; // r4
  int i; // r5
  int v4; // r1
  int result; // r0

  v2 = &dword_9F80C[27 * a1];
  for ( i = 0; i != 4; ++i )
  {
    v4 = *((unsigned __int8 *)v2 + 13);
    v2 += 6;
    result = sub_1A958(a1, v4, 0);
  }
  return result;
}
