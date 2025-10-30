const char *__fastcall sub_285EC8(const char *a1, int a2, _BYTE *a3)
{
  char *v5; // r0
  _BYTE *v7; // [sp+4h] [bp-8h]
  _BYTE *v8; // [sp+4h] [bp-8h]

  if ( a1
    && dword_48ACB4
    && dword_48ACC0
    && dword_47074C
    && (!*a3 || (v7 = a3, v5 = strchr((const char *)dword_48ACB4, (unsigned __int8)*a3), a3 = v7, v5))
    && (v8 = a3, dword_48ACFC)
    && strpbrk(a1, (const char *)dword_48ACFC)
    && off_470758 )
  {
    return ((_BYTE *(__fastcall *)(const char *, int, _BYTE *))off_470758)(a1, a2, v8);
  }
  else
  {
    return a1;
  }
}
