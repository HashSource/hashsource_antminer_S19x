int __fastcall sub_603B4(_DWORD *a1, int a2)
{
  int v4; // r5
  int v5; // r5
  int v6; // r5
  int v7; // r5
  char *v8; // r5
  int v9; // r0
  int result; // r0
  int v11; // r0

  a1[9] = *(_DWORD *)sub_242F8C(a1);
  v4 = sub_9836C(44);
  sub_60020(v4, a1[9], (int)"~", 34);
  a1[4] = v4;
  v5 = sub_9836C(44);
  sub_60020(v5, a1[9], (int)&unk_35AF90, 34);
  a1[5] = v5;
  a1[6] = v5;
  v6 = sub_9836C(44);
  sub_60020(v6, a1[9], (int)"@", 34);
  a1[7] = v6;
  v7 = sub_9836C(44);
  sub_60020(v7, a1[9], (int)&word_3FDE24, 0);
  a1[8] = v7;
  v8 = (char *)sub_191738(a1);
  if ( !strcmp(v8, "mi") )
    goto LABEL_7;
  if ( !strcmp(v8, "mi1") )
  {
    v9 = 1;
    goto LABEL_4;
  }
  if ( !strcmp(v8, "mi2") )
  {
LABEL_7:
    v9 = 2;
  }
  else
  {
    if ( strcmp(v8, "mi3") )
    {
      sub_94700("mi/mi-interp.c", 146, "%s: %s", "virtual void mi_interp::init(bool)", "unhandled MI version");
      sub_33AC04(v8);
      sub_338FFC(v11);
    }
    v9 = 3;
  }
LABEL_4:
  a1[11] = sub_69238(v9);
  result = sub_F01DC(a1[4]);
  a1[12] = result;
  if ( a2 )
    return sub_183B38(sub_60E80, a1);
  return result;
}
