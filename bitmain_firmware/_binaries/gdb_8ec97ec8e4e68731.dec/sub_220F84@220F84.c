_DWORD *__fastcall sub_220F84(_DWORD *a1, char *s, char *a3)
{
  size_t v5; // r9
  _DWORD *v6; // r11
  _DWORD *v7; // r7
  _DWORD *v8; // r4
  bool v9; // zf
  const char *v10; // r0
  int v11; // r0
  const char *v12; // r5
  int v15; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v16[6]; // [sp+Ch] [bp-18h] BYREF

  v5 = strlen(s);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( sub_1B7B9C() || sub_1B7B24() )
  {
    sub_15A00C(&v15);
    v6 = *(_DWORD **)(dword_487D2C + 36);
    if ( v6 )
    {
      while ( 1 )
      {
        v7 = (_DWORD *)v6[5];
        if ( v7 )
          break;
LABEL_14:
        v6 = (_DWORD *)*v6;
        if ( !v6 )
          goto LABEL_15;
      }
      while ( 1 )
      {
        v8 = (_DWORD *)v7[3];
        if ( v8 )
          break;
LABEL_13:
        v7 = (_DWORD *)*v7;
        if ( !v7 )
          goto LABEL_14;
      }
      while ( 1 )
      {
        if ( j_strcmp((const char *)v8[3], "_globals_") )
        {
          v9 = sub_15A078(&v15, v8[3]) == 0;
          v10 = (const char *)v8[3];
          if ( !v9 || (v9 = j_strncmp(v10, s, v5) == 0, v10 = (const char *)v8[3], !v9) )
          {
            v11 = sub_3245A4(v10);
            v12 = (const char *)v11;
            if ( v8[3] == v11 || sub_15A078(&v15, v11) || j_strncmp(v12, s, v5) )
              goto LABEL_12;
            v10 = v12;
          }
          sub_220F00(v10, s, a3, (int)a1);
        }
LABEL_12:
        v8 = (_DWORD *)*v8;
        if ( !v8 )
          goto LABEL_13;
      }
    }
LABEL_15:
    v16[0] = &v15;
    v16[1] = s;
    v16[3] = v5;
    v16[2] = a3;
    v16[4] = a1;
    sub_215390((int)sub_221150, (int)v16, 0);
    sub_15A060(&v15);
  }
  return a1;
}
