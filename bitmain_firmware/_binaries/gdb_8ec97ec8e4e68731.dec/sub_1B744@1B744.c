int __fastcall sub_1B744(int a1)
{
  int v1; // r0
  int v2; // r5
  int v3; // r2
  unsigned int v4; // r4
  int v5; // r6
  int v6; // r7
  int v7; // r3
  int v8; // r0

  while ( 1 )
  {
    v1 = sub_171258(a1);
    v2 = v1;
    v3 = *(_DWORD *)(v1 + 24);
    switch ( *(_BYTE *)v3 )
    {
      case 1:
      case 5:
      case 8:
      case 9:
      case 0xB:
      case 0xC:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
        return *(_DWORD *)(v1 + 20);
      case 2:
        if ( (*(_BYTE *)(v3 + 2) & 1) == 0 )
          goto LABEL_3;
        v4 = *(_DWORD *)(v1 + 20);
        if ( v4 >= 8 )
          return 8;
        return v4;
      case 3:
      case 4:
        if ( *(__int16 *)(v3 + 4) <= 0 )
          return 1;
        v5 = 0;
        v4 = 1;
        v6 = 0;
        do
        {
          ++v6;
          v7 = *(_DWORD *)(v3 + 24) + v5;
          v5 += 24;
          v8 = sub_1B744(*(_DWORD *)(v7 + 12));
          v3 = *(_DWORD *)(v2 + 24);
          if ( (int)v4 < v8 )
            v4 = v8;
        }
        while ( *(__int16 *)(v3 + 4) > v6 );
        return v4;
      case 0x16:
LABEL_3:
        a1 = *(_DWORD *)(v3 + 20);
        break;
      default:
        sub_94700("arm-tdep.c", 3369, "unknown type alignment");
        JUMPOUT(0x1B85C);
    }
  }
}
