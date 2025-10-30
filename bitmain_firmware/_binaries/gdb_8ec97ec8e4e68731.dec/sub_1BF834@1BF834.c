int __fastcall sub_1BF834(int a1, int a2, int a3)
{
  int result; // r0
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = 0;
  result = sub_1BF738(a1, a3, &v5);
  if ( v5 )
    return sub_25A6BC(&word_3DB410, a3);
  return result;
}
