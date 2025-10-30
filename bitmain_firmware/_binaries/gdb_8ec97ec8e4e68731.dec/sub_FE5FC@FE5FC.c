int __fastcall sub_FE5FC(_DWORD *a1)
{
  int result; // r0
  char *v3; // r0

  result = 0;
  while ( 2 )
  {
    switch ( *a1 )
    {
      case 0:
      case 7:
      case 8:
      case 0x31:
      case 0x32:
        if ( !result )
          return (int)a1;
        *(_DWORD *)(result + 8) = a1;
        return result;
      case 1:
      case 2:
        a1 = (_DWORD *)a1[3];
        continue;
      case 3:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1E:
      case 0x21:
        a1 = (_DWORD *)a1[2];
        continue;
      case 4:
        if ( !result )
        {
          result = (int)a1;
          a1 = (_DWORD *)a1[2];
          continue;
        }
        v3 = (char *)sub_94700(
                       (int)"cp-support.c",
                       747,
                       "%s: Assertion `%s' failed.",
                       "demangle_component* unqualified_name_from_comp(demangle_component*)",
                       "last_template == NULL");
        return sub_FE758(v3);
      default:
        return 0;
    }
  }
}
