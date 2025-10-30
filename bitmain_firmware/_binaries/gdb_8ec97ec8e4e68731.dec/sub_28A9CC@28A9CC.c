int __fastcall sub_28A9CC(const char *a1)
{
  char *v2; // r0
  int v3; // r7
  __int64 v4; // r8
  int result; // r0

  if ( byte_48AAFC )
    return 0;
  v2 = strchr(a1, 10);
  v3 = dword_48ADE8;
  v4 = *(_QWORD *)&dword_48ADB0;
  if ( v2 )
    *v2 = 0;
  result = sub_28A638(a1, v3 + 1);
  *(_QWORD *)&dword_48ADB0 = v4;
  dword_48ADE8 = v3;
  return result;
}
