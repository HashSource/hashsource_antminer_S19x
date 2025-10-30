bool __fastcall sub_310B8(unsigned int a1)
{
  _DWORD *v2; // r0

  v2 = (_DWORD *)sub_31060();
  return v2[5] <= a1 && v2[6] > a1 || v2[7] <= a1 && v2[8] > a1 || sub_1B859C(a1, ".plt") || sub_1B2450(a1) != 0;
}
