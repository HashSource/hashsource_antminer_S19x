int __fastcall sub_1A888(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r6
  int v9; // r6
  int v11; // [sp+0h] [bp-8h] BYREF
  int v12; // [sp+4h] [bp-4h]

  v7 = sub_1DD58C(a1);
  if ( *(_DWORD *)(sub_163E78(v7) + 32) )
    v8 = 0x1000000;
  else
    v8 = 32;
  ((void (__fastcall *)(int, int, int *))loc_1DFAFC)(a1, 25, &v11);
  if ( (a3 & 1) != 0 )
  {
    ((void (__fastcall *)(int, int, int, int))loc_1DFC20)(a1, 25, v8 | v11, v12);
    return ((int (__fastcall *)(int, int, unsigned int, _DWORD))loc_1DFC20)(a1, 15, a3 & 0xFFFFFFFE, 0);
  }
  else
  {
    v9 = ~v8;
    if ( (a3 & 2) != 0 )
    {
      sub_946B0("Single-stepping BX to non-word-aligned ARM instruction.", 0, a3 & 2, a3 & 2);
      ((void (__fastcall *)(int, int, int, int))loc_1DFC20)(a1, 25, v11 & v9, v12);
      return ((int (__fastcall *)(int, int, unsigned int, _DWORD))loc_1DFC20)(a1, 15, a3 & 0xFFFFFFFC, 0);
    }
    else
    {
      ((void (__fastcall *)(int, int, int, int))loc_1DFC20)(a1, 25, v11 & v9, v12);
      return ((int (__fastcall *)(int, int, int, int))loc_1DFC20)(a1, 15, a3, a4);
    }
  }
}
