int __fastcall sub_253C9C(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r0
  int v9; // r0
  double v11; // [sp+0h] [bp-10h] BYREF
  double v12; // [sp+8h] [bp-8h] BYREF

  v8 = ((int (__fastcall *)(int))loc_173460)(a3);
  ((void (__fastcall *)(int, int, int, double *))loc_2539A8)(a1, v8, a2, &v11);
  v9 = ((int (__fastcall *)(int))loc_173460)(a5);
  ((void (__fastcall *)(int, int, int, double *))loc_2539A8)(a1, v9, a4, &v12);
  if ( v11 == v12 )
    return 0;
  if ( v11 >= v12 )
    return 1;
  return -1;
}
