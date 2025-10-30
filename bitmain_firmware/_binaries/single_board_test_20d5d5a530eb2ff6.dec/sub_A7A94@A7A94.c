unsigned int __fastcall sub_A7A94(int a1)
{
  int v2; // r0
  unsigned int v3; // r4
  int v4; // r0
  unsigned int v5; // r2
  int v6; // r3
  int v7; // r0
  unsigned int v8; // r4
  int v9; // r1
  int v11; // [sp+8h] [bp-10h] BYREF
  unsigned int v12; // [sp+Ch] [bp-Ch] BYREF
  unsigned int v13; // [sp+10h] [bp-8h] BYREF
  int v14; // [sp+14h] [bp-4h] BYREF

  v2 = sub_8A824(a1);
  if ( !v2 )
    return 0;
  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 128) + 284);
  v4 = sub_87510(v2, &v11, (int *)&v12, &v13, &v14);
  if ( !v4 )
    return 0;
  if ( (**(_DWORD **)(a1 + 124) & 0x100) != 0 )
  {
    v6 = v14;
    v4 = v11;
  }
  else
  {
    v6 = v11;
  }
  if ( (**(_DWORD **)(a1 + 124) & 0x100) != 0 )
  {
    v7 = v4 + v6;
  }
  else
  {
    v5 = v12;
    v7 = v14;
  }
  if ( (**(_DWORD **)(a1 + 124) & 0x100) == 0 )
    v12 = v6 + v5;
  if ( v3 <= v7 + 13 )
    return 0;
  v8 = v3 - 13 - v7;
  if ( v13 )
  {
    sub_1892EC(v8, v13);
    v8 -= v9;
  }
  if ( v8 > v12 )
    return v8 - v12;
  else
    return 0;
}
