int __fastcall sub_3AE0C(_DWORD *a1)
{
  int result; // r0
  int v3; // r3
  int v4; // r5
  _DWORD *v5; // r0
  int v6; // r0
  _DWORD *v7; // r2
  _DWORD *v8; // r0

  result = sub_1FE130(a1);
  if ( result )
  {
    v3 = a1[6];
    v4 = a1[2058];
    if ( v4 == -2 )
    {
      if ( v3 )
      {
        v4 = sub_1533A4(0, sub_3B038, a1);
        goto LABEL_18;
      }
      v6 = a1[1];
      v7 = a1;
    }
    else
    {
      if ( v4 == -1 )
      {
        if ( !v3 )
          goto LABEL_5;
        sub_152E2C(a1[1]);
        v4 = sub_1533A4(0, sub_3B038, a1);
LABEL_18:
        result = sub_1FE1AC(a1);
        if ( result )
        {
          if ( v4 == -1 )
            goto LABEL_6;
          goto LABEL_11;
        }
        goto LABEL_13;
      }
      if ( v3 )
      {
        result = sub_1FE1AC(a1);
        if ( result )
        {
LABEL_11:
          if ( a1[2058] == -1 )
          {
            v8 = (_DWORD *)sub_242FC8(result);
            result = sub_2594B0(*v8, "[fd%d->timer-scheduled]\n", a1[1]);
          }
        }
LABEL_13:
        a1[2058] = v4;
        return result;
      }
      sub_1534A4(a1[2058]);
      v7 = a1;
      v6 = a1[1];
    }
    sub_152D58(v6, sub_3AFA8, v7);
LABEL_5:
    result = sub_1FE1AC(a1);
    if ( !result )
    {
LABEL_8:
      a1[2058] = -1;
      return result;
    }
LABEL_6:
    if ( a1[2058] != -1 )
    {
      v5 = (_DWORD *)sub_242FC8(result);
      result = sub_2594B0(*v5, "[fd%d->fd-scheduled]\n", a1[1]);
    }
    goto LABEL_8;
  }
  return result;
}
