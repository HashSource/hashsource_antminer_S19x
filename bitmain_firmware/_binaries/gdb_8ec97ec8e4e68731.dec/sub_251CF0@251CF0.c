int __fastcall sub_251CF0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _BYTE v10[28]; // [sp+0h] [bp-8Ch] BYREF
  _BYTE v11[36]; // [sp+1Ch] [bp-70h] BYREF
  _BYTE v12[36]; // [sp+40h] [bp-4Ch] BYREF
  _BYTE v13[40]; // [sp+64h] [bp-28h] BYREF

  sub_2518D0(a3, a4, (int)v11);
  sub_2518D0(a5, a6, (int)v12);
  ((void (__fastcall *)(_BYTE *, _DWORD, _DWORD))loc_251A14)(v10, *(_DWORD *)(a8 + 20), *(_DWORD *)(a8 + 24));
  switch ( a2 )
  {
    case 1:
      sub_32CBB4(v13, v11, v12, v10);
      break;
    case 2:
      sub_32CC00(v13, v11, v12, v10);
      break;
    case 3:
      sub_32BCE0(v13, v11, v12, v10);
      break;
    case 4:
      sub_32E370(v13, v11, v12, v10);
      break;
    case 24:
      sub_32F7D8(v13, v11, v12, v10);
      break;
    default:
      sub_946E0("Operation not valid for decimal floating point number.");
  }
  sub_2513A0((int)v10);
  return sub_251B6C((int)v13, a7, a8);
}
