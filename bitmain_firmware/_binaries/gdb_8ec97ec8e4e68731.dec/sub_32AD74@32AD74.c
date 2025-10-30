int __fastcall sub_32AD74(int a1, int a2, int *a3)
{
  char v3; // r3
  int v7; // r3
  int v8; // [sp+Ch] [bp-Ch] BYREF
  int v9; // [sp+10h] [bp-8h] BYREF
  int v10; // [sp+14h] [bp-4h] BYREF

  v3 = *(_BYTE *)(a2 + 8);
  v8 = 0;
  v9 = 0;
  if ( (v3 & 0x30) != 0 )
  {
    sub_32AC0C(a1, a2, 0, a3, &v8);
  }
  else
  {
    *(_BYTE *)(a1 + 8) = v3;
    v7 = *(_DWORD *)a2;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
    sub_328A00(a1, a3, (unsigned __int16 *)(a2 + 10), v7, &v9, &v8);
    sub_329598((_DWORD *)a1, a3, &v9, &v8);
    sub_328804(a1, (int)a3, 1, 0, &v10);
  }
  if ( v8 )
    sub_327DE4(a1, v8, (int)a3);
  return a1;
}
