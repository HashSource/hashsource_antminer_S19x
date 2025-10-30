int __fastcall sub_258104(
        int a1,
        int (__fastcall *a2)(const char *, int),
        int (*a3)(int, const char *, ...),
        int a4,
        int a5)
{
  _BOOL4 v6; // r1
  bool v8; // cc
  bool v11; // zf
  int result; // r0

  v6 = a1 <= 31;
  if ( (unsigned int)(a1 - 127) <= 0x20 )
    v6 = 1;
  if ( v6 )
  {
    switch ( a1 )
    {
      case 7:
        result = a2("\\a", a4);
        break;
      case 8:
        result = a2("\\b", a4);
        break;
      case 9:
        result = a2("\\t", a4);
        break;
      case 10:
        result = a2("\\n", a4);
        break;
      case 12:
        result = a2("\\f", a4);
        break;
      case 13:
        result = a2("\\r", a4);
        break;
      case 27:
        result = a2((const char *)&word_3C30D8, a4);
        break;
      default:
        return a3(a4, "\\%.3o", a1);
    }
  }
  else
  {
    v8 = dword_48A9B0 <= 0;
    if ( dword_48A9B0 )
      v8 = a1 <= 127;
    if ( v8 )
    {
      if ( a5 )
      {
        v11 = a1 == a5;
        if ( a1 != a5 )
          v11 = a1 == 92;
        if ( v11 )
          a2(byte_3C30D4, a4);
      }
      return a3(a4, "%c", a1);
    }
    else
    {
      return a3(a4, "\\%.3o", a1);
    }
  }
  return result;
}
