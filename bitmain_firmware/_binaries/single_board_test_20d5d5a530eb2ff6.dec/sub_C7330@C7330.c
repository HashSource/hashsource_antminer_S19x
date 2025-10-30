int __fastcall sub_C7330(int *a1, int *a2, int a3, int a4, int a5, int a6)
{
  bool v6; // zf
  int v7; // r3
  int v9; // [sp+10h] [bp-8h] BYREF
  int v10; // [sp+14h] [bp-4h] BYREF

  v10 = a5;
  v6 = a4 == 0;
  if ( a4 )
    v6 = a5 == 0;
  v9 = a4;
  v7 = !v6;
  return sub_C720C(a1, a2, a3, v7, &v9, (int)&v10, a6);
}
