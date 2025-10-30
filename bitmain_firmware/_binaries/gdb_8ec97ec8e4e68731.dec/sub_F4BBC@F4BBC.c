int __fastcall sub_F4BBC(int a1, int a2)
{
  bool v4; // zf
  int v5; // r9
  bool v6; // zf
  int (__fastcall *v7)(int); // r2
  unsigned int v8; // r4
  unsigned int v9; // r7
  bool v10; // zf

  while ( 1 )
  {
    v7 = *(int (__fastcall **)(int))(a2 + 32);
    dword_48AAA0 |= 0x40u;
    v8 = v7(a2);
    v9 = v8 & 0xFFFFFFDF;
    v10 = v8 == 32;
    if ( v8 != 32 )
      v10 = v9 == 89;
    dword_48AAA0 &= ~0x40u;
    if ( v10 )
      return 1;
    v4 = v8 == 127;
    if ( v8 != 127 )
      v4 = v9 == 78;
    v5 = v4;
    if ( v4 )
      return 0;
    if ( (v8 == 7) | (v8 >> 31) )
    {
      (*(void (**)(void))(a2 + 24))();
      sub_291288(v5, v5);
    }
    if ( a1 )
      break;
LABEL_15:
    (*(void (__fastcall **)(int))(a2 + 28))(a2);
  }
  v6 = v8 == 13;
  if ( v8 != 13 )
    v6 = v8 == 10;
  if ( !v6 )
  {
    if ( v9 == 81 )
      return 0;
    goto LABEL_15;
  }
  return 2;
}
