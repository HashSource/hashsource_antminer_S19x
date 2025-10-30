int __fastcall sub_69154(int a1, int a2)
{
  int v4; // r5
  int v5; // r1
  bool v6; // zf
  int v7; // r1

  sub_2579B4(a1, 0);
  *(_DWORD *)(a1 + 28) = a2;
  *(_BYTE *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 25) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)a1 = off_35C5D4;
  v4 = sub_9836C(28);
  sub_256760(v4);
  v5 = *(_DWORD *)(a1 + 36);
  v6 = v5 == *(_DWORD *)(a1 + 40);
  *(_DWORD *)v4 = &off_3F2924;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 4) = v4 + 12;
  *(_BYTE *)(v4 + 12) = 0;
  if ( v6 )
  {
    sub_69274(a1 + 32);
    return a1;
  }
  else
  {
    v6 = v5 == 0;
    v7 = v5 + 4;
    if ( !v6 )
      *(_DWORD *)(v7 - 4) = v4;
    *(_DWORD *)(a1 + 36) = v7;
    return a1;
  }
}
