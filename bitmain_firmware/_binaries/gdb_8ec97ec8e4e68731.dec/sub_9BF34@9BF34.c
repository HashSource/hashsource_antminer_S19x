int __fastcall sub_9BF34(int a1, int a2, int a3)
{
  _DWORD *v3; // r8
  int v5; // r7
  int v8; // r0
  int result; // r0
  int i; // r4
  int v11; // r0
  int v12; // [sp+0h] [bp-8h] BYREF
  int v13; // [sp+4h] [bp-4h] BYREF

  v3 = (_DWORD *)(a1 + 16 * a3);
  v5 = v3[4];
  sub_9B138(a1, a3, &v12, &v13);
  switch ( v5 )
  {
    case '2':
    case 'Y':
      v11 = sub_26725C(v3[8], v3[9]);
      sub_25A418(a2, "Text: `%.*s'", v11, (const char *)(a1 + 16 * (a3 + 3)));
      goto LABEL_3;
    case 'b':
      v8 = sub_26725C(v3[12], v3[13]);
      sub_25A418(a2, " (%d)", v8);
      goto LABEL_3;
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'u':
LABEL_3:
      result = a3 + v12;
      if ( v13 > 0 )
      {
        for ( i = 0; i < v13; ++i )
          result = sub_156B40(a1, a2, result);
      }
      break;
    case 'o':
    case 'p':
      sub_25A418(a2, "Type @");
      sub_25A44C(v3[8], a2);
      sub_25A418(a2, " (");
      sub_255DB0(v3[8], 0, a2, 0);
    default:
      result = sub_156C10(a1, a2, a3);
      break;
  }
  return result;
}
