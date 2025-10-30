int __fastcall sub_125DB0(int a1, int (__fastcall *a2)(int, unsigned int *, int), int a3, int a4)
{
  int v4; // r4
  int v7; // r2
  unsigned int *v9; // [sp+0h] [bp-8h] BYREF
  unsigned int v10; // [sp+4h] [bp-4h] BYREF

  v4 = 0;
  v9 = 0;
  v7 = sub_125B60(a3, &v9);
  if ( v7 >= 0 )
  {
    v10 = v9[1];
    v4 = a2(a4, &v10, v7);
  }
  sub_BAE3C((int)v9);
  return v4;
}
