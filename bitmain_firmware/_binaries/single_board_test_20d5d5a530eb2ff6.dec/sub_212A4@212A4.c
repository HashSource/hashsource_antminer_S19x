int sub_212A4()
{
  int v0; // r0
  char v2[48]; // [sp+0h] [bp-30h] BYREF

  if ( sub_21208() )
  {
    while ( sub_21208() )
      ;
    do
    {
      v0 = sub_21208();
      byte_22367C = 1;
    }
    while ( !v0 );
    return 1;
  }
  else
  {
    sub_6FBF4(0);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "plug off");
    sub_1F650(2, "befor test done");
    sub_1E938(v2, 0x30u);
    printf("%s ", v2);
    printf("%s : plug off hashboard befor test done\n", "check_whether_hashboard_plug_in_again");
    strcpy(byte_6017BC, "plug off hashboard befor test done");
    sub_3CC5C(byte_6017BC, v2);
    return 0;
  }
}
