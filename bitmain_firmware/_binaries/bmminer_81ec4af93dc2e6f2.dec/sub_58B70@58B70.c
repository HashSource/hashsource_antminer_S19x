_DWORD *__fastcall sub_58B70(int a1, int a2, int a3)
{
  _DWORD *s; // [sp+14h] [bp-8h]

  s = malloc(0x28u);
  if ( !s )
    return 0;
  memset(s, 0, 0x28u);
  s[9] = a1;
  s[7] = a2;
  s[8] = a3;
  *s = s + 1;
  s[1] = s + 1;
  s[2] = s + 1;
  s[3] = 0;
  s[4] = 0;
  return s;
}
