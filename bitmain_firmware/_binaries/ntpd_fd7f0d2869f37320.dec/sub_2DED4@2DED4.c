bool __fastcall sub_2DED4(_QWORD *a1)
{
  _QWORD *v2; // r3
  __int16 v3; // r0
  __int64 v4; // r8
  __int64 v5; // r6
  __int16 v6; // r2

  memset(a1, 0, 0x20u);
  v2 = sub_2D4D0(0);
  v3 = *((_WORD *)v2 + 18);
  v4 = v2[8];
  v5 = v2[6];
  v6 = *((_WORD *)v2 + 19);
  *((_WORD *)a1 + 10) = v3;
  *a1 = v4;
  *((_WORD *)a1 + 11) = v6 - v3;
  a1[1] = v5;
  *((_BYTE *)a1 + 27) = *((_BYTE *)v2 + 72);
  return sub_6EAC0(v2 + 6, v2 + 7) >= 0;
}
