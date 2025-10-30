bool __fastcall sub_A0B30(int a1)
{
  int v1; // r0

  v1 = sub_A0A60(a1);
  return v1 && **(_BYTE **)(v1 + 24) == 3 && sub_172888(v1, "P_BOUNDS", 1) != 0;
}
