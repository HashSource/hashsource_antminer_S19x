int __fastcall sub_288CD8(int a1, void *a2)
{
  void *v2; // r5
  int result; // r0

  v2 = off_46DED0;
  off_46DED0 = a2;
  result = sub_288BF4(a1, 0);
  off_46DED0 = v2;
  return result;
}
