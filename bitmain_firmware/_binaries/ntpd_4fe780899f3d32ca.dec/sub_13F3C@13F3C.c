_DWORD *__fastcall sub_13F3C(const void *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  int v5; // r3

  v2 = (_DWORD *)sub_63BA4(0, 192, 0, 0);
  v3 = v2;
  if ( a1 )
  {
    memcpy(v2, a1, 0xC0u);
  }
  else
  {
    memset(v2, 0, 0xC0u);
    v3[3] = -1;
    v3[4] = -1;
    *((_WORD *)v3 + 71) = word_B9240;
  }
  v5 = sys_ifnum;
  v3[5] = sys_ifnum;
  sys_ifnum = v5 + 1;
  v3[40] = current_time;
  return v3;
}
