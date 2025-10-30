int __fastcall sub_1FD994(int a1, int a2, int a3, int a4)
{
  int *v8; // r0
  char *v9; // r0
  const char *v10; // r1
  char *v11; // r2
  int v12; // r0
  bool v14; // zf

  if ( dword_489378 != a2 )
  {
    sub_2594B0(a1, "\n%c ", a2);
    dword_489378 = a2;
  }
  if ( off_46DB5C == "ascii" )
  {
    if ( a3 != -2 )
    {
      if ( a3 > -2 )
      {
        if ( a3 != -1 )
        {
          if ( a3 == 1235 )
            return sub_256850("<Break>", a1);
          goto LABEL_16;
        }
        goto LABEL_12;
      }
      if ( a3 != -3 )
        goto LABEL_16;
      return sub_256850("<Eof>", a1);
    }
    return sub_2594B0(a1, "<Timeout: %d seconds>", a4);
  }
  sub_259314(32, a1);
  if ( a3 == -2 )
    return sub_2594B0(a1, "<Timeout: %d seconds>", a4);
  if ( a3 > -2 )
  {
    if ( a3 != -1 )
    {
      if ( a3 == 1235 )
        return sub_256850("<Break>", a1);
      goto LABEL_27;
    }
LABEL_12:
    v8 = _errno_location();
    v9 = sub_6FF98(*v8);
    v10 = "<Error: %s>";
    v11 = v9;
    v12 = a1;
    return sub_2594B0(v12, v10, v11);
  }
  if ( a3 == -3 )
    return sub_256850("<Eof>", a1);
LABEL_27:
  if ( off_46DB5C == "hex" )
    return sub_2594B0(a1, "%02x", (unsigned __int8)a3);
  if ( off_46DB5C == "octal" )
    return sub_2594B0(a1, "%03o", (unsigned __int8)a3);
LABEL_16:
  if ( a3 == 11 )
    return sub_256850("\\v", a1);
  if ( a3 > 11 )
  {
    if ( a3 == 13 )
    {
      return sub_256850("\\r", a1);
    }
    else if ( a3 < 13 )
    {
      return sub_256850("\\f", a1);
    }
    else
    {
      if ( a3 != 92 )
      {
LABEL_38:
        v14 = isprint(a3) == 0;
        v10 = "%c";
        v11 = (char *)(unsigned __int8)a3;
        v12 = a1;
        if ( v14 )
          v10 = "\\x%02x";
        return sub_2594B0(v12, v10, v11);
      }
      return sub_256850("\\\\", a1);
    }
  }
  else
  {
    if ( a3 != 9 )
    {
      if ( a3 > 9 )
        return sub_256850("\\n", a1);
      if ( a3 == 8 )
        return sub_256850("\\b", a1);
      goto LABEL_38;
    }
    return sub_256850("\\t", a1);
  }
}
