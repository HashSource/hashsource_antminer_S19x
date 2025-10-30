__int64 __fastcall sub_2B73D0(int a1, int a2, __int64 a3)
{
  bool v3; // zf
  __int64 result; // r0

  v3 = (*(_DWORD *)(a2 + 8) == 1) == a1;
  result = a3;
  if ( v3 )
  {
    *(_BYTE *)(HIDWORD(a3) + 3) = a3;
    *(_BYTE *)HIDWORD(a3) = BYTE3(a3);
    *(_BYTE *)(HIDWORD(a3) + 1) = BYTE2(a3);
    *(_BYTE *)(HIDWORD(a3) + 2) = BYTE1(a3);
  }
  else
  {
    *(_WORD *)HIDWORD(a3) = a3;
    *(_BYTE *)(HIDWORD(a3) + 2) = BYTE2(a3);
    *(_BYTE *)(HIDWORD(a3) + 3) = BYTE3(a3);
  }
  return result;
}
