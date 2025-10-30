bool sub_22DA8C()
{
  _BOOL4 result; // r0
  int v1; // r3

  result = sub_183D9C();
  LOWORD(v1) = (unsigned __int16)&dword_46DBC0;
  if ( result )
  {
    HIWORD(v1) = (unsigned int)&dword_46DBC0 >> 16;
    *(_DWORD *)(v1 + 0x14) = *(_DWORD *)(v1 + 0x18);
    sub_946E0("Cannot change this setting while the inferior is running.");
  }
  HIWORD(v1) = (unsigned int)&dword_46DBC0 >> 16;
  *(_DWORD *)(v1 + 0x18) = *(_DWORD *)(v1 + 0x14);
  return result;
}
