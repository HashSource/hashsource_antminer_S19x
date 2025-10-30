__int64 __fastcall sub_1865EC(int a1, int a2)
{
  __int64 v4; // r6
  __int64 result; // r0

  sub_23F788();
  sub_26BCFC(a2);
  sub_26BC80(a1);
  sub_26BC70(a2);
  v4 = sub_230544(&dword_4899A0, 16);
  result = sub_26BC70(a2);
  if ( *(_DWORD *)(result + 20) != v4 )
    sub_946E0("Unable to write siginfo", HIDWORD(result));
  return result;
}
