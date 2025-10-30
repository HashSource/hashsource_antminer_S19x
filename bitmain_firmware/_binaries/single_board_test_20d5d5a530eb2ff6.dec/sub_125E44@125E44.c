int __fastcall sub_125E44(int a1, int a2, int *a3)
{
  int v3; // r4
  int v6; // r2
  unsigned int *v8; // [sp+0h] [bp-8h] BYREF
  unsigned int v9; // [sp+4h] [bp-4h] BYREF

  v3 = 0;
  v8 = 0;
  v6 = sub_125B60(a2, &v8);
  if ( v6 >= 0 )
  {
    v9 = v8[1];
    v3 = sub_B0A18(a3, (void **)&v9, v6, a1);
  }
  sub_BAE3C((int)v8);
  return v3;
}
