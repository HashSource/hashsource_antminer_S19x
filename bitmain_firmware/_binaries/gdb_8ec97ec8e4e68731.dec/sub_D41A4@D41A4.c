_DWORD *__fastcall sub_D41A4(int a1)
{
  _DWORD *v1; // r5
  int v2; // r2
  int v4; // r3
  int v5; // r3
  _DWORD *v6; // [sp+4h] [bp-24h] BYREF
  _DWORD v7[4]; // [sp+8h] [bp-20h] BYREF
  _DWORD *v8; // [sp+18h] [bp-10h]
  int v9; // [sp+1Ch] [bp-Ch]
  __int16 v10; // [sp+20h] [bp-8h]
  int v11; // [sp+24h] [bp-4h]

  v1 = *(_DWORD **)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 12);
  *(_BYTE *)(a1 + 25) = 0;
  memset(v7, 0, 12);
  v7[3] = v2;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v6 = v7;
  if ( v1 )
  {
    ++v1[1];
    v8 = v1;
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    v4 = v1[1];
    v1[1] = v4 - 1;
    if ( v4 == 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*v1 + 8))(v1);
      v5 = v1[2];
      v1[2] = v5 - 1;
      if ( v5 == 1 )
        (*(void (__fastcall **)(_DWORD *))(*v1 + 12))(v1);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 12) = 0;
  }
  sub_D3D5C(&v6);
  return sub_CDF5C(v7);
}
