int __fastcall sub_60560(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0
  __int64 v4; // r2
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  int v8; // r1
  int result; // r0

  v2 = dword_487668;
  v3 = sub_15481C(0);
  LODWORD(v4) = sub_1536A4;
  HIDWORD(v4) = sub_60970;
  *(_QWORD *)(v2 + 20) = v4;
  v5 = (_DWORD *)sub_242F8C(v3);
  *v5 = a1[4];
  v6 = (_DWORD *)sub_242FB4(v5);
  *v6 = a1[5];
  v7 = (_DWORD *)sub_242FC8(v6);
  v8 = a1[7];
  *v7 = a1[6];
  dword_487A6C = v8;
  dword_487A38 = v8;
  result = sub_191A30();
  off_4896A0 = sub_66270;
  return result;
}
