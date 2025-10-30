int __fastcall sub_284798(const char *a1)
{
  size_t v2; // r8
  int v3; // r5
  int v4; // r7
  unsigned int v5; // r3
  const char *v6; // r1
  bool v7; // cc
  size_t v9; // r0
  int v10; // r0
  wchar_t pwc; // [sp+4h] [bp-Ch] BYREF
  mbstate_t p; // [sp+8h] [bp-8h] BYREF

  v2 = strlen(a1) + 1;
  v3 = 0;
  v4 = 0;
  p.__count = 0;
  p.__wch = 0;
  while ( 1 )
  {
    v5 = (unsigned __int8)a1[v3];
    v6 = &a1[v3];
    if ( !a1[v3] )
      break;
    while ( 1 )
    {
      v7 = v5 > 0x7F;
      if ( v5 != 127 )
        v7 = v5 > 0x1F;
      if ( v7 )
        break;
      ++v3;
      v4 += 2;
      v5 = (unsigned __int8)a1[v3];
      v6 = &a1[v3];
      if ( !a1[v3] )
        return v4;
    }
    v9 = mbrtowc(&pwc, v6, v2 - v3, &p);
    if ( v9 >= 0xFFFFFFFE )
    {
      ++v4;
      ++v3;
      p.__count = 0;
      p.__wch = 0;
    }
    else
    {
      v3 += v9;
      if ( !v9 )
        return v4;
      v10 = wcwidth(pwc);
      if ( v10 < 0 )
        v10 = 1;
      v4 += v10;
    }
  }
  return v4;
}
