unsigned __int64 __fastcall sub_11558(unsigned __int64 a1, int a2)
{
  unsigned __int64 v2; // d17

  LODWORD(v2) = -a2 & 0x3F;
  return vshld_u64(a1, v2) | (a1 >> a2);
}
