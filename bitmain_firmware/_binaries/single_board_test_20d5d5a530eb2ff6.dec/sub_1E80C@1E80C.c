int sub_1E80C()
{
  const char *v1; // r1
  char v2[48]; // [sp+0h] [bp-30h] BYREF

  sub_1E938(v2, 48);
  printf("%s ", v2);
  printf("%s :  \n", "prepare_local_config_information");
  word_2332A0 = 32;
  sub_3CC5C(&word_2332A0, v2);
  if ( sub_18854() )
  {
    if ( sub_18974("/mnt/card/Config.ini") )
      return sub_5EC48(dword_223680 + 48);
    sub_6FBF4(0);
    sub_1F650(0, dword_223680 + 32);
    v1 = "parse local";
  }
  else
  {
    sub_6FBF4(0);
    sub_1F650(0, dword_223680 + 32);
    v1 = "malloc local";
  }
  sub_1F650(1, v1);
  sub_1F650(2, "config file");
  sub_1F650(3, "fail");
  return 0;
}
