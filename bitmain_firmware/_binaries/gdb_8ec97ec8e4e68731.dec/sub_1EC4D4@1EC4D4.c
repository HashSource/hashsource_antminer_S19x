_DWORD *__fastcall sub_1EC4D4(int a1, int a2, int a3, int a4)
{
  char v4; // r6
  char v7; // r4
  int v8; // r0
  _DWORD *v9; // r5
  int v11; // r0
  int v12; // r0
  const char **v13; // r5
  size_t v14; // r4

  v4 = a1;
  if ( a3 == -1 )
  {
    v11 = sub_16F654((unsigned __int8)a1);
    v12 = ((int (__fastcall *)(int))loc_1E2770)(v11);
    v13 = (const char **)dword_488C94;
    v14 = sub_1E2890(v12);
    a1 = ((int (__fastcall *)(int))loc_1E2198)(51);
    if ( a1 == 2 )
    {
      v7 = 0;
    }
    else
    {
      if ( ((int (__fastcall *)(int))loc_1E2198)(72) == 1 )
        sub_93170((char *)*v13, v14, "qAttached:%x", a2);
      else
        sub_93170((char *)*v13, v14, "qAttached");
      v7 = 0;
      sub_1E7DEC(*v13);
      sub_1E4EB8((char **)v13, (size_t *)v13 + 1, 0, 0, 0);
      a1 = sub_1E1768(*v13, dword_488A1C);
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          a1 = strcmp(*v13, "1");
          v7 = a1 == 0;
        }
      }
      else
      {
        v7 = 0;
        LOBYTE(a1) = sub_946B0("Remote failure reply: %s", *v13);
      }
    }
  }
  else
  {
    v7 = a3 & 1;
  }
  v8 = sub_16F654((unsigned __int8)a1);
  if ( ((int (__fastcall *)(int))loc_16D884)(v8) )
  {
    v9 = sub_184018(a2);
    v9[8] = sub_1CD1E8((int)v9);
    v9[9] = dword_487D2C;
  }
  else
  {
    v9 = (_DWORD *)sub_183688();
    sub_183998((int)v9, a2);
  }
  *((_BYTE *)v9 + 16) = v4 & 1;
  *((_BYTE *)v9 + 120) = v7;
  if ( a4 && !sub_FA624(0) )
    sub_9526C(a2, 0, 1);
  return v9;
}
