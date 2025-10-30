unsigned int __fastcall sub_28830(int a1)
{
  unsigned int v1; // r6
  unsigned int v2; // r8
  int v3; // r5
  _DWORD *v4; // r7
  unsigned int v5; // r4
  unsigned int v6; // r0
  unsigned int v7; // r1
  bool v8; // cf
  _DWORD vars0[8]; // [sp+8h] [bp+0h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = &vars0[a1];
  do
  {
    if ( sub_26C0C(v3) )
    {
      v5 = 0;
      while ( 1 )
      {
        v6 = sub_26A44();
        v7 = v5;
        v8 = v5 >= v6;
        v5 += 10;
        if ( v8 )
          break;
        v1 = sub_39018(*(v4 - 2), v7, v3);
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
