int __fastcall sub_CF3B0(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int result; // r0

  v8 = sub_16F654(a1);
  result = ((int (__fastcall *)(int))loc_16D8FC)(v8) != 0;
  if ( a1 == a3 )
    result |= 1u;
  if ( result )
    return a2 == a4;
  return result;
}
