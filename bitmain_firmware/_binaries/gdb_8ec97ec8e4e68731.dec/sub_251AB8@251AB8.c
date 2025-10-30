int __fastcall sub_251AB8(int a1, int a2, int a3, _DWORD *a4)
{
  int v7; // r2
  _BYTE v9[16]; // [sp+4h] [bp-30h] BYREF
  _BYTE v10[32]; // [sp+14h] [bp-20h] BYREF

  ((void (__fastcall *)(_BYTE *, _DWORD, _DWORD))loc_251A14)(v10, *(_DWORD *)(a3 + 20), *(_DWORD *)(a3 + 24));
  v7 = *(_DWORD *)(a3 + 20);
  switch ( v7 )
  {
    case 8:
      sub_332C1C(v9, *a4, v10);
      break;
    case 16:
      sub_333B44(v9, *a4, v10);
      break;
    case 4:
      sub_332108(v9, *a4, v10);
      break;
    default:
      sub_946E0("Unknown decimal floating point type.");
  }
  ((void (__fastcall *)(_BYTE *, int, int))loc_251814)(v9, a3, a2);
  sub_2513A0((int)v10);
  return 1;
}
