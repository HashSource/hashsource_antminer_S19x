int __fastcall sub_2FAE8(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r3
  int v7; // r4
  int v8; // r2
  int v9; // r1
  int v10; // r3
  int v11; // r3
  int v12; // [sp+4h] [bp-10h] BYREF
  int v13; // [sp+8h] [bp-Ch]
  int v14; // [sp+Ch] [bp-8h]

  result = ((int (__fastcall *)(int, int, int *))loc_1DEBAC)(a1, a2, &v12);
  v6 = *(unsigned __int8 *)(a3 + a2 + 88);
  v7 = 12 * (a2 - 16);
  v8 = a3 + v7;
  switch ( v6 )
  {
    case 2:
      v11 = v12;
      *(_DWORD *)(a3 + v7) = v13;
      *(_DWORD *)(v8 + 4) = v11;
      break;
    case 3:
      result = v12;
      v9 = v14;
      v10 = v13;
      *(_DWORD *)(a3 + v7) = v12;
      *(_DWORD *)(v8 + 4) = v9;
      *(_DWORD *)(v8 + 8) = v10;
      break;
    case 1:
      *(_DWORD *)(a3 + v7) = v12;
      break;
  }
  return result;
}
