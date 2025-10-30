bool __fastcall sub_2B28B4(int *a1, int a2, int a3, int a4)
{
  int v4; // r3
  int v5; // r6
  int (__fastcall *v6)(int, int, _DWORD *); // r5
  int v7; // r12
  int v8; // r2
  int v9; // lr
  _DWORD v11[3]; // [sp+Ch] [bp-14h] BYREF
  __int16 v12; // [sp+18h] [bp-8h]
  char v13; // [sp+1Ah] [bp-6h]
  int v14; // [sp+1Ch] [bp-4h]

  v11[1] = a4;
  v4 = a1[2];
  v12 = 2;
  v5 = a1[3];
  v6 = (int (__fastcall *)(int, int, _DWORD *))a1[4];
  v7 = *(_DWORD *)(*(_DWORD *)(v4 + 60) + 28);
  v8 = a3 + *(_DWORD *)(v4 + 56);
  v9 = *a1;
  v13 = 0;
  v14 = v5;
  v11[0] = v7 + v8;
  return v6(v9, a2, v11) == 1;
}
