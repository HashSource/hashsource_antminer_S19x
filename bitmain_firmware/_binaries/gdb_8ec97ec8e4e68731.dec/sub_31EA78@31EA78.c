int __fastcall sub_31EA78(int a1, int a2)
{
  int v3; // r4
  int result; // r0

  v3 = a2 + 2;
  while ( 2 )
  {
    result = v3 - 2;
    if ( *(_BYTE *)(v3 - 2) == 78 )
    {
      switch ( *(_BYTE *)(v3 - 1) )
      {
        case 'a':
          sub_31E858(a1, "pure ");
          goto LABEL_5;
        case 'b':
          sub_31E858(a1, "nothrow ");
          goto LABEL_5;
        case 'c':
          sub_31E858(a1, "ref ");
          goto LABEL_5;
        case 'd':
          sub_31E858(a1, "@property ");
          goto LABEL_5;
        case 'e':
          sub_31E858(a1, "@trusted ");
          goto LABEL_5;
        case 'f':
          sub_31E858(a1, "@safe ");
          goto LABEL_5;
        case 'g':
        case 'h':
        case 'k':
          return result;
        case 'i':
          sub_31E858(a1, "@nogc ");
          goto LABEL_5;
        case 'j':
          sub_31E858(a1, "return ");
          goto LABEL_5;
        case 'l':
          sub_31E858(a1, "scope ");
LABEL_5:
          v3 += 2;
          continue;
        default:
          return 0;
      }
    }
    return result;
  }
}
