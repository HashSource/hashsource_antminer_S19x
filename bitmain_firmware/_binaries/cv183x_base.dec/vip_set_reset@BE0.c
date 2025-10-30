__int64 __fastcall vip_set_reset(unsigned int a1)
{
  unsigned __int64 v1; // x19
  int v2; // w0
  __int64 result; // x0

  v1 = a1;
  v2 = *(_DWORD *)qword_41D8;
  __dsb(0xDu);
  __dsb(0xEu);
  *(_DWORD *)qword_41D8 = v2 & 0xFFFF0000 | v1 & 0xCFFF;
  __dsb(0xEu);
  result = qword_41D8 + 4;
  *(_DWORD *)(qword_41D8 + 4) = (v1 >> 12) & 3;
  return result;
}
