int __fastcall sub_D7434(int a1, int a2, signed int a3, unsigned __int8 *a4)
{
  _DWORD *v8; // r5
  int v10; // r8
  _DWORD *v11; // r0
  int v12; // r5
  int v13; // r4
  void *v14; // r0
  _DWORD v15[17]; // [sp+0h] [bp-44h] BYREF

  v8 = (_DWORD *)sub_D8934(a1);
  if ( a2 == 22 )
  {
    if ( a3 != 13 )
      return -1;
    v13 = a4[12] | (a4[11] << 8);
    if ( !sub_D8924(a1) )
    {
      if ( v13 <= 15 )
        return -1;
      v13 -= 16;
      a4[12] = v13;
      a4[11] = BYTE1(v13);
    }
    v8[327] = v13;
    v14 = memcpy(v8 + 304, v8 + 258, 0x5Cu);
    sub_E0468((int)v14, a4, 0xDu);
    return 16;
  }
  else
  {
    if ( a2 != 23 )
      return -1;
    memset(v15, 0, 0x40u);
    v10 = (int)(v8 + 258);
    if ( a3 > 64 )
    {
      sub_DFC40(v8 + 258);
      sub_E0468((int)(v8 + 258), a4, a3);
      sub_E0520(v15, v8 + 258);
    }
    else
    {
      memcpy(v15, a4, a3);
    }
    v11 = v8 + 258;
    v12 = (int)(v8 + 281);
    v15[0] ^= 0x36363636u;
    v15[1] ^= 0x36363636u;
    v15[6] ^= 0x36363636u;
    v15[4] ^= 0x36363636u;
    v15[2] ^= 0x36363636u;
    v15[7] ^= 0x36363636u;
    v15[8] ^= 0x36363636u;
    v15[9] ^= 0x36363636u;
    v15[11] ^= 0x36363636u;
    v15[5] ^= 0x36363636u;
    v15[12] ^= 0x36363636u;
    v15[15] ^= 0x36363636u;
    v15[3] ^= 0x36363636u;
    v15[10] ^= 0x36363636u;
    v15[13] ^= 0x36363636u;
    v15[14] ^= 0x36363636u;
    sub_DFC40(v11);
    sub_E0468(v10, v15, 0x40u);
    v15[0] ^= 0x6A6A6A6Au;
    v15[1] ^= 0x6A6A6A6Au;
    v15[2] ^= 0x6A6A6A6Au;
    v15[6] ^= 0x6A6A6A6Au;
    v15[5] ^= 0x6A6A6A6Au;
    v15[3] ^= 0x6A6A6A6Au;
    v15[7] ^= 0x6A6A6A6Au;
    v15[8] ^= 0x6A6A6A6Au;
    v15[9] ^= 0x6A6A6A6Au;
    v15[13] ^= 0x6A6A6A6Au;
    v15[15] ^= 0x6A6A6A6Au;
    v15[14] ^= 0x6A6A6A6Au;
    v15[4] ^= 0x6A6A6A6Au;
    v15[10] ^= 0x6A6A6A6Au;
    v15[11] ^= 0x6A6A6A6Au;
    v15[12] ^= 0x6A6A6A6Au;
    sub_DFC40(v12);
    sub_E0468(v12, v15, 0x40u);
    sub_E07F8((int)v15, 0x40u);
    return 1;
  }
}
