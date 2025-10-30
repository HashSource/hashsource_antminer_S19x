_BYTE *__fastcall sub_26BB08(_DWORD *a1)
{
  _BYTE *result; // r0
  int v3; // r5
  char v4; // r12

  sub_171258(a1);
  result = sub_93094(1u, 0x68u);
  v3 = dword_48AA00;
  v4 = result[4] | 7;
  *((_DWORD *)result + 16) = a1;
  *((_DWORD *)result + 17) = a1;
  *((_DWORD *)result + 22) = v3;
  dword_48AA00 = (int)result;
  result[4] = v4;
  *((_DWORD *)result + 14) = 1;
  *((_DWORD *)result + 23) = 0;
  *(_DWORD *)result = 0;
  *((_DWORD *)result + 2) = 0;
  *((_QWORD *)result + 4) = 0;
  *((_QWORD *)result + 6) = 0;
  *((_QWORD *)result + 5) = 0;
  *((_QWORD *)result + 9) = 0;
  *((_QWORD *)result + 10) = 0;
  return result;
}
