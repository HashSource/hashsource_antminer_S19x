int __fastcall sub_9C430(int result, int a2, _DWORD *a3, int *a4)
{
  _DWORD *v4; // lr

  v4 = (_DWORD *)(result + 16 * a2);
  switch ( *v4 )
  {
    case '(':
      result = 4;
      *a3 = 4;
      *a4 = 0;
      break;
    case 'b':
      result = 3;
      *a3 = 3;
      *a4 = 2;
      break;
    case 'c':
    case 'h':
    case 'i':
      *a3 = 1;
      *a4 = 3;
      result = 1;
      break;
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'k':
    case 'n':
    case 'u':
      result = 1;
      *a3 = 1;
      *a4 = 2;
      break;
    case 'j':
    case 'l':
    case 'm':
    case 'r':
      *a3 = 1;
      *a4 = 1;
      break;
    case 'o':
    case 'p':
    case 't':
      *a3 = 3;
      *a4 = 1;
      result = 3;
      break;
    case 'q':
      *a3 = 3;
      result = sub_26725C(*(v4 - 4), *(v4 - 3));
      *a4 = result;
      break;
    case 's':
      *a3 = 3;
      result = sub_26725C(*(v4 - 4), *(v4 - 3)) + 1;
      *a4 = result;
      break;
    default:
      result = sub_1C30F0();
      break;
  }
  return result;
}
