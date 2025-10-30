void sub_21A15C()
{
  _DWORD *v0; // r3
  int v1; // r2
  const char *v2; // r0
  int v3; // r1

  v0 = *(_DWORD **)(dword_487D2C + 36);
  if ( v0 )
  {
    while ( 1 )
    {
      v1 = v0[10];
      v2 = *(const char **)(v1 + 72);
      if ( v2 )
        break;
      v0 = (_DWORD *)*v0;
      if ( !v0 )
        goto LABEL_7;
    }
    v3 = *(_DWORD *)(v1 + 76);
  }
  else
  {
LABEL_7:
    v2 = (const char *)sub_9EA0C();
    if ( v2 )
    {
      v3 = 14;
    }
    else
    {
      v2 = sub_103A00();
      if ( v2 )
      {
        v3 = 5;
      }
      else
      {
        v2 = sub_17C490();
        if ( v2 )
        {
          v3 = 6;
        }
        else
        {
          v2 = sub_1BFBB0();
          v3 = (int)v2;
          if ( v2 )
            v3 = 10;
          else
            v2 = "main";
        }
      }
    }
  }
  sub_21A010((int)v2, v3);
}
