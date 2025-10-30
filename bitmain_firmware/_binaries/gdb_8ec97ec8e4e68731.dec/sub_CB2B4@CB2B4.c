int __fastcall sub_CB2B4(int a1)
{
  int result; // r0
  _DWORD *v3; // r4
  int v4; // r1

  result = sub_1B6B24(a1, dword_4787FC);
  if ( !result )
  {
    v3 = sub_9836C(0x58u);
    memset(v3, 0, 0x58u);
    memset(v3 + 2, 0, 0x20u);
    v3[11] = 0;
    v3[12] = 0;
    v3[13] = 0;
    v3[14] = 0;
    v4 = dword_4787FC;
    v3[15] = 0;
    v3[16] = 0;
    v3[17] = 0;
    v3[19] = 0;
    v3[20] = 0;
    v3[21] = 0;
    sub_1B6B1C(a1, v4, v3);
    return (int)v3;
  }
  return result;
}
