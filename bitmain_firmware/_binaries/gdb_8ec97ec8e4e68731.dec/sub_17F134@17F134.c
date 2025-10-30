int __fastcall sub_17F134(char *a1)
{
  int v2; // r4
  int result; // r0
  __int64 v4; // r0

  if ( !sub_22EBBC(a1) )
    sub_946E0("The program is not being run.");
  sub_17E868();
  sub_17E884();
  sub_17E8C4();
  if ( !a1 )
    sub_51E9C("signal number");
  v2 = sub_99A88(a1);
  if ( v2 == 143 )
  {
    v4 = sub_14CC00((int)a1);
    if ( !(_DWORD)v4 )
      goto LABEL_5;
    v2 = sub_1890A0(v4, HIDWORD(v4));
  }
  if ( !v2 )
  {
LABEL_5:
    v2 = 0;
    goto LABEL_6;
  }
  if ( !sub_188FD8(v2) )
    sub_946E0("Signal handling set to not pass this signal to the program.");
LABEL_6:
  result = ((int (*)(void))loc_23DBE4)();
  *(_DWORD *)(result + 144) = v2;
  return result;
}
