_DWORD *__fastcall sub_187C40(_DWORD *a1, int a2)
{
  int v3; // r1
  int v4; // r2
  int v6; // r2
  int v7; // r0

  if ( dword_487950 || (_UNKNOWN *)off_46D590[0] == &unk_3BBD30 )
    goto LABEL_8;
  if ( off_46D590[0] == "step" )
  {
    if ( a2 )
    {
LABEL_8:
      v6 = dword_4878F4;
      *(_QWORD *)a1 = qword_4878EC;
      a1[2] = v6;
      return a1;
    }
  }
  else if ( off_46D590[0] == "replay" && sub_23272C(dword_46BBCC, dword_46BBD0, dword_46BBD4, dword_48794C) )
  {
    goto LABEL_8;
  }
  if ( dword_487970 || !sub_23102C() )
  {
    v3 = dword_46BBD0;
    v4 = dword_46BBD4;
    *a1 = dword_46BBCC;
    a1[1] = v3;
    a1[2] = v4;
    return a1;
  }
  v7 = ps_getpid_0((int)&qword_4878EC);
  sub_98F50(a1, v7);
  return a1;
}
