int __fastcall sub_3415C(int a1)
{
  int *v1; // r0
  int *v2; // r9
  int v3; // r6
  _DWORD *v4; // r7
  _DWORD *v5; // r8
  unsigned int *v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r2
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2
  unsigned int *v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r2
  _DWORD *v16; // r0
  const char *v17; // r0
  const char *v18; // r0
  const char *v19; // r0
  const char *v20; // r0
  const char *v21; // r0
  char v22[52]; // [sp+0h] [bp-34h] BYREF

  v1 = (int *)sub_7B2D0(a1, "result");
  v2 = v1;
  if ( !v1 )
  {
    sub_1E938(v22, 0x30u);
    printf("%s ", v22);
    printf("%s : Don't find result in submit result responce\n", "check_whether_MES_system_submit_result_is_correct");
    v3 = 0;
    strcpy(byte_622C4C, "Don't find result in submit result responce");
    sub_3CC5C(byte_622C4C, v22);
    return v3;
  }
  v3 = *v1;
  if ( *v1 )
  {
    sub_1E938(v22, 0x30u);
    printf("%s ", v22);
    printf("%s : Don't find result in submit result responce\n", "check_whether_MES_system_submit_result_is_correct");
    v3 = 0;
    v4 = 0;
    v5 = 0;
    strcpy(byte_622C4C, "Don't find result in submit result responce");
    sub_3CC5C(byte_622C4C, v22);
  }
  else
  {
    v16 = (_DWORD *)sub_7B2D0(v1, "code");
    v5 = v16;
    if ( v16 && *v16 == 2 )
    {
      v17 = (const char *)sub_7B4A8(v16);
      v4 = (_DWORD *)strcmp(v17, "000000");
      if ( v4 )
      {
        sub_1E938(v22, 0x30u);
        printf("%s ", v22);
        v18 = (const char *)sub_7B4A8(v5);
        printf("%s : submit result fail! code: %s\n\n", "check_whether_MES_system_submit_result_is_correct", v18);
        v19 = (const char *)sub_7B4A8(v5);
        snprintf(byte_62294C, 0x100u, "submit result fail! code: %s\n", v19);
        sub_3CC5C(byte_62294C, v22);
        v4 = (_DWORD *)sub_7B2D0(v2, "msg");
        if ( v4 && *v4 == 2 )
        {
          sub_1E938(v22, 0x30u);
          printf("%s ", v22);
          v20 = (const char *)sub_7B4A8(v4);
          printf("%s : submit result fail! msg: %s\n\n", "check_whether_MES_system_submit_result_is_correct", v20);
          v21 = (const char *)sub_7B4A8(v4);
          snprintf(byte_622B4C, 0x100u, "submit result fail! msg: %s\n", v21);
          sub_3CC5C(byte_622B4C, v22);
        }
        else
        {
          sub_1E938(v22, 0x30u);
          printf("%s ", v22);
          printf("%s : Don't get msg in result\n\n", "check_whether_MES_system_submit_result_is_correct");
          v3 = 0;
          strcpy(byte_622A4C, "Don't get msg in result\n");
          sub_3CC5C(byte_622A4C, v22);
        }
      }
      else
      {
        sub_1E938(v22, 0x30u);
        printf("%s ", v22);
        printf("%s : submit result success\n\n", "check_whether_MES_system_submit_result_is_correct");
        v3 = 1;
        strcpy(byte_62284C, "submit result success\n");
        sub_3CC5C(byte_62284C, v22);
      }
    }
    else
    {
      sub_1E938(v22, 0x30u);
      printf("%s ", v22);
      printf("%s : Don't get code in result\n\n", "check_whether_MES_system_submit_result_is_correct");
      v3 = 0;
      v4 = 0;
      strcpy(byte_62274C, "Don't get code in result\n");
      sub_3CC5C(byte_62274C, v22);
    }
  }
  if ( v2[1] != -1 )
  {
    v6 = (unsigned int *)(v2 + 1);
    __dmb(0xBu);
    do
    {
      v7 = __ldrex(v6);
      v8 = v7 - 1;
    }
    while ( __strex(v8, v6) );
    if ( !v8 )
      sub_7B714(v2);
  }
  if ( v5 )
  {
    if ( v5[1] != -1 )
    {
      v9 = v5 + 1;
      __dmb(0xBu);
      do
      {
        v10 = __ldrex(v9);
        v11 = v10 - 1;
      }
      while ( __strex(v11, v9) );
      if ( !v11 )
        sub_7B714(v5);
    }
  }
  if ( !v4 )
    return v3;
  if ( v4[1] == -1 )
    return v3;
  v12 = v4 + 1;
  __dmb(0xBu);
  do
  {
    v13 = __ldrex(v12);
    v14 = v13 - 1;
  }
  while ( __strex(v14, v12) );
  if ( v14 )
    return v3;
  sub_7B714(v4);
  return v3;
}
