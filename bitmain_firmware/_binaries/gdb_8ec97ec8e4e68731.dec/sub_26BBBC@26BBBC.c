_BYTE *__fastcall sub_26BBBC(_DWORD *a1, int a2)
{
  _DWORD *v2; // r0

  v2 = (_DWORD *)sub_172140(
                   a1,
                   a2,
                   *((unsigned __int8 *)off_46D5A4[0] + 113),
                   0,
                   *((unsigned __int8 *)off_46D5A4[0] + 113) + a2 - 1,
                   (*((unsigned __int8 *)off_46D5A4[0] + 113) + a2 - 1) >> 31);
  return sub_26BB80(v2);
}
