int __fastcall sub_32D1B8(int a1, unsigned int a2, int a3)
{
  int v6; // [sp+8h] [bp-14h] BYREF
  _DWORD v7[2]; // [sp+Ch] [bp-10h] BYREF
  char v8; // [sp+14h] [bp-8h]
  __int16 v9; // [sp+16h] [bp-6h]

  v7[1] = *(_DWORD *)(a2 + 4);
  v6 = 0;
  v8 = 0;
  v9 = 0;
  v7[0] = 1;
  sub_32C3B0(a1, (int)v7, __SPAIR64__(a3, a2), 0, &v6);
  if ( v6 )
    sub_327DE4(a1, v6, a3);
  return a1;
}
