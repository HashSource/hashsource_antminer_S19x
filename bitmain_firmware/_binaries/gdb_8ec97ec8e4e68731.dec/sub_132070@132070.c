int __fastcall sub_132070(int a1, int a2)
{
  int v3; // r4
  __int64 v5; // r2
  int v6; // r1
  __int64 v8; // [sp+8h] [bp-10h] BYREF
  int v9; // [sp+10h] [bp-8h]

  v3 = *(_DWORD *)(a1 + 16);
  ((void (__fastcall *)(_DWORD))loc_11EB1C)(*(_DWORD *)(a1 + 20));
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 176);
    v6 = *(unsigned __int8 *)(v3 + 14);
  }
  else
  {
    ((void (__fastcall *)(int, _DWORD, _DWORD, _DWORD, __int64 (__fastcall *)(int, int, int, int, int), __int64 *))loc_12DAAC)(
      a1,
      0,
      0,
      0,
      sub_11C488,
      &v8);
    v5 = v8;
    v6 = v9;
  }
  return sub_1202A8(a2, v5, v6);
}
