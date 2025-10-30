int __fastcall sub_86AD8(int a1)
{
  int v2; // r3
  int v3; // r5
  int v4; // r3
  void **v6[2]; // [sp+4h] [bp-14h] BYREF
  int v7; // [sp+Ch] [bp-Ch]
  int v8; // [sp+10h] [bp-8h]
  int v9; // [sp+14h] [bp-4h]

  *(_DWORD *)(a1 + 12) |= 0x8000u;
  v2 = _stack_chk_guard;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  v9 = v2;
  do
  {
    v6[0] = 0;
    v6[1] = 0;
    v8 = 0;
    v7 = 2;
    v3 = sub_867CC((_DWORD *)a1, (int *)v6);
    if ( !v3 )
      v3 = sub_7F19C((_DWORD *)a1, v6);
    if ( v3 == -1 )
      break;
    if ( v3 == 1 )
    {
      v4 = *(_DWORD *)(a1 + 12);
      v3 = 0;
      goto LABEL_11;
    }
  }
  while ( (v7 & (unsigned int)&loc_20020) != 0x20000 && ((unsigned int)&loc_40020 & ~v7) != 0 || !sub_7DC70(a1, v6) );
  v4 = *(_DWORD *)(a1 + 12);
  if ( (v4 & 4) != 0 )
  {
    (*(void (__fastcall **)(int, int))(a1 + 84))(a1, 1);
    v4 = *(_DWORD *)(a1 + 12);
  }
LABEL_11:
  *(_DWORD *)(a1 + 12) = v4 & 0xFFFF7FFF;
  return v3;
}
