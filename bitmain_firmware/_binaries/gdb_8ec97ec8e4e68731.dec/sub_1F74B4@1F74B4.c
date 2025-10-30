unsigned int __fastcall sub_1F74B4(unsigned __int8 *a1, unsigned int *s)
{
  __int16 v4; // r0
  __int64 v5; // r0
  __int64 v6; // r0
  unsigned int result; // r0

  memset(s, 0, 0x68u);
  *s = sub_15C250(a1, 4, 0);
  s[1] = 0;
  s[24] = sub_15C250(a1 + 4, 4, 0);
  s[25] = 0;
  v4 = sub_15C250(a1 + 8, 4, 0);
  s[4] = sub_1F5F0C(v4, 0);
  s[5] = sub_15C250(a1 + 12, 4, 0);
  s[6] = sub_15C250(a1 + 16, 4, 0);
  s[7] = sub_15C250(a1 + 20, 4, 0);
  s[8] = sub_15C250(a1 + 24, 4, 0);
  s[9] = 0;
  LODWORD(v5) = sub_15C250(a1 + 28, 8, 0);
  *((_QWORD *)s + 6) = v5;
  s[14] = sub_15C250(a1 + 36, 8, 0);
  LODWORD(v6) = sub_15C250(a1 + 44, 8, 0);
  *((_QWORD *)s + 8) = v6;
  s[18] = sub_15C250(a1 + 52, 4, 0);
  s[20] = sub_15C250(a1 + 56, 4, 0);
  result = sub_15C250(a1 + 60, 4, 0);
  s[22] = result;
  return result;
}
