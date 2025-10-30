int __fastcall sub_3BC30(int a1, int a2, int a3)
{
  char v3; // r0
  char v4; // r6
  int v5; // r0
  __int16 v6; // r4
  int *v8; // [sp+0h] [bp-8h] BYREF

  dword_BDB3C = a1;
  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  v8 = &dword_BD940;
  byte_BD93A = v3;
  if ( dword_BDB40 )
    v5 = 136;
  else
    v5 = 48;
  dword_BD92C = v5;
  dword_BDB38 = a2;
  if ( dword_BDB40 )
    v6 = -30720;
  else
    v6 = 12288;
  byte_BD93B = v4;
  dword_BDB34 = 0;
  dword_BD930 = 0;
  dword_BD928 = 0;
  dword_BD924 = 0;
  word_BD93E = v6;
  sub_15FC8((int)sub_3B41C, (int)&v8);
  return sub_3B8C4();
}
