int sub_4523C()
{
  int v0; // r6
  char v2[48]; // [sp+0h] [bp-30h] BYREF

  v0 = off_705328(*(_DWORD *)dword_705300);
  if ( v0 )
  {
    sub_1E938(v2, 0x30u);
    printf("%s ", v2);
    printf("%s : has is_unbalance, can not to rise freq more!!!\n", "check_unbalance");
    strcpy(byte_6433DC, "has is_unbalance, can not to rise freq more!!!");
    sub_3CC5C((int)byte_6433DC, v2);
  }
  return v0;
}
