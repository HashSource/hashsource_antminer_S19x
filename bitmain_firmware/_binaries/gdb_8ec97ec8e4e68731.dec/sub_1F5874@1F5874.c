void __fastcall sub_1F5874(_DWORD *a1, int *a2)
{
  int v2; // r3
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int *v7; // t0

  v2 = a1[1];
  if ( v2 == a1[2] )
  {
    sub_1F545C(a1, (_DWORD *)a1[1], a2);
  }
  else
  {
    v4 = *a2;
    v7 = a2 + 1;
    v5 = a2[1];
    v6 = v7[1];
    if ( v2 )
    {
      *(_DWORD *)(v2 + 12) = v2 + 20;
      *(_DWORD *)(v2 + 16) = 0;
      *(_BYTE *)(v2 + 20) = 0;
      *(_DWORD *)(v2 + 40) = 0;
      *(_BYTE *)(v2 + 44) = 0;
      *(_DWORD *)v2 = v4;
      *(_DWORD *)(v2 + 4) = v5;
      *(_DWORD *)(v2 + 8) = v6;
      *(_DWORD *)(v2 + 64) = 0;
      *(_DWORD *)(v2 + 68) = 0;
      *(_DWORD *)(v2 + 72) = 0;
      *(_DWORD *)(v2 + 36) = v2 + 44;
      *(_DWORD *)(v2 + 60) = -1;
      v2 = a1[1];
    }
    a1[1] = v2 + 76;
  }
}
