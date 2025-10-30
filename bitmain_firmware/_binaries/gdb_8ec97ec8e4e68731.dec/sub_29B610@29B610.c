signed int __fastcall sub_29B610(const char *a1, int a2, int a3)
{
  int v3; // r6
  signed int result; // r0
  signed int v8; // r8
  int v9; // r4
  size_t v10; // r0
  int v11; // r5
  wchar_t pwc; // [sp+4h] [bp-10h] BYREF
  mbstate_t p; // [sp+8h] [bp-Ch] BYREF

  v3 = 0;
  p.__wch = 0;
  p.__count = 0;
  result = strlen(a1);
  if ( a2 < 0 )
    return v3;
  v8 = result;
  if ( a2 <= result )
  {
    if ( a2 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = mbrtowc(&pwc, &a1[v9], v8 - v9, &p);
        v11 = v10;
        if ( v10 >= 0xFFFFFFFE )
          break;
        if ( !v10 )
          return v3;
        if ( a3 )
        {
          if ( wcwidth(pwc) )
            v3 = v9;
          v9 += v11;
          if ( a2 <= v9 )
            return v3;
        }
        else
        {
          v3 = v9;
LABEL_5:
          v9 += v11;
          if ( a2 <= v9 )
            return v3;
        }
      }
      p.__count = 0;
      v3 = v9;
      p.__wch = 0;
      v11 = 1;
      goto LABEL_5;
    }
    return 0;
  }
  return result;
}
