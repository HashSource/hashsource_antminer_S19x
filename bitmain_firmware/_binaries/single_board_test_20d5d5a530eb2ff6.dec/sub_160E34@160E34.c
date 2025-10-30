int __fastcall sub_160E34(int *a1, int *a2, int a3)
{
  int v6; // r4
  int result; // r0
  int v8; // r0
  void *v9; // [sp+4h] [bp-4h] BYREF

  v6 = sub_160AAC(a1);
  if ( v6 != 1 )
    return v6;
  v8 = sub_B6ECC(a1[4], 3, 0, (int)&v9);
  result = sub_B0A18(0, &v9, v8, a3);
  *a2 = result;
  if ( result )
    return v6;
  *a1 = 4096;
  return result;
}
