bool __fastcall sub_1795C8(_DWORD *a1, _DWORD *a2)
{
  int v4; // r8
  __int64 v5; // r6
  int v6; // r5

  v4 = ((int (__fastcall *)(_DWORD))loc_26C09C)(*a1);
  v5 = sub_26BFE0(*a1) + (unsigned int)v4;
  v6 = ((int (__fastcall *)(_DWORD))loc_26C09C)(*a2);
  return sub_26BFE0(*a2) + (unsigned int)v6 == v5;
}
