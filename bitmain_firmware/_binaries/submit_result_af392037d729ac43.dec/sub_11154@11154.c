int __fastcall sub_11154(const char *a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r5
  _DWORD *v8; // r0
  _DWORD *v9; // r6
  const char *v10; // r0
  const char *v11; // r0
  _DWORD *v12; // r0
  const char *v13; // r0
  _BYTE v14[252]; // [sp+4h] [bp-FCh] BYREF

  printf("%s: %s", "check_whether_submit_result_success", a1);
  v4 = (_DWORD *)sub_13604(a1, a2, 0, v14);
  if ( v4 && !*v4 )
  {
    v6 = (_DWORD *)((int (*)(void))sub_13E38)();
    v7 = v6;
    if ( v6 && !*v6 )
    {
      v8 = (_DWORD *)((int (*)(void))sub_13E38)();
      v9 = v8;
      if ( v8 && *v8 == 2 )
      {
        v10 = (const char *)((int (*)(void))sub_14010)();
        if ( !strcmp(v10, "000000") )
        {
          puts("submit result success");
          return 1;
        }
        else
        {
          v11 = (const char *)sub_14010(v9);
          printf("submit result fail! code: %s\n", v11);
          v12 = (_DWORD *)sub_13E38(v7, "msg");
          if ( v12 && *v12 == 2 )
          {
            v13 = (const char *)sub_14010(v12);
            printf("submit result fail! msg: %s\n", v13);
            return 0;
          }
          else
          {
            puts("Don't get msg in result");
            return 0;
          }
        }
      }
      else
      {
        puts("Don't get code in result");
        return 0;
      }
    }
    else
    {
      puts("Don't get result in submit responce");
      return 0;
    }
  }
  else
  {
    puts("Don't get all respons after submit result");
    return 0;
  }
}
