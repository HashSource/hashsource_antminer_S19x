int __fastcall sub_8AB80(int a1)
{
  int v1; // r4
  int v2; // r0
  int result; // r0
  int v4; // r0

  v1 = *(_DWORD *)(a1 + 16);
  v2 = sub_10D378();
  result = sub_10F1B4(v1, v2);
  if ( result )
  {
    v4 = sub_10EFB0(result, 2);
    sub_D00F0(v4);
    return 1;
  }
  return result;
}
