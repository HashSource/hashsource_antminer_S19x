bool __fastcall sub_6BFD4(_BYTE *a1)
{
  _BOOL4 result; // r0

  switch ( *a1 )
  {
    case '!':
    case '%':
    case '&':
    case '*':
    case '+':
    case '-':
    case '/':
    case '<':
    case '>':
    case '^':
    case '|':
      result = 1;
      break;
    case '=':
      result = a1[1] == 61;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
