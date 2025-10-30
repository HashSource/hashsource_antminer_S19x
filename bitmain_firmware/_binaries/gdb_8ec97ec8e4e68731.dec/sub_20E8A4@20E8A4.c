int __fastcall sub_20E8A4(int a1, int *a2, int a3, unsigned int a4, int a5)
{
  int *v9; // r4
  int v10; // r1
  int v11; // r5
  int result; // r0

  v9 = (int *)sub_242FDC(a1);
  v10 = a3;
  v11 = *v9;
  *v9 = a1;
  result = sub_20E7E8(a2, v10, a4, a5);
  *v9 = v11;
  return result;
}
