void __fastcall sub_266EA4(int a1, int a2, int a3, int a4, __int64 a5)
{
  char *v6; // r0
  int v7; // r1
  int v8; // r3
  __int64 v9; // r0

  switch ( a2 )
  {
    case 'b':
      v8 = 2;
      goto LABEL_5;
    case 'd':
      v6 = sub_98C1C(a5, 10, 1, 0, 1);
      v7 = a1;
      goto LABEL_3;
    case 'g':
      v6 = sub_98C1C(a5, 16, 0, 16, 1);
      v7 = a1;
      goto LABEL_3;
    case 'h':
      v8 = 4;
      goto LABEL_5;
    case 'o':
      v6 = sub_98C1C(a5, 8, 0, 0, a3);
      v7 = a1;
      goto LABEL_3;
    case 'u':
      v6 = sub_98C1C(a5, 10, 0, 0, 1);
      v7 = a1;
      goto LABEL_3;
    case 'w':
      v8 = 8;
LABEL_5:
      v6 = sub_98C1C(a5, 16, 0, v8, 1);
      v7 = a1;
      goto LABEL_3;
    case 'x':
      v6 = sub_98C1C(a5, 16, 0, 0, a3);
      v7 = a1;
LABEL_3:
      sub_25A6BC(v6, v7);
      break;
    default:
      v9 = sub_94700((int)"valprint.c", 1328, "failed internal consistency check");
      sub_267064(v9, HIDWORD(v9));
      break;
  }
}
