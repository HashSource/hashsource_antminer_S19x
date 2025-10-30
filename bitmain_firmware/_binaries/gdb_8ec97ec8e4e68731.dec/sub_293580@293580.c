int __fastcall sub_293580(int a1, void *s, signed int a3)
{
  bool v6; // cc
  _BYTE *v7; // r5
  int v8; // r0
  bool v9; // cc
  _DWORD v11[3]; // [sp+0h] [bp-Ch] BYREF

  memset(s, 0, a3);
  v6 = a1 <= 0;
  if ( a1 >= 0 )
    v6 = a3 <= 0;
  if ( !v6 )
  {
    v7 = s;
    do
    {
      *v7++ = a1;
      v11[0] = 0;
      v11[1] = 0;
      if ( sub_29B1F4(s, v11) != -2 )
        break;
      dword_48AAA0 |= 0x40u;
      v8 = sub_29334C();
      v9 = v8 <= 0;
      if ( v8 >= 0 )
        v9 = a3 <= v7 - (_BYTE *)s;
      a1 = v8;
      dword_48AAA0 &= ~0x40u;
    }
    while ( !v9 );
  }
  return a1;
}
