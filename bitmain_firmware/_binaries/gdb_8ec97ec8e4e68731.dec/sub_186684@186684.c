__int64 __fastcall sub_186684(int a1)
{
  __int64 v2; // r6
  __int64 result; // r0

  sub_23F788();
  sub_26BCFC(a1);
  sub_26BC80(a1);
  sub_26BC70(a1);
  v2 = sub_22FF08(&dword_4899A0, 16);
  result = sub_26BC70(a1);
  if ( *(_DWORD *)(result + 20) != v2 )
    sub_946E0("Unable to read siginfo", HIDWORD(result));
  return result;
}
