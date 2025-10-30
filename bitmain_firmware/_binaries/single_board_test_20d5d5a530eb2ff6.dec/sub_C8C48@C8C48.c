int __fastcall sub_C8C48(int a1, int a2, int a3, _BYTE *a4, int *a5, int a6, int a7, int a8)
{
  int result; // r0
  int **v9; // r4
  _BYTE *v10; // [sp+Ch] [bp-4h] BYREF

  v10 = a4;
  result = sub_C9868(a2, a3, a6, a7, a8);
  v9 = (int **)result;
  if ( result )
  {
    *a5 = sub_C499C((size_t *)result, &v10);
    sub_C49E8(v9);
    return 1;
  }
  else
  {
    *a5 = 0;
  }
  return result;
}
