int __fastcall sub_251E50(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  unsigned int v7; // r1
  int result; // r0
  _BYTE v9[28]; // [sp+0h] [bp-88h] BYREF
  _BYTE v10[36]; // [sp+1Ch] [bp-6Ch] BYREF
  _BYTE v11[36]; // [sp+40h] [bp-48h] BYREF
  int v12; // [sp+64h] [bp-24h] BYREF
  char v13; // [sp+6Ch] [bp-1Ch]
  __int16 v14; // [sp+6Eh] [bp-1Ah]

  v5 = a3;
  sub_2518D0(a2, a3, (int)v10);
  sub_2518D0(a4, a5, (int)v11);
  v7 = *(_DWORD *)(v5 + 20);
  if ( v7 <= *(_DWORD *)(a5 + 20) )
  {
    v5 = a5;
    v7 = *(_DWORD *)(a5 + 20);
  }
  ((void (__fastcall *)(_BYTE *, unsigned int, _DWORD))loc_251A14)(v9, v7, *(_DWORD *)(v5 + 24));
  sub_32B308(&v12, v10, v11, v9);
  sub_2513A0((int)v9);
  if ( (v13 & 0x30) != 0 )
    sub_946E0("Comparison with an invalid number (NaN).");
  if ( v14 || v12 != 1 || (result = v13 & 0x70, (v13 & 0x70) != 0) )
  {
    if ( v13 < 0 )
      return -1;
    else
      return 1;
  }
  return result;
}
