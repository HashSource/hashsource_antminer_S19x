bool __fastcall sub_51EC0(int a1, int a2)
{
  int v3; // r4
  int v4; // r7
  int v5; // r0
  int v6; // r0
  int v7; // r0
  _DWORD v9[2]; // [sp+0h] [bp-24h] BYREF
  _DWORD v10[3]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v11[2]; // [sp+14h] [bp-10h] BYREF

  sub_6694C((int)v9, a2 - 43200, 0);
  v10[0] = v9[0];
  v10[1] = v9[1];
  sub_66A00(v11, v10);
  v3 = v11[0];
  v4 = v11[1];
  v5 = sub_675B8(a1);
  v6 = sub_667F8(v4, v5, 86400);
  v7 = sub_66E14(a1, v6);
  return sub_66C70(a1, v7 + v3 + 693596) >= 0;
}
