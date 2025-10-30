void __fastcall sub_1E3AC0(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r0
  int v6; // r0

  v5 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v5);
  if ( *(_DWORD *)(dword_488C94 + 8) )
    v6 = ((int (__fastcall *)(int, int, int))loc_23FA8C)(a1, a2, a3);
  else
    v6 = sub_23FC70(a1, a2, a3, 0);
  *(_DWORD *)(((int (__fastcall *)(int))loc_1E38EC)(v6) + 84) = a5;
  sub_23F298(a1, a2, a3, a5);
  JUMPOUT(0x23EFC0);
}
