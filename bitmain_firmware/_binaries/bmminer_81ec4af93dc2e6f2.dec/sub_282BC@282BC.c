unsigned int __fastcall sub_282BC(int a1)
{
  unsigned int v1; // r6
  unsigned int v2; // r8
  int v3; // r5
  _DWORD *v4; // r7
  unsigned int v6; // r4
  bool v7; // cc
  unsigned int v8; // r1
  _DWORD vars0[6]; // [sp+8h] [bp+0h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = &vars0[a1];
  do
  {
    if ( sub_266F0(v3) )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = sub_26540() > v6;
        v8 = v6;
        v6 += 10;
        if ( !v7 )
          break;
        v1 = sub_389CC(*(v4 - 2), v8, v3);
      }
      if ( v2 < (unsigned int)(25.0
                             / (double)((v1 >> 8) & 0x3F)
                             * (double)(HIWORD(v1) & 0xFFF)
                             / (double)(int)(((v1 >> 4) & 7) + 1)
                             / (double)(int)((v1 & 7) + 1)) )
        v2 = (unsigned int)(25.0
                          / (double)((v1 >> 8) & 0x3F)
                          * (double)(HIWORD(v1) & 0xFFF)
                          / (double)(int)(((v1 >> 4) & 7) + 1)
                          / (double)(int)((v1 & 7) + 1));
    }
    ++v3;
  }
  while ( v3 != 4 );
  return v2;
}
