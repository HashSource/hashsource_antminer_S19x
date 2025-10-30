void __fastcall sub_9CCD0(int a1, _DWORD *a2)
{
  _DWORD *v4; // r0
  int v5; // r4
  const char *v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r2
  int v10; // r3
  const char *v11; // r1
  char *v12; // r5
  void *v13; // r6
  int v14; // r2
  int v15; // r3
  const char *v16; // r2
  int v17; // r2
  int v18; // r3
  void *ptr; // [sp+0h] [bp-18h] BYREF
  char v20; // [sp+8h] [bp-10h] BYREF

  v4 = (_DWORD *)sub_242FDC(a1);
  v5 = *v4;
  if ( a2[5] )
    v6 = "Catchpoint ";
  else
    v6 = "Temporary catchpoint ";
  sub_257380(*v4, v6, "Temporary catchpoint ", "Catchpoint ");
  sub_257504(v5, "bkptno", a2[6]);
  sub_257380(v5, &word_3B6A00, v7, v8);
  switch ( a1 )
  {
    case 2:
      sub_257380(v5, "failed Ada assertions", v9, v10);
      break;
    case 3:
      v16 = (const char *)a2[34];
      if ( v16 )
      {
        sub_931D8((char **)&ptr, "`%s' Ada exception handlers", v16);
        sub_257380(v5, ptr, v17, v18);
        if ( ptr != &v20 )
          sub_339E64(ptr);
      }
      else
      {
        sub_257380(v5, "all Ada exceptions handlers", 0, v10);
      }
      break;
    case 1:
      sub_257380(v5, "unhandled Ada exceptions", v9, v10);
      break;
    default:
      v11 = (const char *)a2[34];
      if ( v11 )
      {
        v12 = sub_93140("`%s' Ada exception", v11);
        v13 = sub_9253C((int)sub_9AD58, (int)v12);
        sub_257380(v5, v12, v14, v15);
        sub_92620(v13);
      }
      else
      {
        sub_257380(v5, "all Ada exceptions", v9, v10);
      }
      break;
  }
}
