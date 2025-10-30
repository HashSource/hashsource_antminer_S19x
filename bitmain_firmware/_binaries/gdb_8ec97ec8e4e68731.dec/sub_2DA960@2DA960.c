char *__fastcall sub_2DA960(int a1, void *a2, _DWORD *a3, int a4, __int16 a5, const void *a6)
{
  int (__fastcall *v10)(int, void *, _DWORD *); // r4
  char *result; // r0
  _DWORD s[38]; // [sp+14h] [bp-98h] BYREF

  v10 = *(int (__fastcall **)(int, void *, _DWORD *))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 276);
  if ( !v10 || (result = (char *)v10(a1, a2, a3)) == 0 )
  {
    memset(s, 0, 0x94u);
    s[6] = a4;
    LOWORD(s[3]) = a5;
    memcpy(&s[18], a6, 0x48u);
    return sub_2DA3B0(a1, a2, a3, "CORE", 1, s, 0x94u);
  }
  return result;
}
