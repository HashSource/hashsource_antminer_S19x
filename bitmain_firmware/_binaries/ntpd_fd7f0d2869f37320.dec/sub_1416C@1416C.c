_DWORD *__fastcall sub_1416C(const void *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  int v5; // r2

  v2 = (_DWORD *)sub_64B04(0, 192, 0, 0);
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
    *((_WORD *)v3 + 71) = word_BA240;
  }
  v5 = sys_ifnum++;
  v3[5] = v5;
  v3[40] = current_time;
  return v3;
}
