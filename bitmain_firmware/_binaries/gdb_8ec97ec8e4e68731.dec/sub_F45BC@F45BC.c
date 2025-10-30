int __fastcall sub_F45BC(int result, unsigned int a2, unsigned int a3, int a4, int a5, int a6)
{
  int v7; // r10
  int (*v8)(); // r7
  int (*v10)(); // lr
  unsigned int v12; // r11
  char *v13; // r0

  v7 = result;
  v8 = *(int (**)())(a6 + 64);
  if ( v8 == (int (*)())&loc_F6D00 )
  {
    if ( a3 <= a2 )
    {
      a4 = a3;
    }
    else
    {
      v12 = a3;
      while ( 1 )
      {
        v13 = strchr(" \t\n*|\"';:?><", *(unsigned __int8 *)(v12 - 1));
        a4 = v12--;
        if ( v13 )
          break;
        if ( v12 == a2 )
        {
          a4 = v12;
          if ( a5 )
            return ((int (__fastcall *)(int, int, int, unsigned int))v8)(a6, v7, a4, a3);
          goto LABEL_12;
        }
      }
    }
    if ( a5 )
      return ((int (__fastcall *)(int, int, int, unsigned int))v8)(a6, v7, a4, a3);
LABEL_12:
    v10 = *(int (**)())(a6 + 68);
    if ( !v10 )
      v10 = (int (*)())sub_F4558;
  }
  else
  {
    if ( a5 )
    {
      if ( !v8 )
        return result;
      return ((int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))v8)(a6, v7, a4, a3);
    }
    v10 = *(int (**)())(a6 + 68);
    if ( !v10 )
    {
      if ( v8 == sub_F7428 )
      {
        v10 = sub_F7A44;
      }
      else
      {
        v10 = (int (*)())sub_F4570;
        if ( (char *)v8 != (char *)sub_F4B7C )
          v10 = sub_F4588;
      }
    }
  }
  return ((int (__fastcall *)(int, int, int, unsigned int))v10)(a6, v7, a4, a3);
}
