int __fastcall sub_14772C(int a1, unsigned int a2)
{
  int v3; // r12
  int result; // r0
  int v5; // [sp+0h] [bp-18h] BYREF
  char v6; // [sp+4h] [bp-14h]
  int v7; // [sp+8h] [bp-10h]
  int v8; // [sp+Ch] [bp-Ch]
  int v9; // [sp+10h] [bp-8h]
  int v10; // [sp+14h] [bp-4h]

  v3 = **(_DWORD **)(a1 + 4);
  v5 = *(_DWORD *)a1;
  v6 = 0;
  v9 = v3;
  v7 = 2;
  v8 = 0;
  v10 = sub_12B68C(v5, a2);
  while ( 1 )
  {
    result = sub_12B72C(&v5);
    if ( !result )
      break;
    sub_147544(
      result,
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4),
      **(_DWORD **)(a1 + 12),
      *(int (__fastcall **)(int))(*(_DWORD *)(a1 + 12) + 4));
  }
  return result;
}
