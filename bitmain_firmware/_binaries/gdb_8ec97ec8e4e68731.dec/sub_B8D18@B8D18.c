int __fastcall sub_B8D18(int a1)
{
  int v2; // r5
  int v4; // [sp+0h] [bp-Ch] BYREF
  int v5; // [sp+4h] [bp-8h] BYREF

  v2 = sub_1DD58C(a1);
  v4 = sub_1DFB3C(a1);
  ((void (__fastcall *)(int, int *, int *))loc_1690CC)(v2, &v4, &v5);
  return sub_1DFC60(a1, v4 + v5);
}
