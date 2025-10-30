bool __fastcall sub_2DA78(_QWORD *a1)
{
  _WORD *v2; // r3
  __int16 v3; // r0
  __int64 v4; // r6
  __int16 v5; // r2
  __int64 v6; // r6

  memset(a1, 0, 0x20u);
  v2 = sub_2D0F4(0);
  v3 = v2[18];
  v4 = *((_QWORD *)v2 + 8);
  v5 = v2[19];
  *((_WORD *)a1 + 10) = v3;
  *a1 = v4;
  v6 = *((_QWORD *)v2 + 6);
  *((_WORD *)a1 + 11) = v5 - v3;
  a1[1] = v6;
  *((_BYTE *)a1 + 27) = *((_BYTE *)v2 + 72);
  return sub_6DAF4(v2 + 24, v2 + 28) >= 0;
}
