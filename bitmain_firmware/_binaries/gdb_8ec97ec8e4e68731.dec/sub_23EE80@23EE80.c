int __fastcall sub_23EE80(__int64 a1, int a2, int a3)
{
  __int64 *v3; // r12
  int v5; // r7
  int i; // r4
  int v7; // r8
  _DWORD *v8; // r2
  __int64 v10; // [sp+Ch] [bp-Ch] BYREF
  int v11; // [sp+14h] [bp-4h]

  v3 = &qword_46BBCC;
  v10 = a1;
  v11 = a2;
  if ( a1 == qword_46BBCC )
    goto LABEL_20;
  while ( 1 )
  {
    LODWORD(a1) = sub_98FB8((int *)&v10);
    if ( (_DWORD)a1 )
    {
      v5 = 0;
      goto LABEL_4;
    }
    LODWORD(a1) = v10;
    v8 = (_DWORD *)dword_48A4D4;
    if ( dword_48A4D4 )
      break;
LABEL_19:
    LODWORD(a1) = sub_94700(
                    (int)"thread.c",
                    889,
                    "%s: Assertion `%s' failed.",
                    "void set_resumed(ptid_t, int)",
                    "tp != NULL");
LABEL_20:
    if ( v11 == *((_DWORD *)v3 + 2) )
    {
      v5 = 1;
LABEL_4:
      for ( i = dword_48A4D4; i; i = *(_DWORD *)(i + 4) )
      {
        if ( !v5 )
        {
          v7 = ps_getpid_0(i + 8);
          LODWORD(a1) = ps_getpid_0((int)&v10);
          if ( v7 != (_DWORD)a1 )
            continue;
        }
        *(_DWORD *)(i + 40) = a3;
      }
      return a1;
    }
  }
  while ( (_DWORD)v10 != v8[2] || HIDWORD(v10) != v8[3] || v11 != v8[4] )
  {
    v8 = (_DWORD *)v8[1];
    if ( !v8 )
      goto LABEL_19;
  }
  v8[10] = a3;
  return a1;
}
