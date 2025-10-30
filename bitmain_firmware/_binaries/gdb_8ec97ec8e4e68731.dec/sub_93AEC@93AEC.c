int __fastcall sub_93AEC(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r6
  int v5; // r0
  int v6; // r3
  int v7; // r2
  int v9; // [sp+4h] [bp-4h] BYREF

  *(_DWORD *)(a1 + 24) = a1 + 16;
  *(_DWORD *)(a1 + 28) = a1 + 16;
  v9 = 0;
  *(_DWORD *)(a1 + 48) = a1 + 40;
  *(_DWORD *)(a1 + 52) = a1 + 40;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  sub_941C0(a1, &v9);
  if ( _environ )
  {
    v2 = *(_DWORD *)_environ;
    if ( *(_DWORD *)_environ )
    {
      v3 = 4;
      do
      {
        v4 = *(_DWORD *)(a1 + 4);
        v5 = sub_327254(v2);
        v6 = *(_DWORD *)(a1 + 4);
        v7 = *(_DWORD *)(a1 + 8);
        v9 = v5;
        if ( v6 == v7 )
        {
          sub_940D0(a1, v4 - 4, &v9);
        }
        else if ( v4 - 4 == v6 )
        {
          if ( v4 != 4 )
            *(_DWORD *)(v4 - 4) = v5;
          *(_DWORD *)(a1 + 4) = v4;
        }
        else
        {
          sub_937E4((_DWORD **)(a1 + 4), (char *)(v4 - 4), &v9);
        }
        v2 = *(_DWORD *)(_environ + v3);
        v3 += 4;
      }
      while ( v2 );
    }
  }
  return a1;
}
