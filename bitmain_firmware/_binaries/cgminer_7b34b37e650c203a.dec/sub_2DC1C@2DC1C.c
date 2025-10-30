bool __fastcall sub_2DC1C(int a1, int a2)
{
  double v2; // d0

  *(_DWORD *)(a1 + 76) = a2;
  sub_2B350(a1);
  return *(_QWORD *)(a1 + 216) <= (unsigned __int64)sub_4A1D8(
                                                      COERCE_UNSIGNED_INT64(4294901760.0 / v2),
                                                      HIDWORD(COERCE_UNSIGNED_INT64(4294901760.0 / v2)));
}
