int __fastcall sub_251B6C(int a1, int a2, int a3)
{
  int v6; // r3
  _BYTE v8[16]; // [sp+4h] [bp-30h] BYREF
  _BYTE v9[32]; // [sp+14h] [bp-20h] BYREF

  ((void (__fastcall *)(_BYTE *, _DWORD, _DWORD))loc_251A14)(v9, *(_DWORD *)(a3 + 20), *(_DWORD *)(a3 + 24));
  v6 = *(_DWORD *)(a3 + 20);
  switch ( v6 )
  {
    case 8:
      sub_33294C(v8, a1, v9);
      break;
    case 16:
      sub_332F20(v8, a1, v9);
      break;
    case 4:
      sub_331A8C(v8, a1, v9);
      break;
    default:
      sub_946E0("Unknown decimal floating point type.");
  }
  return ((int (__fastcall *)(_BYTE *, int, int))loc_251814)(v8, a3, a2);
}
