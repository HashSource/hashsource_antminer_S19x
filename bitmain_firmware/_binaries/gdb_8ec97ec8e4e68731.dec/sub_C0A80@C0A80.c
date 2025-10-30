int __fastcall sub_C0A80(char *a1, unsigned int a2)
{
  char v3; // r5
  int v4; // r3
  int v5; // r2
  int result; // r0
  __int64 v7; // r2

  if ( a2 > 0xFF )
    sub_946E0("GDB bug: ax-general.c (ax_trace_quick): size out of range for trace_quick");
  v3 = a2;
  sub_C0878(a1, 2);
  v4 = *((_DWORD *)a1 + 1);
  v5 = *(_DWORD *)a1;
  result = v4 + 1;
  *((_DWORD *)a1 + 1) = v4 + 1;
  *(_BYTE *)(v5 + v4) = 13;
  v7 = *(_QWORD *)a1;
  ++*((_DWORD *)a1 + 1);
  *(_BYTE *)(v7 + HIDWORD(v7)) = v3;
  return result;
}
