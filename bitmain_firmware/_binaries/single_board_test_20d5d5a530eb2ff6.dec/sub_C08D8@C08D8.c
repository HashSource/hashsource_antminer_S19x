int __fastcall sub_C08D8(int a1, int a2, int a3, _BYTE *a4, int *a5, int a6)
{
  int result; // r0
  int **v7; // r4
  _BYTE *v8; // [sp+4h] [bp-4h] BYREF

  v8 = a4;
  result = sub_C1760(a2, a3, a6);
  v7 = (int **)result;
  if ( result )
  {
    *a5 = sub_C07C0((size_t *)result, &v8);
    sub_C0804(v7);
    return 1;
  }
  else
  {
    *a5 = 0;
  }
  return result;
}
