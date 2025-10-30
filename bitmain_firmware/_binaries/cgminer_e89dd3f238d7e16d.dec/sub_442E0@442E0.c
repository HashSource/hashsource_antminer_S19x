bool __fastcall sub_442E0(int a1)
{
  double v1; // d0
  double v2; // r0
  unsigned __int64 v3; // r0
  unsigned __int64 v5; // [sp+10h] [bp-14h]

  sub_44244(a1);
  v2 = sub_68204(-65536, 0);
  v5 = sub_682D0(COERCE_UNSIGNED_INT64(v2 / v1), HIDWORD(COERCE_UNSIGNED_INT64(v2 / v1)));
  sub_2CDE4();
  return v5 >= v3;
}
