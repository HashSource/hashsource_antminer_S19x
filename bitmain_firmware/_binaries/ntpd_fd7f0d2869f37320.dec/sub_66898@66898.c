_QWORD *__fastcall sub_66898(_QWORD *a1, int a2, time_t *timer)
{
  __int64 v4; // r4
  bool v5; // cf
  time_t v7; // r0
  int v8; // [sp+4h] [bp-10h]

  if ( timer )
  {
    v4 = *timer;
  }
  else
  {
    v8 = a2;
    v7 = off_B8CE8(0);
    a2 = v8;
    v4 = v7;
  }
  v5 = __CFADD__((_DWORD)v4, 0x80000000);
  LODWORD(v4) = v4 + 0x80000000;
  HIDWORD(v4) -= !v5;
  *a1 = v4 + (unsigned int)(2085978496 - v4 + a2);
  return a1;
}
