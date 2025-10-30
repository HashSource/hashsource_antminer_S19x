const char *__fastcall sub_2F260(const char *a1)
{
  char v4[12]; // [sp+10h] [bp-81Ch] BYREF
  _DWORD *v5; // [sp+810h] [bp-1Ch]
  const char *v6; // [sp+814h] [bp-18h]
  int v7; // [sp+818h] [bp-14h]
  size_t v8; // [sp+81Ch] [bp-10h]
  signed int v9; // [sp+820h] [bp-Ch]
  char *v10; // [sp+824h] [bp-8h]

  v10 = strchr(a1, 59);
  if ( !v10 )
    return "No semicolon separated quota;URL pair found";
  v9 = strlen(a1);
  *v10 = 0;
  v8 = strlen(a1);
  if ( !v8 )
    return "No parameter for quota found";
  v9 -= v8 + 1;
  if ( v9 <= 0 )
    return "No parameter for URL found";
  v7 = atoi(a1);
  if ( v7 < 0 )
    return "Invalid negative parameter for quota set";
  v6 = &a1[v8 + 1];
  v5 = (_DWORD *)sub_2EFB0();
  sub_2F028((int)v5, v6);
  v5[14] = v7;
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
  {
    snprintf(v4, 0x800u, "Setting pool %d to quota %d", *v5, v5[14]);
    sub_1DB6C(6, v4, 0);
  }
  sub_2E310();
  return 0;
}
