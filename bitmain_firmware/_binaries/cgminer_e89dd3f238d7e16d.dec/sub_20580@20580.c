int __fastcall sub_20580(int a1, const char *a2)
{
  __int64 v2; // r0
  _BYTE *v3; // r3
  _DWORD *v7; // [sp+4h] [bp-58h]
  _DWORD s[7]; // [sp+Ch] [bp-50h] BYREF
  __int64 v9; // [sp+28h] [bp-34h]
  int v10; // [sp+30h] [bp-2Ch]
  int j; // [sp+34h] [bp-28h]
  int i; // [sp+38h] [bp-24h]
  int v13; // [sp+3Ch] [bp-20h]

  memset(s, 0, sizeof(s));
  LODWORD(v2) = strlen(a2);
  v10 = v2;
  for ( i = 0; i < v10; ++i )
  {
    v13 = (unsigned __int8)a2[i];
    v13 = dword_6A200[v13];
    for ( j = 6; j >= 0; --j )
    {
      v2 = 58LL * (unsigned int)s[j] + (unsigned int)v13;
      v9 = v2;
      v13 = BYTE4(v2) & 0x3F;
      s[j] = v2;
    }
  }
  v3 = (_BYTE *)a1;
  v7 = (_DWORD *)(a1 + 1);
  *v3 = s[0];
  for ( i = 1; i <= 6; ++i )
  {
    LODWORD(v2) = sub_1EFE0(s[i]);
    *v7++ = v2;
  }
  return v2;
}
