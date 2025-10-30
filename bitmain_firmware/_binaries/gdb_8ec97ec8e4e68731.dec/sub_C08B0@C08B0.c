char *__fastcall sub_C08B0(char *a1, char a2, unsigned int a3)
{
  char v5; // r5
  char *result; // r0
  __int64 v7; // r2
  __int64 v8; // r2

  if ( a3 > 0xFF )
    sub_946E0("GDB bug: ax-general.c (generic_ext): bit count out of range");
  v5 = a3;
  result = sub_C0878(a1, 2);
  v7 = *(_QWORD *)a1;
  ++*((_DWORD *)a1 + 1);
  *(_BYTE *)(v7 + HIDWORD(v7)) = a2;
  v8 = *(_QWORD *)a1;
  ++*((_DWORD *)a1 + 1);
  *(_BYTE *)(v8 + HIDWORD(v8)) = v5;
  return result;
}
