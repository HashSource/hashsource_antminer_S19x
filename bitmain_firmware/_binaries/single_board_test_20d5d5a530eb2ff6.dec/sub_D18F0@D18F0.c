int __fastcall sub_D18F0(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  int result; // r0
  int *v11; // r5
  _BOOL4 v12; // r4

  result = sub_D14F4();
  v11 = (int *)result;
  if ( result )
  {
    sub_D8DA4(result, 1);
    v12 = sub_D1520(v11, a5, a6) && sub_D16D8((int)v11, a1, a2) && sub_D16E4(v11, a3, a4) != 0;
    sub_D1504(v11);
    return v12;
  }
  return result;
}
