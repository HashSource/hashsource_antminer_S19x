int __fastcall sub_2A66F4(int a1, int a2, int a3)
{
  _UNKNOWN **v3; // r12
  _DWORD *v4; // r4
  int v5; // r3
  _DWORD *v7; // t1

  v3 = &off_4115C0;
  v4 = &unk_41D3CC;
  while ( 1 )
  {
    if ( a2 == v4[3] && (a3 == v4[4] || !a3 && v4[8]) )
    {
      v5 = 1;
      *(_DWORD *)(a1 + 132) = v4;
      return v5;
    }
    v4 = (_DWORD *)v4[12];
    if ( !v4 )
    {
      v7 = v3[1];
      ++v3;
      v4 = v7;
      if ( !v7 )
        break;
    }
  }
  *(_DWORD *)(a1 + 132) = &unk_4115CC;
  ((void (__fastcall *)(int))loc_2A6C48)(17);
  return 0;
}
