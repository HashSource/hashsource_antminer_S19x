_QWORD *__fastcall sub_65844(_QWORD *a1, int a2, time_t *timer)
{
  __int64 v5; // r0
  __int64 v6; // r10

  if ( timer )
    v5 = *timer;
  else
    v5 = off_B7CE8(0);
  LODWORD(v6) = v5 + 0x80000000;
  HIDWORD(v6) = HIDWORD(v5) - !__CFADD__((_DWORD)v5, 0x80000000);
  *a1 = v6 + a2 + 2085978496 - ((unsigned int)v5 + 0x80000000);
  return a1;
}
