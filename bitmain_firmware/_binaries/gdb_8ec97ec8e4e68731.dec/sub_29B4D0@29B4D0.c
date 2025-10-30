int __fastcall sub_29B4D0(const char *a1, int a2, int a3, int a4)
{
  int v4; // r6
  int v5; // r4
  int v8; // r0
  bool v9; // cc
  size_t v10; // r2
  size_t v11; // r0
  size_t v13; // r0
  const char *v14; // r1
  size_t v15; // r2
  size_t v16; // r5
  wchar_t pwc; // [sp+4h] [bp-10h] BYREF
  mbstate_t p; // [sp+8h] [bp-Ch] BYREF

  v4 = a3;
  v5 = a2 & ~(a2 >> 31);
  p.__wch = 0;
  p.__count = 0;
  if ( a3 <= 0 )
    return v5;
  v8 = sub_29B320(a1, a2 & ~(a2 >> 31), &p) + v5;
  v9 = v8 <= v5;
  v5 = v8;
  if ( v9 || (--v4, v4) )
  {
    while ( 1 )
    {
      v10 = strlen(&a1[v5]);
      if ( !v10 )
        goto LABEL_10;
      v11 = mbrtowc(&pwc, &a1[v5], v10, &p);
      if ( v11 >= 0xFFFFFFFE )
        break;
      if ( !v11 )
        goto LABEL_10;
      v5 += v11;
      if ( !a4 || wcwidth(pwc) )
      {
        --v4;
LABEL_9:
        if ( !v4 )
          goto LABEL_10;
      }
    }
    ++v5;
    --v4;
    p.__count = 0;
    p.__wch = 0;
    goto LABEL_9;
  }
LABEL_10:
  if ( a4 )
  {
    v13 = strlen(&a1[v5]);
    v14 = &a1[v5];
    v15 = v13;
    while ( 1 )
    {
      v16 = mbrtowc(&pwc, v14, v15, &p);
      if ( v16 - 1 > 0xFFFFFFFC || wcwidth(pwc) )
        break;
      v5 += v16;
      v15 = strlen(&a1[v5]);
      v14 = &a1[v5];
    }
  }
  return v5;
}
