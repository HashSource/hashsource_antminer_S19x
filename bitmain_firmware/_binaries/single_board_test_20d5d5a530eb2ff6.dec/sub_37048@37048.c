int sub_37048()
{
  int result; // r0
  unsigned __int8 *v1; // r7
  _DWORD *v2; // r0
  _DWORD *v3; // r8
  int v4; // r5
  unsigned int *v5; // r3
  unsigned int v6; // r2
  unsigned int v7; // r2
  size_t v8; // [sp+8h] [bp-130h] BYREF
  char v9[48]; // [sp+Ch] [bp-12Ch] BYREF
  char v10[252]; // [sp+3Ch] [bp-FCh] BYREF

  v8 = 0;
  sub_1E938(v10, 0x30u);
  printf("%s ", v10);
  printf("%s :  \n", "submit_result_to_MES_system");
  word_628C50 = 32;
  sub_3CC5C(&word_628C50, v10);
  result = sub_2F070(2);
  if ( result )
  {
    if ( sub_30360(" ", dword_628A4C) )
    {
      v1 = sub_30548(&v8);
      if ( v1 )
      {
        sub_1E938(v10, 0x30u);
        printf("%s ", v10);
        printf("%s : length:%d,submit_result_response:%s\n", "submit_result_to_MES_system", v8, (const char *)v1);
        snprintf(byte_628F50, 0x100u, "length:%d,submit_result_response:%s", v8, (const char *)v1);
        sub_3CC5C(byte_628F50, v10);
        v2 = (_DWORD *)sub_7AAA0(v1, v8 - 1, 0, v10);
        v3 = v2;
        if ( v2 )
        {
          if ( *v2 )
          {
            sub_1E938(v9, 0x30u);
            v4 = 0;
            printf("%s ", v9);
            printf("%s : Don't get all respons after submit result\n", "submit_result_to_MES_system");
            strcpy(byte_629150, "Don't get all respons after submit result");
            sub_3CC5C(byte_629150, v9);
          }
          else
          {
            v4 = sub_3415C((int)v2);
          }
          free(v1);
          if ( v3[1] != -1 )
          {
            v5 = v3 + 1;
            __dmb(0xBu);
            do
            {
              v6 = __ldrex(v5);
              v7 = v6 - 1;
            }
            while ( __strex(v7, v5) );
            if ( !v7 )
              sub_7B714(v3);
          }
        }
        else
        {
          sub_1E938(v9, 0x30u);
          printf("%s ", v9);
          printf("%s : Don't get all respons after submit result\n", "submit_result_to_MES_system");
          v4 = 0;
          strcpy(byte_629150, "Don't get all respons after submit result");
          sub_3CC5C(byte_629150, v9);
          free(v1);
        }
      }
      else
      {
        sub_1E938(v10, 0x30u);
        printf("%s ", v10);
        printf("%s : submit result fail\n", "submit_result_to_MES_system");
        v4 = 0;
        strcpy(byte_628E50, "submit result fail");
        sub_3CC5C(byte_628E50, v10);
      }
      if ( dword_21B5EC != -1 )
      {
        close(dword_21B5EC);
        dword_21B5EC = -1;
        sub_1E938(v9, 0x30u);
        printf("%s ", v9);
        printf("%s : close socket\n", "submit_result_to_MES_system");
        strcpy(byte_629050, "close socket");
        sub_3CC5C(byte_629050, v9);
      }
      return v4;
    }
    else
    {
      sub_1E938(v10, 0x30u);
      printf("%s ", v10);
      printf("%s : send submit result information fail\n", "submit_result_to_MES_system");
      strcpy(byte_628D50, "send submit result information fail");
      sub_3CC5C(byte_628D50, v10);
      return 0;
    }
  }
  return result;
}
