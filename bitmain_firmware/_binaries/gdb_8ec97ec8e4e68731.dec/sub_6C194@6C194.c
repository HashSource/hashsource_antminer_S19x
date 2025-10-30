int __fastcall sub_6C194(const char **a1)
{
  const char *v1; // r2
  const char *v2; // r1
  int v3; // r3
  int v4; // r3
  int v6; // r3
  int v7; // r3

  v1 = *a1;
  v2 = *a1 + 1;
  v3 = *(unsigned __int8 *)*a1 - 33;
  *a1 = v2;
  switch ( v3 )
  {
    case 0:
      return 59;
    case 4:
      return 5;
    case 5:
      if ( v1[1] != 38 )
        return 11;
      v4 = 9;
      *a1 = v1 + 2;
      return v4;
    case 9:
      return 3;
    case 10:
      return 1;
    case 12:
      return 2;
    case 14:
      return 4;
    case 27:
      v6 = *((unsigned __int8 *)v1 + 1);
      switch ( v6 )
      {
        case '<':
          v4 = 7;
          *a1 = v1 + 2;
          break;
        case '=':
          v4 = 18;
          *a1 = v1 + 2;
          break;
        case '>':
          v4 = 15;
          *a1 = v1 + 2;
          break;
        default:
          return 16;
      }
      return v4;
    case 28:
      if ( v1[1] == 61 )
        return 14;
      a1 = (const char **)sub_94700(
                            "stap-probe.c",
                            412,
                            "%s: Assertion `%s' failed.",
                            "exp_opcode stap_get_opcode(const char**)",
                            "**s == '='");
LABEL_25:
      v7 = *((unsigned __int8 *)v1 + 1);
      if ( v7 == 62 )
      {
        v4 = 8;
        *a1 = v1 + 2;
      }
      else if ( v7 == 61 )
      {
        v4 = 19;
        *a1 = v1 + 2;
      }
      else
      {
        return 17;
      }
      return v4;
    case 29:
      goto LABEL_25;
    case 61:
      return 13;
    case 91:
      if ( v1[1] != 124 )
        return 12;
      v4 = 10;
      *a1 = v1 + 2;
      return v4;
    default:
      sub_946E0("Invalid opcode in expression `%s' for SystemTapprobe", v2);
  }
}
