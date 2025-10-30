int __fastcall sub_3B12C(int a1, int a2, int a3)
{
  char v3; // lr
  char v4; // r0
  __int16 v5; // lr
  int v6; // r4
  int *v8; // [sp+0h] [bp-Ch] BYREF

  v3 = *(_BYTE *)(a3 + 2);
  dword_BCB28 = a1;
  v4 = *(_BYTE *)(a3 + 3);
  byte_BC926 = v3;
  if ( dword_BCB2C )
    v5 = -30720;
  else
    v5 = 12288;
  byte_BC927 = v4;
  word_BC92A = v5;
  v8 = &dword_BC92C;
  dword_BCB24 = a2;
  if ( dword_BCB2C )
    v6 = 136;
  else
    v6 = 48;
  dword_BC91C = v6;
  dword_BCB20 = 0;
  dword_BC910 = 0;
  dword_BC914 = 0;
  dword_BC918 = 0;
  sub_18908((void (__fastcall *)(int, unsigned __int16 **))sub_3ABB0, (int)&v8);
  return sub_3B02C();
}
