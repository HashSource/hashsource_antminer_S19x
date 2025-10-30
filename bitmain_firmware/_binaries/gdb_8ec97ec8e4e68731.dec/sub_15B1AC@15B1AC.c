int __fastcall sub_15B1AC(int a1, int a2)
{
  __int64 v4; // r0
  int v5; // r7
  int v6; // r4
  int v7; // r4

  v4 = sub_15ECB4(a2);
  v5 = v4;
  v6 = ((int (__fastcall *)(_DWORD, _DWORD))loc_166E9C)(v4, HIDWORD(v4));
  if ( v6 + ((int (__fastcall *)(int))loc_166F48)(v5) <= a1 )
    JUMPOUT(0x258020);
  v7 = ((int (__fastcall *)(int, int))loc_15B058)(a2, a1);
  ((void (*)(void))loc_26E00C)();
  return v7;
}
