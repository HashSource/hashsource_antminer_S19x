int __fastcall sub_66EA4(const char *a1)
{
  size_t v2; // r7
  int v3; // r3
  int v5; // r1
  unsigned __int16 v6; // [sp+Eh] [bp-16h] BYREF
  unsigned __int16 v7; // [sp+10h] [bp-14h] BYREF
  unsigned __int16 v8; // [sp+12h] [bp-12h] BYREF
  int v9; // [sp+14h] [bp-10h] BYREF
  int v10; // [sp+18h] [bp-Ch] BYREF

  v2 = strlen(a1);
  if ( sscanf(a1, "%4hu-%2hu-%2hu%n", &v6, &v7, &v8, &v10) == 3 && v10 == v2 )
  {
    v5 = v7 - 1;
    if ( (unsigned __int16)v5 <= 0xBu && (unsigned int)v8 - 1 <= 0x1E )
      return sub_661F8(v6 - 1, v5, v8) - 693596;
    goto LABEL_4;
  }
  if ( sscanf(a1, "%lu%n", &v9, &v10) != 1 || v10 != v2 || (v3 = v9, v9 < 0) )
  {
LABEL_4:
    sub_64E00(&byte_4, "basedate string \"%s\" invalid, build date substituted!", a1);
    return sub_66E18();
  }
  return v3;
}
