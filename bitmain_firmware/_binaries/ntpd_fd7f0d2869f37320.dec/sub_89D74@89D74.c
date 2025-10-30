_DWORD **__fastcall sub_89D74(const char *a1)
{
  int v2; // r7
  char *v3; // r9
  size_t v4; // r0
  _DWORD **v5; // r4
  _DWORD **result; // r0
  int *v7; // r0
  int v8; // r9
  int *v9; // r8
  int s[8]; // [sp+4h] [bp-28h] BYREF

  v2 = dword_B9168[0];
  v3 = (char *)sub_88C38((int)a1, 1, 2, s);
  if ( v3 == (char *)-1 )
    return 0;
  dword_B9168[0] = 0;
  v4 = strlen(a1);
  v5 = sub_83950(v3, a1, v4);
  if ( v5 )
  {
    sub_88E70((int)s);
  }
  else
  {
    v7 = _errno_location();
    v8 = *v7;
    v9 = v7;
    sub_88E70((int)s);
    *v9 = v8;
  }
  result = v5;
  dword_B9168[0] = v2;
  return result;
}
