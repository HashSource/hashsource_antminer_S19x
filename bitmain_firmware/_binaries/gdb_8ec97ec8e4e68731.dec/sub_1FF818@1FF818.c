int __fastcall sub_1FF818(int a1, _DWORD *a2, char a3, _DWORD *a4)
{
  char *v8; // r5
  __int64 v9; // r0
  int result; // r0
  __int64 v11; // r2

  v8 = (char *)sub_9836C(0x6Cu);
  HIDWORD(v9) = a1;
  LODWORD(v9) = v8 + 8;
  sub_1FEC84(v9, a2, a3, a4);
  result = sub_33ACC0(v8, &dword_48938C);
  HIDWORD(v11) = dword_489398 + 1;
  LODWORD(v11) = dword_489394 + 1;
  *(_QWORD *)&dword_489394 = v11;
  *(_DWORD *)(dword_489390 + 8) = HIDWORD(v11);
  return result;
}
