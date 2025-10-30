int __fastcall sub_876B4(int a1)
{
  int v2; // r3
  int v3; // r2
  int v4; // r0
  int v5; // r5
  int v6; // r3
  void **v8[2]; // [sp+4h] [bp-14h] BYREF
  int v9; // [sp+Ch] [bp-Ch]
  int v10; // [sp+10h] [bp-8h]
  int v11; // [sp+14h] [bp-4h]

  v2 = _stack_chk_guard;
  v3 = *(_DWORD *)(a1 + 12) | 0x8000;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 12) = v3;
  v11 = v2;
  *(_DWORD *)(a1 + 16) = 1;
  do
  {
    v8[0] = 0;
    v8[1] = 0;
    v9 = 2;
    v10 = 0;
    v4 = sub_874D4((_DWORD *)a1, (int *)v8);
    if ( v4 )
      v5 = v4;
    else
      v5 = sub_80694((_DWORD *)a1, v8);
    if ( v5 == -1 )
      break;
    if ( v5 == 1 )
    {
      v6 = *(_DWORD *)(a1 + 12);
      v5 = 0;
      goto LABEL_12;
    }
  }
  while ( ((unsigned int)sub_20020 & v9) != 0x20000 && (_UNKNOWN *)((unsigned int)&loc_40020 & v9) != &loc_40020
       || !sub_7F0F4(a1, v8) );
  v6 = *(_DWORD *)(a1 + 12);
  if ( (v6 & 4) != 0 )
  {
    (*(void (__fastcall **)(int, int))(a1 + 84))(a1, 1);
    v6 = *(_DWORD *)(a1 + 12);
  }
LABEL_12:
  *(_DWORD *)(a1 + 12) = v6 & 0xFFFF7FFF;
  return v5;
}
