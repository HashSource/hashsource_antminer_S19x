int __fastcall sub_15A230(_DWORD *a1, char *a2, char *a3, int a4)
{
  bool v4; // zf
  signed int v8; // r0
  unsigned int v9; // r8
  signed int v10; // r0
  signed int v12; // r0
  unsigned int v13; // r0
  char *endptr; // [sp+Ch] [bp-4h] BYREF

  v4 = a2 == 0;
  if ( a2 )
    v4 = a1 == 0;
  if ( v4 )
  {
    sub_D0048(38, 171, 67, (int)"crypto/engine/eng_ctrl.c", 237);
    return 0;
  }
  if ( a1[14] && (v8 = sub_159F00(a1, 13, 0, a2, 0), v9 = v8, v8 > 0) )
  {
    if ( sub_15A168(a1, v8) )
    {
      v10 = sub_159F00(a1, 18, v9, 0, 0);
      if ( v10 < 0 )
      {
        a4 = 0;
        sub_D0048(38, 171, 110, (int)"crypto/engine/eng_ctrl.c", 271);
        return a4;
      }
      if ( (v10 & 4) != 0 )
      {
        if ( !a3 )
          return (int)sub_159F00(a1, v9, 0, 0, 0) > 0;
        a4 = 0;
        sub_D0048(38, 171, 136, (int)"crypto/engine/eng_ctrl.c", 280);
        return a4;
      }
      if ( !a3 )
      {
        a4 = 0;
        sub_D0048(38, 171, 135, (int)"crypto/engine/eng_ctrl.c", 296);
        return a4;
      }
      if ( (v10 & 2) != 0 )
      {
        v12 = sub_159F00(a1, v9, 0, a3, v10 & 4);
        return v12 > 0;
      }
      a4 = v10 & 1;
      if ( (v10 & 1) != 0 )
      {
        v13 = strtol(a3, &endptr, 10);
        if ( a3 != endptr && !*endptr )
        {
          v12 = sub_159F00(a1, v9, v13, 0, 0);
          return v12 > 0;
        }
        a4 = 0;
        sub_D0048(38, 171, 133, (int)"crypto/engine/eng_ctrl.c", 320);
      }
      else
      {
        sub_D0048(38, 171, 110, (int)"crypto/engine/eng_ctrl.c", 314);
      }
      return a4;
    }
    sub_D0048(38, 171, 134, (int)"crypto/engine/eng_ctrl.c", 260);
    return 0;
  }
  else
  {
    if ( !a4 )
    {
      sub_D0048(38, 171, 137, (int)"crypto/engine/eng_ctrl.c", 255);
      return a4;
    }
    sub_D00F0();
    return 1;
  }
}
