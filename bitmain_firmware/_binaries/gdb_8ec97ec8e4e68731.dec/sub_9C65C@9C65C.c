int __fastcall sub_9C65C(int a1, int *a2, int a3, int a4)
{
  int v7; // r1
  int v9; // r6
  int v10; // r8
  int v11; // r1
  int v12; // r3
  int result; // r0
  int v14; // r6
  int v15; // r0
  __int64 v16; // r2
  int v17; // r2
  int v18; // r0
  int i; // r6
  char *v20; // r0
  int v21; // r6
  int v22; // [sp+8h] [bp-Ch] BYREF
  int v23; // [sp+Ch] [bp-8h] BYREF

  v7 = *a2;
  v9 = a1 + 16 * v7;
  v10 = *(_DWORD *)(v9 + 16);
  sub_9B138(a1, v7, &v22, &v23);
  v11 = *a2;
  v12 = *a2 + v22;
  *a2 = v12;
  switch ( v10 )
  {
    case '(':
      v15 = sub_21B3C4(*(_DWORD *)(v9 + 48));
      return sub_25A6BC(v15, a3);
    case 'b':
      sub_154CA8(a1, a2, a3, 17);
      sub_25A6BC(" in ", a3);
      sub_154CA8(a1, a2, a3, 17);
      result = sub_25A6BC("'range", a3);
      v16 = *(_QWORD *)(v9 + 32);
      if ( v16 >= 2 )
        return sub_25A418(a3, "(%ld)", (_DWORD)v16);
      return result;
    case 'c':
      if ( a4 > 8 )
      {
        sub_25A6BC("(", a3);
        sub_154CA8(a1, a2, a3, 17);
        sub_25A6BC(" in ", a3);
        sub_154CA8(a1, a2, a3, 9);
        sub_25A6BC(" .. ", a3);
        sub_154CA8(a1, a2, a3, 9);
        return sub_25A6BC(")", a3);
      }
      else
      {
        sub_154CA8(a1, a2, a3, 17);
        sub_25A6BC(" in ", a3);
        sub_154CA8(a1, a2, a3, 9);
        sub_25A6BC(" .. ", a3);
        return sub_154CA8(a1, a2, a3, 9);
      }
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
      v17 = a1 + 16 * v12;
      if ( *(_DWORD *)(v17 + 16) == 88 )
      {
        v18 = *(_DWORD *)(v17 + 32);
        if ( **(_BYTE **)(v18 + 24) != 10 )
        {
          (*((void (__fastcall **)(int, char *))off_46D5A4[0] + 15))(v18, "");
          v12 = *a2;
        }
        *a2 = v12 + 3;
      }
      else
      {
        sub_154CA8(a1, a2, a3, 17);
      }
      result = sub_25A418(a3, "'%s", *(const char **)&asc_373FF8[4 * v10 - 332]);
      if ( v23 <= 1 )
        return result;
      for ( i = 1; i < v23; ++i )
      {
        if ( i == 1 )
          v20 = " (";
        else
          v20 = ", ";
        sub_25A6BC(v20, a3);
        sub_154CA8(a1, a2, a3, 2);
      }
LABEL_26:
      result = sub_25A6BC(")", a3);
      break;
    case 'o':
      sub_255DB0(*(_DWORD *)(v9 + 32), "", a3, 0);
    case 'p':
      sub_154CA8(a1, a2, a3, 17);
      sub_25A6BC(" in ", a3);
      return (*((int (__fastcall **)(_DWORD, char *, int, int, _DWORD, const char *))off_46D5A4[0] + 15))(
               *(_DWORD *)(v9 + 32),
               "",
               a3,
               1,
               0,
               "\a");
    case 'q':
      sub_25A6BC("(", a3);
      if ( v23 > 0 )
      {
        v21 = 0;
        while ( 1 )
        {
          sub_154CA8(a1, a2, a3, 17);
          if ( v23 <= ++v21 )
            break;
          sub_25A6BC(", ", a3);
        }
      }
      goto LABEL_26;
    case 'r':
      sub_25A6BC("others => ", a3);
      goto LABEL_3;
    case 's':
      if ( v23 > 1 )
      {
        v14 = 0;
        while ( 1 )
        {
          sub_154CA8(a1, a2, a3, 17);
          if ( v23 - 1 <= ++v14 )
            break;
          sub_25A6BC("|", a3);
        }
      }
      sub_25A6BC(" => ", a3);
      goto LABEL_3;
    case 't':
      goto LABEL_3;
    case 'u':
      sub_154CA8(a1, a2, a3, 17);
      sub_25A6BC(&word_3BB850, a3);
LABEL_3:
      result = sub_154CA8(a1, a2, a3, 17);
      break;
    default:
      *a2 = v11;
      result = sub_154CC4(a1, a2, a3, a4);
      break;
  }
  return result;
}
