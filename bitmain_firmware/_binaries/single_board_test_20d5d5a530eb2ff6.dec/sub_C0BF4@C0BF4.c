_DWORD *__fastcall sub_C0BF4(_DWORD *a1)
{
  _DWORD *v2; // r6
  int v3; // r0
  int v4; // r4
  int v5; // r8
  int v6; // r7
  _DWORD *v7; // r0
  bool v8; // zf
  int v9; // r10
  int v10; // r0
  int v11; // r9
  int v12; // r0

  if ( !a1 || (v2 = sub_BFD20()) == 0 )
  {
    v4 = 0;
    v11 = 0;
    v6 = 0;
    v9 = 0;
    v5 = 0;
    v2 = 0;
    goto LABEL_19;
  }
  v3 = a1[2];
  v4 = a1[4];
  if ( v3 )
  {
    if ( v4 )
    {
      v4 = a1[3];
      if ( v4 )
      {
        v5 = sub_B8A2C(v3);
        v6 = sub_B8A2C(a1[4]);
        v7 = (_DWORD *)sub_B8A2C(a1[3]);
        v8 = v6 == 0;
        if ( v6 )
          v8 = v5 == 0;
        v9 = (int)v7;
        if ( v8 )
        {
          v4 = 0;
          v11 = 0;
          goto LABEL_19;
        }
        if ( !v7 )
        {
          v4 = 0;
          v11 = 0;
          goto LABEL_19;
        }
        if ( !sub_BFDBC(v2, v5, v7, v6) )
        {
          v4 = 0;
          v11 = 0;
          goto LABEL_19;
        }
        goto LABEL_11;
      }
    }
LABEL_22:
    v11 = v4;
    v6 = v4;
    v9 = v4;
    v5 = v4;
    goto LABEL_19;
  }
  if ( v4 )
  {
LABEL_18:
    v4 = 0;
    v11 = 0;
    v6 = 0;
    v9 = 0;
    v5 = 0;
    goto LABEL_19;
  }
  if ( a1[3] )
    goto LABEL_22;
LABEL_11:
  v10 = a1[5];
  if ( !v10 )
  {
    if ( !a1[6] )
      return v2;
    goto LABEL_18;
  }
  v11 = sub_B8A2C(v10);
  if ( v11 )
  {
    v12 = a1[6];
    if ( v12 )
    {
      v4 = sub_B8A2C(v12);
      if ( !v4 )
      {
        v6 = 0;
        v9 = 0;
        v5 = 0;
        goto LABEL_19;
      }
    }
    else
    {
      v4 = 0;
    }
    if ( sub_BFE38((int)v2, v11, v4) )
      return v2;
    v6 = 0;
    v9 = 0;
    v5 = 0;
  }
  else
  {
    v4 = 0;
    v6 = 0;
    v9 = 0;
    v5 = 0;
  }
LABEL_19:
  sub_B895C(v5);
  sub_B895C(v6);
  sub_B895C(v9);
  sub_B895C(v11);
  sub_B895C(v4);
  sub_BFB8C((int)v2);
  return 0;
}
