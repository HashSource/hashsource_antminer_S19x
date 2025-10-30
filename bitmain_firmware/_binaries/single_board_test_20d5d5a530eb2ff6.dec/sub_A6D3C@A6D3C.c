bool __fastcall sub_A6D3C(_DWORD *a1)
{
  int v3; // r0
  _BYTE v4[52]; // [sp+0h] [bp-34h] BYREF

  if ( sub_F49BC(v4, 48) <= 0 )
    return 0;
  a1[397] = sub_B8AEC(v4, 48, a1[397]);
  sub_E07F8((int)v4, 0x30u);
  v3 = sub_10AA98(a1[397], a1[392], a1[393]);
  a1[396] = v3;
  return v3 != 0;
}
