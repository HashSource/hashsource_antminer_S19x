int __fastcall sub_61908(int a1, int a2, int a3)
{
  int result; // r0
  _DWORD *v4; // r5
  int v5; // r3
  int i; // r0
  int v7; // r7
  char *v8; // r2
  int v9; // r1
  int v10; // r0
  int v11; // r0
  int v12; // [sp+8h] [bp-2Ch]
  int v13; // [sp+Ch] [bp-28h] BYREF
  int v14; // [sp+10h] [bp-24h]
  int v15; // [sp+14h] [bp-20h]
  int v16; // [sp+1Ch] [bp-18h] BYREF
  int v17; // [sp+20h] [bp-14h] BYREF
  int v18; // [sp+24h] [bp-10h] BYREF
  int v19; // [sp+28h] [bp-Ch]
  int v20; // [sp+2Ch] [bp-8h]

  v13 = a1;
  v14 = a2;
  v15 = a3;
  if ( sub_98F78(&v13, &dword_46BBCC) || sub_98FB8(&v13) )
    result = ((int (*)(void))loc_23DBE4)();
  else
    result = sub_23E408(v13, v14, v15);
  if ( !*(_DWORD *)(result + 124) )
  {
    v4 = (_DWORD *)dword_48769C;
    v5 = dword_487668;
    dword_487668 = dword_48769C;
    v12 = v5;
    if ( dword_48769C )
    {
      for ( i = sub_191AC0(result); ; i = sub_191AC0(result) )
      {
        result = sub_605EC(i);
        v7 = result;
        if ( !result )
          goto LABEL_26;
        v16 = dword_46DC04;
        sub_22F048(result);
        v18 = v13;
        v19 = v14;
        v20 = v15;
        if ( !dword_46BA08 && dword_474884 )
        {
          v8 = (char *)dword_474874;
          if ( !dword_474874 )
            v8 = "";
          sub_2594B0(*(_DWORD *)(v7 + 36), "%s^running\n", v8);
        }
        if ( ps_getpid_0(&v18) == -1 )
          goto LABEL_30;
        if ( !sub_98FB8(&v18) )
        {
          v10 = sub_23E408(v18, v19, v20);
          if ( !v10 )
          {
            sub_94700(
              "mi/mi-interp.c",
              1016,
              "%s: Assertion `%s' failed.",
              "void mi_on_resume_1(mi_interp*, ptid_t)",
              "ti");
            v11 = sub_62B7C(&v16);
            dword_487668 = v12;
            sub_338FFC(v11);
          }
          sub_2594B0(*(_DWORD *)(v7 + 36), "*running,thread-id=\"%d\"\n", *(_DWORD *)(v10 + 20));
          goto LABEL_17;
        }
        v17 = 0;
        sub_183B38(sub_60390, &v17);
        if ( v17 == 1 )
LABEL_30:
          sub_2594B0(*(_DWORD *)(v7 + 36), "*running,thread-id=\"all\"\n");
        else
          sub_23E4A0(sub_60844, &v18);
LABEL_17:
        v9 = *(_DWORD *)(v7 + 36);
        if ( !dword_46BA08 )
        {
          if ( dword_474884 )
          {
            dword_46BA08 = 1;
            if ( !*(_DWORD *)(dword_487668 + 68) )
            {
              sub_256850("(gdb) \n", v9);
              v9 = *(_DWORD *)(v7 + 36);
            }
          }
        }
        result = sub_25680C(v9);
        if ( v16 == 1 )
        {
          result = sub_22F048(result);
        }
        else if ( v16 )
        {
          if ( v16 == 2 )
            result = sub_22EFF4(result);
        }
        else
        {
          result = sub_22EF7C(result);
        }
LABEL_26:
        v4 = (_DWORD *)*v4;
        if ( !v4 )
          break;
        dword_487668 = (int)v4;
      }
    }
    dword_487668 = v12;
  }
  return result;
}
