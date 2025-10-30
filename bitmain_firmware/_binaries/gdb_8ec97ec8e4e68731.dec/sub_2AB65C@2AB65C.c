int __fastcall sub_2AB65C(unsigned __int8 *a1)
{
  return *a1 | ((a1[1] | ((a1[2] | ((a1[3] | (*((_DWORD *)a1 + 1) << 8)) << 8)) << 8)) << 8);
}
