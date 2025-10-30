int __fastcall sub_24B450(int a1, int a2)
{
  _DWORD *v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v8; // [sp+0h] [bp-2Ch] BYREF
  _BYTE v9[36]; // [sp+4h] [bp-28h] BYREF

  v8 = 0;
  v3 = sub_24B3B0(&v8);
  sub_259F10("Data collected at tracepoint %d, trace frame %d:\n", dword_48A8C0, dword_48A8BC);
  v4 = ((int (__fastcall *)(_BYTE *))loc_23FF20)(v9);
  v5 = sub_15F70C(v4);
  sub_15E10C(v5);
  v6 = sub_24A618(v3[4]);
  sub_248804(v6, 0, v8, a2);
  return ((int (__fastcall *)(_BYTE *))loc_23FC8C)(v9);
}
