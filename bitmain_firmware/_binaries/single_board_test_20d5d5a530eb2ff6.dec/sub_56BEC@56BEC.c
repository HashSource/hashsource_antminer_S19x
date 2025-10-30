__int64 __fastcall sub_56BEC(int a1, int a2)
{
  __int64 result; // r0

  LODWORD(result) = a1 + 0x40000;
  HIDWORD(result) = a2 != 0;
  *(_BYTE *)(result + 26) = BYTE4(result);
  return result;
}
