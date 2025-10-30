int __fastcall sub_A2E74(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r4
  int v4; // r3
  int v5; // r3
  int v7; // r3

  v3 = *(_DWORD **)(a1 + 1028);
  v4 = v3[4] & 0x30000;
  switch ( v4 )
  {
    case 131072:
      *a3 = &unk_1A9DBE;
      return 1;
    case 196608:
      *a3 = &unk_1A9DBC;
      return 2;
    case 65536:
      *a3 = &unk_1A9DBC;
      return 1;
    default:
      if ( *(_DWORD *)(a1 + 28) == a2 && (v7 = v3[54]) != 0 )
      {
        *a3 = v7;
        return *(_DWORD *)(*(_DWORD *)(a1 + 1028) + 220);
      }
      else
      {
        v5 = v3[52];
        if ( v5 )
        {
          *a3 = v5;
          return *(_DWORD *)(*(_DWORD *)(a1 + 1028) + 212);
        }
        else
        {
          *a3 = &unk_1A9DC0;
          return 26;
        }
      }
  }
}
