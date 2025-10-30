int __fastcall sub_10E770(int a1)
{
  int v2; // r5
  int v3; // r4
  _DWORD *v4; // r0
  int result; // r0
  _DWORD v6[6]; // [sp+Ch] [bp-18h] BYREF

  sub_115C40(a1, 0);
  v2 = *(_DWORD *)(a1 + 12);
  v3 = *(_DWORD *)(a1 + 16);
  v4 = sub_D93D8();
  result = sub_D18F0(v2, v3, (int)v6, 0, v4, 0);
  if ( result )
    return v6[0];
  return result;
}
