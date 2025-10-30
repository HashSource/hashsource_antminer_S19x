int __fastcall sub_58FE8(int a1)
{
  int v2; // r5
  int *v3; // r4
  int v4; // r0
  int v5; // r5
  int result; // r0

  v2 = sub_191588(dword_487668, "console");
  v3 = (int *)sub_242FDC(v2);
  v4 = sub_191664(v2);
  v5 = *v3;
  *v3 = v4;
  result = sub_58C5C(a1);
  *v3 = v5;
  return result;
}
