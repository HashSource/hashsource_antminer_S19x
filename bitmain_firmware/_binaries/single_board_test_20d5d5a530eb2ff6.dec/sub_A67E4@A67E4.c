int __fastcall sub_A67E4(_DWORD *a1, _DWORD *a2)
{
  int (__fastcall *v2)(_DWORD *); // r3
  int result; // r0
  int v6; // r3
  int v7; // r0
  _BYTE v8[52]; // [sp+0h] [bp-34h] BYREF

  v2 = (int (__fastcall *)(_DWORD *))a1[388];
  *a2 = 115;
  if ( !v2 || (result = v2(a1)) == 0 )
  {
    v6 = a1[392];
    *a2 = 80;
    if ( v6
      && a1[393]
      && a1[394]
      && a1[399]
      && sub_F49BC(v8, 48) > 0
      && (a1[398] = sub_B8AEC(v8, 48, 0),
          sub_E07F8((int)v8, 0x30u),
          v7 = sub_10A890(a1[398], a1[392], a1[393], a1[399]),
          (a1[395] = v7) != 0) )
    {
      return 0;
    }
    else
    {
      return 2;
    }
  }
  return result;
}
