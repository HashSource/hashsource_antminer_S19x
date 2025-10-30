int __fastcall sub_E23DC(char *a1, const void *a2, unsigned int a3, int a4)
{
  char v4; // r6

  v4 = *a1;
  if ( 14 - (*a1 & 7u) > a3 )
    return -1;
  *((_QWORD *)a1 + 1) = 0;
  a1[15] = a4;
  a1[12] = HIBYTE(a4);
  a1[13] = BYTE2(a4);
  a1[14] = BYTE1(a4);
  *a1 = v4 & 0xBF;
  memcpy(a1 + 1, a2, 14 - (v4 & 7));
  return 0;
}
