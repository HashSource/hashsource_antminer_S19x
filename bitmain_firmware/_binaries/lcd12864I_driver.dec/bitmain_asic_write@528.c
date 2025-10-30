int __fastcall bitmain_asic_write(int a1, int a2, unsigned int a3)
{
  int v6; // r3
  bool v7; // cf
  int v8; // r0
  unsigned int v9; // r6
  _BYTE *v10; // r6
  int i; // r5
  int v12; // r8
  char v13; // r0
  _BYTE s[64]; // [sp+4h] [bp-48h] BYREF

  memset(s, 32, sizeof(s));
  if ( a3 > 0x40 )
    return -14;
  v6 = *((_DWORD *)get_current() + 2);
  v7 = __CFADD__(a2, a3);
  if ( !__CFADD__(a2, a3) )
    v7 = __CFSUB__(a2 + a3, v6, __CFADD__(a2, a3));
  if ( !v7 )
    v6 = 0;
  if ( v6 )
  {
    v8 = a3;
  }
  else
  {
    v9 = __mrc(15, 0, 3, 0, 0);
    __mcr(15, 0, v9 & 0xFFFFFFF3 | 4, 3, 0, 0);
    __isb(0xFu);
    v8 = arm_copy_from_user(s, a2, a3);
    __mcr(15, 0, v9, 3, 0, 0);
    __isb(0xFu);
  }
  if ( v8 )
    return -14;
  v10 = s;
  for ( i = 0; i != 4; ++i )
  {
    v12 = 0;
    SendCommad(addr_tab[8 * i]);
    do
    {
      v13 = v10[v12++];
      SendData(v13);
    }
    while ( v12 != 16 );
    v10 += 16;
  }
  return a3;
}
