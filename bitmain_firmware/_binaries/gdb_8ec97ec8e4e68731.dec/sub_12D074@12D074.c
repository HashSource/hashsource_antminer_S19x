int __fastcall sub_12D074(int a1, int a2, int a3, int a4)
{
  int v4; // r6
  int v5; // r4
  int (__fastcall *v6)(_DWORD); // r1
  int v7; // r7
  int v8; // r0
  _DWORD *v9; // r3
  int v10; // r3
  int v11; // r4
  int v12; // r0
  int v13; // r8
  int *v14; // r0
  unsigned int v15; // r6
  int v16; // r3
  int v17; // r0
  int v19; // [sp+Ch] [bp-24h] BYREF
  int v20; // [sp+10h] [bp-20h] BYREF
  int v21; // [sp+14h] [bp-1Ch] BYREF
  _DWORD v22[2]; // [sp+1Ch] [bp-14h] BYREF
  _DWORD v23[3]; // [sp+24h] [bp-Ch] BYREF

  v21 = a2;
  v20 = a3;
  v19 = a4;
  ((void (*)(void))loc_11EB1C)();
  v4 = dword_4872D8;
  v5 = *(unsigned __int8 *)(dword_4872D8 + 452);
  if ( !*(_BYTE *)(dword_4872D8 + 452) )
  {
    sub_15A00C(dword_4872D8 + 448);
    v6 = off_4714A0;
    *(_BYTE *)(v4 + 452) = 1;
    v7 = sub_323AE0(10, v6, off_47149C[0], v5, sub_93094, &loc_11C838);
    if ( *(int *)(dword_4872D8 + 352) > 0 )
    {
      do
      {
        v8 = ((int (__fastcall *)(int))loc_11E164)(v5);
        v9 = *(_DWORD **)(v8 + 24);
        if ( v9[1] )
          *(_DWORD *)sub_324030(v7, *v9, 1) = **(_DWORD **)(v8 + 24);
        ++v5;
        v10 = *(_DWORD *)(dword_4872D8 + 352);
      }
      while ( v10 > v5 );
      if ( v10 > 0 )
      {
        v11 = 0;
        do
        {
          if ( !*(_DWORD *)(*(_DWORD *)(((int (__fastcall *)(int))loc_11E368)(v11) + 24) + 4) )
          {
            v12 = ((int (*)(void))loc_12CFA4)();
            v13 = v12;
            if ( v12 )
            {
              v14 = (int *)sub_324030(v7, v12, 1);
              v15 = *v14;
              if ( !*v14 )
              {
                v16 = *(_DWORD *)(v13 + 8);
                *v14 = v13;
                if ( v16 )
                {
                  do
                    sub_15A078(dword_4872D8 + 448, *(_DWORD *)(*(_DWORD *)(v13 + 12) + 4 * v15++));
                  while ( *(_DWORD *)(v13 + 8) > v15 );
                }
              }
            }
          }
          ++v11;
        }
        while ( *(_DWORD *)(dword_4872D8 + 352) > v11 );
      }
    }
    if ( v7 )
      sub_323B84(v7);
    v4 = dword_4872D8;
  }
  v22[1] = sub_11D1C4;
  v23[0] = &v19;
  v17 = *(_DWORD *)(v4 + 448);
  v23[1] = &v21;
  v23[2] = &v20;
  v22[0] = v23;
  return sub_324138(v17, sub_1481E0, v22);
}
