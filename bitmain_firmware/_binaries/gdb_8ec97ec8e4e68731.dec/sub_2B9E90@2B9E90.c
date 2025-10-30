bool __fastcall sub_2B9E90(int a1, int a2, int a3)
{
  _DWORD *v3; // r12
  int v5; // r6
  int v6; // r3
  int v7; // r1
  _DWORD *v8; // r0
  _DWORD v10[3]; // [sp+Ch] [bp-14h] BYREF
  __int16 v11; // [sp+18h] [bp-8h]
  char v12; // [sp+1Ah] [bp-6h]
  int v13; // [sp+1Ch] [bp-4h]

  v3 = *(_DWORD **)(a1 + 8);
  v5 = dword_41336C[a2 + 600];
  v6 = *(_DWORD *)(v3[15] + 28);
  v7 = a3 + v3[14];
  v13 = *(_DWORD *)(a1 + 12);
  v8 = (_DWORD *)v3[35];
  v10[1] = 0;
  v10[0] = v6 + v7;
  v11 = 0;
  v12 = 0;
  sub_2B9E04(v8, *(_BYTE *)(v5 + 1), a3);
  return (*(int (__fastcall **)(_DWORD, int, _DWORD *, _DWORD, _DWORD))(a1 + 16))(
           *(_DWORD *)a1,
           v5,
           v10,
           *(_DWORD *)(a1 + 8),
           0) == 1;
}
