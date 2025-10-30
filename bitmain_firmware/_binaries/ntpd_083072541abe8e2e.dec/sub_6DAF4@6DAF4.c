int __fastcall sub_6DAF4(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r4
  unsigned __int64 v3; // r0
  bool v4; // cf
  _BOOL4 v5; // r0
  int v6; // r1

  v2 = *a1;
  v3 = *a2;
  v4 = v2 >= v3;
  v5 = v2 > v3;
  v6 = !v4;
  return v5 - v6;
}
