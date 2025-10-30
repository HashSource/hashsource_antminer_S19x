bool __fastcall sub_45054(int a1, int a2)
{
  double v2; // d0
  double v3; // r0
  _QWORD *v5; // [sp+1Ch] [bp-8h]

  v5 = (_QWORD *)(a1 + 216);
  sub_44FC8(a1, a2);
  v3 = sub_68E74(-65536, 0);
  return *v5 <= (unsigned __int64)sub_68F40(COERCE_UNSIGNED_INT64(v3 / v2), HIDWORD(COERCE_UNSIGNED_INT64(v3 / v2)));
}
