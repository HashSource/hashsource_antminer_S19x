int __fastcall sub_23F42C(int result, int a2, int a3, int a4)
{
  _DWORD *v4; // r12
  int v6; // r7
  int i; // r4
  int v8; // r8
  _DWORD *v9; // r2
  int v10; // [sp+Ch] [bp-Ch] BYREF
  int v11; // [sp+10h] [bp-8h]
  int v12; // [sp+14h] [bp-4h]

  v4 = &dword_46BBCC;
  v10 = result;
  v11 = a2;
  v12 = a3;
  if ( dword_46BBCC == result && v11 == (_DWORD)qword_46BBD0 )
    goto LABEL_23;
  while ( 1 )
  {
    result = sub_98FB8(&v10);
    if ( result )
    {
      v6 = 0;
      goto LABEL_5;
    }
    result = v10;
    v9 = (_DWORD *)dword_48A4D4;
    if ( dword_48A4D4 )
      break;
LABEL_22:
    result = sub_94700(
               (int)"thread.c",
               1041,
               "%s: Assertion `%s' failed.",
               "void set_stop_requested(ptid_t, int)",
               "tp");
LABEL_23:
    if ( v12 == v4[2] )
    {
      v6 = 1;
LABEL_5:
      for ( i = dword_48A4D4; i; i = *(_DWORD *)(i + 4) )
      {
        if ( !v6 )
        {
          v8 = ps_getpid_0(i + 8);
          result = ps_getpid_0((int)&v10);
          if ( v8 != result )
            continue;
        }
        *(_DWORD *)(i + 224) = a4;
      }
      goto LABEL_19;
    }
  }
  while ( v10 != v9[2] || v11 != v9[3] || v12 != v9[4] )
  {
    v9 = (_DWORD *)v9[1];
    if ( !v9 )
      goto LABEL_22;
  }
  v9[56] = a4;
LABEL_19:
  if ( a4 )
    return sub_1B9980(v10, v11, v12);
  return result;
}
