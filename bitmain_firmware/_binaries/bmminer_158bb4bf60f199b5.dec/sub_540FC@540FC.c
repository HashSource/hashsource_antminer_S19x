bool __fastcall sub_540FC(int a1, int a2)
{
  double v2; // d0

  *(_DWORD *)(a1 + 76) = a2;
  sub_51DD0(a1);
  return *(_QWORD *)(a1 + 216) <= (unsigned __int64)sub_77970(
                                                      COERCE_UNSIGNED_INT64(4294901760.0 / v2),
                                                      HIDWORD(COERCE_UNSIGNED_INT64(4294901760.0 / v2)));
}
