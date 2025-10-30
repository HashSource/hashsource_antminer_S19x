int __fastcall sub_A14D4(int a1, int a2)
{
  int v3; // r6
  int v4; // r5
  __int64 v5; // r0
  __int64 v6; // r0
  int v7; // r0
  unsigned int v9; // r5
  __int64 v10; // r0

  v3 = sub_A0870(a2);
  if ( v3 == sub_26BC70(a1) )
    return a1;
  if ( *(_DWORD *)(v3 + 20) > (unsigned int)dword_477C84 )
    sub_946E0("object size is larger than varsize-limit");
  if ( sub_26BF4C(a1) || (v9 = *(_DWORD *)(v3 + 20), v9 > *(_DWORD *)(sub_26BC70(a1) + 20)) )
  {
    v4 = sub_26BB08(v3);
  }
  else
  {
    v10 = sub_26BB80(v3);
    v4 = v10;
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, int))loc_26BD90)(v10, HIDWORD(v10), 0, 0, a1);
  }
  ((void (__fastcall *)(int, int))loc_26C744)(v4, a1);
  v5 = sub_26BCA0(a1);
  sub_26BCA8(v4, HIDWORD(v5), v5, HIDWORD(v5));
  v6 = sub_26BC90(a1);
  sub_26BC98(v4, HIDWORD(v6), v6, HIDWORD(v6));
  v7 = ((int (__fastcall *)(int))loc_26C09C)(a1);
  sub_26C178(v4, v7);
  return v4;
}
