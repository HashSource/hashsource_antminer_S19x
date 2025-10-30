__int64 __fastcall vip_set_intr_mask(int a1)
{
  __int64 result; // x0

  __dsb(0xEu);
  result = qword_41D8 + 12;
  *(_DWORD *)(qword_41D8 + 12) = a1;
  return result;
}
