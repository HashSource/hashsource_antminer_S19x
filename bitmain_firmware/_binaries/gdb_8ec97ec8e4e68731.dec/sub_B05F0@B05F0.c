int __fastcall sub_B05F0(_DWORD *a1)
{
  int v2; // r7
  _DWORD *v3; // r4
  unsigned int v4; // r5
  int v5; // r0
  int v6; // r8
  int v7; // r0
  _DWORD savedregs[8]; // [sp+0h] [bp-1Ch] BYREF

  v2 = *(_DWORD *)(a1[2] + 20);
  v3 = savedregs;
  sub_FA844(a1[1], savedregs, a1[3] * v2);
  if ( a1[3] )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = sub_15AEA8(v3, a1[2]);
        v6 = v5;
        ++v4;
        v3 = (_DWORD *)((char *)v3 + v2);
        if ( v5 )
          break;
        if ( a1[3] <= v4 )
          return 1;
      }
      v7 = sub_183688(v5);
      sub_B0118(v6, v7);
    }
    while ( a1[3] > v4 );
  }
  return 1;
}
