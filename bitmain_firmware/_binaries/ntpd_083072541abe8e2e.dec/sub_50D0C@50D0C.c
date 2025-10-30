bool __fastcall sub_50D0C(int a1, int a2)
{
  int v3; // r7
  int v4; // r4
  int v5; // r0
  int v6; // r0
  int v7; // r0
  _DWORD v9[2]; // [sp+0h] [bp-24h] BYREF
  _DWORD v10[3]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v11[2]; // [sp+14h] [bp-10h] BYREF

  sub_658E8((int)v9, a2 - 43200, 0);
  v10[0] = v9[0];
  v10[1] = v9[1];
  sub_6598C(v11, v10);
  v3 = v11[1];
  v4 = v11[0];
  v5 = sub_665B0(a1);
  v6 = sub_657A8(v3, v5, &off_15180);
  v7 = sub_65D94(a1, v6);
  return sub_65BF4(a1, v7 + v4 + 693596) >= 0;
}
