int __fastcall sub_23F57C(int result, int a2, int a3)
{
  _DWORD *v3; // r3
  int v4; // r6
  _DWORD *v5; // r4
  int v6; // r7
  int v7; // r3
  int v8; // r3
  int v9; // r9
  int v10; // [sp+Ch] [bp-10h] BYREF
  int v11; // [sp+10h] [bp-Ch]
  int v12; // [sp+14h] [bp-8h]

  v3 = &dword_46BBCC;
  v10 = result;
  v11 = a2;
  v12 = a3;
  if ( dword_46BBCC == result && v11 == (_DWORD)qword_46BBD0 )
    goto LABEL_30;
  while ( 1 )
  {
    result = sub_98FB8(&v10);
    if ( result )
    {
      v4 = 0;
      goto LABEL_5;
    }
    result = dword_48A4D4;
    if ( dword_48A4D4 )
      break;
LABEL_29:
    result = sub_94700((int)"thread.c", 1076, "%s: Assertion `%s' failed.", "void finish_thread_state(ptid_t)", "tp");
LABEL_30:
    if ( v12 == v3[2] )
    {
      v4 = 1;
LABEL_5:
      v5 = (_DWORD *)dword_48A4D4;
      if ( !dword_48A4D4 )
        return result;
      v6 = 0;
      while ( 1 )
      {
LABEL_10:
        if ( v5[11] == 2 )
          goto LABEL_9;
        if ( !v4 )
        {
          v9 = ps_getpid_0((int)&v10);
          result = ps_getpid_0((int)(v5 + 2));
          if ( v9 != result )
            goto LABEL_9;
        }
        if ( v5[9] )
          break;
        v5[11] = 0;
        result = sub_23DBD4((int)v5);
        v5 = (_DWORD *)v5[1];
        if ( !v5 )
        {
LABEL_14:
          if ( v6 )
            return sub_1B9A4C(v10, v11, v12);
          return result;
        }
      }
      v7 = v5[11];
      v5[11] = 1;
      if ( !v7 )
        v6 = 1;
LABEL_9:
      v5 = (_DWORD *)v5[1];
      if ( !v5 )
        goto LABEL_14;
      goto LABEL_10;
    }
  }
  while ( v10 != *(_DWORD *)(result + 8) || v11 != *(_DWORD *)(result + 12) || v12 != *(_DWORD *)(result + 16) )
  {
    result = *(_DWORD *)(result + 4);
    if ( !result )
      goto LABEL_29;
  }
  v8 = *(_DWORD *)(result + 44);
  if ( v8 != 2 )
  {
    if ( *(_DWORD *)(result + 36) )
    {
      *(_DWORD *)(result + 44) = 1;
      if ( !v8 )
        return sub_1B9A4C(v10, v11, v12);
    }
    else
    {
      *(_DWORD *)(result + 44) = 0;
      return sub_23DBD4(result);
    }
  }
  return result;
}
