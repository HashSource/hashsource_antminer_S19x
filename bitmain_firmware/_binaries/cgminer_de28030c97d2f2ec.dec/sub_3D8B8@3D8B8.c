void __fastcall sub_3D8B8(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  char v8[16]; // [sp+24h] [bp-850h] BYREF
  char v9[64]; // [sp+824h] [bp-50h] BYREF
  int v10; // [sp+864h] [bp-10h]
  time_t v11; // [sp+868h] [bp-Ch]
  int v12; // [sp+86Ch] [bp-8h]

  v12 = *(_DWORD *)(a4 + 36);
  v11 = time(0);
  v10 = v11 - *(_DWORD *)(a4 + 48);
  if ( (byte_87768 || v10 > 0) && (byte_91F58 || byte_87769 || dword_8697C > 5) )
  {
    snprintf(v8, 0x800u, "Pool %d stratum share result lag time %d seconds", **(_DWORD **)(v12 + 260), v10);
    sub_1E4EC(6, v8, 0);
  }
  sub_33678(v12, v9);
  sub_3295C(a1, a2, a3, v12, v9, 0, byte_6F818);
}
