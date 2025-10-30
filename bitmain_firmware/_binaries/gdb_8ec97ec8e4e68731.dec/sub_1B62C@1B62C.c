bool __fastcall sub_1B62C(int a1, int a2)
{
  int v3; // r0
  char *v4; // r3
  unsigned int v5; // r4
  bool v6; // cc
  int v7; // r5
  int v9; // r3
  int v10; // r4
  int v11; // r3
  int v12; // r6
  int v13; // r2
  __int64 v14; // r0
  int v15; // r12

  v3 = sub_171258(a2);
  v4 = *(char **)(v3 + 24);
  v5 = *v4;
  v6 = v5 > 0x16;
  if ( v5 != 22 )
    v6 = v5 - 2 > 2;
  if ( v6 )
    return 0;
  v7 = v3;
  if ( v5 == 2 && (v4[2] & 1) != 0 )
    return *(_DWORD *)(v3 + 20) > 0x10u;
  if ( *(_DWORD *)sub_163E78(a1) != 1 )
    return *(_DWORD *)(v7 + 20) > 4u;
  if ( *(_DWORD *)(v7 + 20) <= 4u )
  {
    if ( v5 - 3 <= 1 )
    {
      v9 = *(_DWORD *)(v7 + 24);
      if ( *(__int16 *)(v9 + 4) > 0 )
      {
        v10 = 0;
        v11 = *(_DWORD *)(v9 + 24);
        v12 = 0;
        while ( 1 )
        {
          ++v12;
          if ( **(_BYTE **)(sub_171258(*(_DWORD *)(v11 + v10 + 12)) + 24) == 9 )
            break;
          v13 = *(_DWORD *)(v7 + 24);
          v11 = *(_DWORD *)(v13 + 24);
          v14 = *(_QWORD *)(v11 + v10);
          v15 = v11 + v10;
          v10 += 24;
          if ( v14 )
          {
            if ( (*(_DWORD *)(v15 + 8) & 0xFFFFFFF0) == 0 )
              break;
          }
          if ( *(__int16 *)(v13 + 4) <= v12 )
            return 0;
        }
        return 1;
      }
    }
    return 0;
  }
  return 1;
}
