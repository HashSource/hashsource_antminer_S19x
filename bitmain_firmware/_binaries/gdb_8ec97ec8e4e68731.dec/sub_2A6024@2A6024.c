int __fastcall sub_2A6024(int a1)
{
  int v2; // r3
  int v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r6
  int v8; // r0
  int v9; // r5
  int v10; // r3
  int v11; // r5
  __int64 v12; // [sp+0h] [bp-14h] BYREF

  if ( (*(_BYTE *)(a1 + 40) & 8) != 0 && (*(_BYTE *)(a1 + 40) & 7) == 2 )
  {
    v8 = *(_DWORD *)(a1 + 152);
    if ( v8 )
    {
      do
      {
        v9 = *(_DWORD *)(v8 + 144);
        sub_2AC9DC();
        v8 = v9;
      }
      while ( v9 );
    }
    v10 = *(_DWORD *)(a1 + 160);
    v11 = *(_DWORD *)(v10 + 8);
    if ( v11 )
    {
      sub_324138(*(_DWORD *)(v10 + 8), sub_2A32F0, 0);
      sub_323B84(v11);
      *(_DWORD *)(*(_DWORD *)(a1 + 160) + 8) = 0;
    }
  }
  v2 = *(_DWORD *)(a1 + 136);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 24);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v2 + 24);
      v12 = *(_QWORD *)(v2 + 32);
      v5 = sub_324030(v4, &v12, 0);
      v6 = v5;
      if ( v5 )
      {
        if ( *(_DWORD *)(*(_DWORD *)v5 + 8) != a1 )
          sub_2A6BBC("archive.c", 2884);
        sub_3240D8(v3, v6);
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 44) & 4) != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)(a1 + 156) + 36))(a1);
  return 1;
}
