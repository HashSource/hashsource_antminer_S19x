int __fastcall sub_AAECC(int *a1, int a2)
{
  int v2; // r1

  v2 = *a1 & ~a2;
  *a1 = v2;
  return v2;
}
