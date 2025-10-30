size_t __fastcall sub_20E5C(int a1, const char *a2)
{
  size_t result; // r0
  __int64 v3; // d17
  _BYTE *v4; // r3
  size_t *v7; // [sp+4h] [bp-40h]
  _DWORD s[7]; // [sp+Ch] [bp-38h] BYREF
  __int64 v9; // [sp+28h] [bp-1Ch]
  signed int v10; // [sp+30h] [bp-14h]
  int j; // [sp+34h] [bp-10h]
  int i; // [sp+38h] [bp-Ch]
  int v13; // [sp+3Ch] [bp-8h]

  memset(s, 0, sizeof(s));
  result = strlen(a2);
  v10 = result;
  for ( i = 0; i < v10; ++i )
  {
    v13 = (unsigned __int8)a2[i];
    v13 = dword_6AE80[v13];
    for ( j = 6; j >= 0; --j )
    {
      v3 = 4LL * (unsigned int)s[j];
      v9 = (unsigned int)v13 + 2 * (vshld_n_s64(v3, 3u) - v3 + (unsigned int)s[j]);
      result = 0;
      v13 = BYTE4(v9) & 0x3F;
      s[j] = v9;
    }
  }
  v4 = (_BYTE *)a1;
  v7 = (size_t *)(a1 + 1);
  *v4 = s[0];
  for ( i = 1; i <= 6; ++i )
  {
    result = sub_1F920(s[i]);
    *v7++ = result;
  }
  return result;
}
