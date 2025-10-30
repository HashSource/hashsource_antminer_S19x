bool __fastcall sub_17957C(_DWORD *a1, _DWORD *a2)
{
  int v4; // r5
  __int64 v5; // r0
  unsigned int v6; // r5
  int v7; // r4

  v4 = ((int (__fastcall *)(_DWORD))loc_26C09C)(*a1);
  v5 = sub_26BFE0(*a1);
  v6 = v4 + v5;
  v7 = ((int (__fastcall *)(_DWORD, _DWORD))loc_26C09C)(*a2, HIDWORD(v5));
  return v6 < v7 + (unsigned int)sub_26BFE0(*a2);
}
