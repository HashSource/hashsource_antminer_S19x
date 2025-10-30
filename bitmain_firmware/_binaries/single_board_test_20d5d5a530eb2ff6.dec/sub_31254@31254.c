int sub_31254()
{
  _DWORD *v1; // r0
  char v2[48]; // [sp+0h] [bp-30h] BYREF

  if ( dword_61CB1C )
  {
    sub_1E938(v2, 0x30u);
    printf("%s ", v2);
    printf("%s : Already malloced parse MES system config information!\n", "init_MES_system_config_information");
    strcpy(byte_61CC20, "Already malloced parse MES system config information!");
    sub_3CC5C(byte_61CC20, v2);
    return 1;
  }
  else
  {
    v1 = calloc(1u, 0x68u);
    dword_61CB1C = (int)v1;
    if ( v1 )
    {
      v1[25] = 0;
      return 1;
    }
    else
    {
      sub_6FBF4(0);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "malloc for parse");
      sub_1F650(2, "MES system");
      sub_1F650(3, "information fail");
      sub_1E938(v2, 0x30u);
      printf("%s ", v2);
      printf("%s : malloc for parse MES system config information fail!\n", "init_MES_system_config_information");
      strcpy(byte_61CB20, "malloc for parse MES system config information fail!");
      sub_3CC5C(byte_61CB20, v2);
      return 0;
    }
  }
}
