int __fastcall sub_1CE5A4(int *a1, int a2, int a3)
{
  int v6; // r8
  int v7; // r2
  bool v8; // zf
  const char *v9; // r6
  int v10; // r10
  const char *v11; // r7
  const char *v12; // r0
  bool v13; // zf
  int result; // r0
  int v15; // r2
  char *v16; // r0

  v6 = sub_1B7250(*a1);
  sub_258BD4(v6);
  v7 = a1[1];
  v8 = v7 == 0;
  if ( v7 )
    v8 = v7 == a3;
  if ( v8 )
  {
    v16 = sub_98EEC(a3);
    v7 = a1[1];
    v9 = v16;
    if ( !v7 )
    {
      v11 = "";
      v10 = a1[2];
      goto LABEL_10;
    }
  }
  else if ( a1[3] )
  {
    v9 = "<ends here>";
  }
  else
  {
    v9 = 0;
  }
  if ( a3 == v7 || a1[3] )
  {
    v10 = a1[2];
    v11 = "  ";
LABEL_10:
    v12 = (const char *)sub_25AC8C(v6, a2);
    sub_25A418(v10, "  %s%s %s\n", v11, v12, v9);
    v7 = a1[1];
  }
  v13 = v7 == 0;
  if ( v7 )
    v13 = a3 == v7;
  result = 0;
  v15 = v13;
  a1[3] = v15;
  return result;
}
