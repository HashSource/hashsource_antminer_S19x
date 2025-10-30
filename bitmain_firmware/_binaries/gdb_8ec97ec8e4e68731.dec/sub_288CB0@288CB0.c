int __fastcall sub_288CB0(int a1, int a2, void *a3)
{
  void *v3; // r5
  int result; // r0

  v3 = off_46DED0;
  off_46DED0 = a3;
  result = sub_288BF4(a1, a2);
  off_46DED0 = v3;
  return result;
}
