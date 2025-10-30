char *__fastcall sub_C09B8(char *a1, char a2)
{
  char *result; // r0
  __int64 v5; // r2

  result = sub_C0878(a1, 1);
  v5 = *(_QWORD *)a1;
  ++*((_DWORD *)a1 + 1);
  *(_BYTE *)(v5 + HIDWORD(v5)) = a2;
  return result;
}
