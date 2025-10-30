__int64 __fastcall vip_set_isp_clk(unsigned int a1)
{
  unsigned __int64 v1; // x19
  int v2; // w1
  __int64 result; // x0

  v1 = a1;
  v2 = *(_DWORD *)qword_41D8;
  __dsb(0xDu);
  __dsb(0xEu);
  result = qword_41D8;
  *(_DWORD *)qword_41D8 = v2 & 0xFFC3FFFF
                        | (((v1 >> 18) & 1) << 18) & 0xFFC7FFFF
                        | (((v1 >> 19) & 1) << 19) & 0xFFCFFFFF
                        | (((v1 >> 20) & 1) << 20) & 0xFFDFFFFF
                        | (((v1 >> 21) & 1) << 21);
  return result;
}
