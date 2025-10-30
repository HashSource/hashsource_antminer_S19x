int __fastcall sub_2ACAE8(int a1)
{
  char v1; // r3
  char v4; // r3
  char v5; // r1
  int v6; // r3
  int v7; // r2
  int v8; // r3

  v1 = *(_BYTE *)(a1 + 40);
  if ( (v1 & 0x18) == 0x10 && (*(_DWORD *)(a1 + 40) & 0x10000) != 0 )
  {
    if ( (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 4 * (v1 & 7) + 132))()
      && (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 148))(a1) )
    {
      v4 = *(_BYTE *)(a1 + 43);
      v5 = *(_BYTE *)(a1 + 40);
      *(_DWORD *)(a1 + 140) = 0;
      *(_BYTE *)(a1 + 40) = v5 & 0xF8;
      *(_BYTE *)(a1 + 43) = v4 & 0xB5;
      v6 = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 108) = 0;
      *(_DWORD *)(a1 + 164) = 0;
      v6 |= 0x10000u;
      *(_DWORD *)(a1 + 100) = 0;
      *(_DWORD *)(a1 + 40) = v6;
      *(_DWORD *)(a1 + 124) = 0;
      *(_DWORD *)(a1 + 120) = 0;
      *(_DWORD *)(a1 + 160) = 0;
      *(_BYTE *)(a1 + 40) = v6 & 0xE7 | 8;
      *(_BYTE *)(a1 + 43) = HIBYTE(v6) & 0xEB | 4;
      *(_DWORD *)(a1 + 132) = &unk_4115CC;
      *(_QWORD *)(a1 + 24) = 0;
      *(_QWORD *)(a1 + 56) = 0;
      sub_2AD778(a1);
      sub_2AA86C(a1, 1, v7, v8);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    return 0;
  }
}
