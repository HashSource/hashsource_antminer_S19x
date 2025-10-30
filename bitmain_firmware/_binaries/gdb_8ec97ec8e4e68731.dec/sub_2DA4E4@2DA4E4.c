char *__fastcall sub_2DA4E4(int a1, void *a2, _DWORD *a3, const char *a4, const char *a5)
{
  int (__fastcall *v9)(int, void *); // r4
  char *result; // r0
  char s[124]; // [sp+14h] [bp-7Ch] BYREF

  v9 = *(int (__fastcall **)(int, void *))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 276);
  if ( !v9 || (result = (char *)v9(a1, a2)) == 0 )
  {
    memset(s, 0, sizeof(s));
    strncpy(&s[28], a4, 0x10u);
    strncpy(&s[44], a5, 0x50u);
    return sub_2DA3B0(a1, a2, a3, "CORE", 3, s, 0x7Cu);
  }
  return result;
}
