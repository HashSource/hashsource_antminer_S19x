char *sub_29777C()
{
  char *result; // r0
  int v1; // r1
  __int64 v2; // r2
  bool v3; // zf
  int v4; // lr

  result = (char *)sub_93028(0x14u);
  v1 = dword_490158;
  v2 = (unsigned int)dword_48BB2C;
  v3 = dword_48BB30 == 0;
  v4 = dword_48BB28;
  *((_DWORD *)result + 1) = dword_490164;
  *(_QWORD *)(result + 12) = v2;
  if ( !v3 )
    HIDWORD(v2) = 1;
  *(_DWORD *)result = v4;
  *((_DWORD *)result + 2) = v1;
  if ( !v3 )
    *((_DWORD *)result + 4) = HIDWORD(v2);
  return result;
}
